# 🧮 Sieve of Eratosthenes and Segmented Sieve Explained with C++ Implementation  
### 🚀 Optimized Prime Number Generation (Useful for Count Primes & Large Ranges)

Hi everyone 👋,  

I was working on **prime number generation** today and implemented both the **Sieve of Eratosthenes** and the **Segmented Sieve** in C++.  

Since primes come up in several LeetCode problems (e.g., [204. Count Primes](https://leetcode.com/problems/count-primes/), [1179. Prime Arrangements](https://leetcode.com/problems/prime-arrangements/), [866. Prime Palindrome](https://leetcode.com/problems/prime-palindrome/)), I thought of sharing this for anyone interested in **optimizations**.

---

## 🔹 Sieve of Eratosthenes (Classic Approach)

The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers up to a given limit `n`.

### 🔧 Key Ideas:
- Marks non-primes in range `[2..n]`.  
- **Optimizations used:**
  - Start inner marking from `i * i` (smaller multiples already handled).
  - Outer loop runs only up to `sqrt(n)`.

---

### 💻 Code:
```cpp
vector<bool> Sieve_of_Eratosthenes(int n) {

    // Creating a sieve Array of n size telling isPrime.
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for(int i = 2; i * i <= n; i++) {

        if(sieve[i] == true) {

            // int j = i * 2;

            // Optimization 1 : 
            // First unmarked number would be (i * i), as others have been marked by 2 to (i - 1).
            int j = i * i;             

            while(j < n) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}
```

---

### ⏱️ Complexities:
| Complexity | Value |
|-------------|--------|
| **Time** | O(N log log N) |
| **Space** | O(N) |

---

## 🔹 Segmented Sieve (Efficient for Large Ranges)

Sometimes we don’t need primes up to `n`, but only in a **range [L, R]** (for example `[10⁹, 10⁹ + 1000]`).  
For that, the **Segmented Sieve** is much more memory-efficient.

---

### ⚙️ Algorithm Steps:
1. **Generate base primes** → First, generate all primes up to `sqrt(R)` using the normal sieve.  
2. **Mark non-primes in [L, R]:**
   - For each base prime, find the first multiple in `[L, R]`.
   - **Special care:**
     - If `(L / prime) * prime < L`, then `first_multiple += prime`.
     - Ensure starting multiple is at least `prime * prime`.

---

### 💻 Code:
```cpp
vector<bool> Segmented_Sieve(int L, int R) {

    // Get me the Prime Array, I will use it to Mark the Segmented Sieve.
    vector<bool> sieve = Sieve_of_Eratosthenes(sqrt(R));

    vector<int> basePrimes;
    for(int i = 0; i < sieve.size(); i++) {
        if(sieve[i])
            basePrimes.push_back(i);
    }

    vector<bool> seg_sieve(R - L + 1, true);
    if(L == 1 or L == 0)
        seg_sieve[L] = false;

    for(auto prime : basePrimes) {

        int first_multiple = (L / prime) * prime;
        
        if(first_multiple < L)
            first_multiple += prime;

        int j = max(first_multiple, prime * prime);

        while(j <= R) {
            seg_sieve[j - L] = false;
            j += prime;
        }
    }

    return seg_sieve;
}
```

---

### 🧠 Driver Code
```cpp
int main() {
    int L = 110;
    int R = 130;

    vector<bool> ss = Segmented_Sieve(L, R);

    cout << "\nPrimes between " << L << " and " << R << " are: ";
    for(int i = 0; i < ss.size(); i++) {
        if(ss[i])
            cout << i + L << " ";
    }
    cout << endl;

    return 0;
}
```

---

### ⏱️ Complexities:
| Complexity | Value |
|-------------|--------|
| **Time** | O(√R log log R + (R−L+1) log log R) |
| **Space** | O(√R + (R−L+1)) |

---

### 🧩 Summary
| Concept | Best For | Memory | Range Example |
|----------|-----------|---------|----------------|
| **Sieve of Eratosthenes** | Small to medium `n` | O(n) | `n ≤ 10⁷` |
| **Segmented Sieve** | Large ranges | O(√R + (R−L+1)) | `[10⁹, 10⁹ + 10⁶]` |
