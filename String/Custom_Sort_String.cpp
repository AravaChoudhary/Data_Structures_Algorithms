#include<iostream>
#include<string>
#include<map>

using namespace std;

static string orderCopy;

static bool cmp(char& a , char& b) {

    // Login --> Order waali string mein dekho ki konsa char pehele aana cahiye and konsa baadmein.

    // True --> a will be placed before b
    // False --> b will be placed before a
    
    // hume sirf order waali string mein a and b kahan, kaise exist karta hai, same vo replicate karna hai.
    return (orderCopy.find(a) < orderCopy.find(b));

}

string customSortString(string order, string s) {

    orderCopy = order;
    sort(s.begin(), s.end(), cmp);
    return s;
}

int main() {

    string order, s;
    cout<<"\nEnter the Order : ";
    getline(cin, order);

    cout<<"\nEnter s : ";
    getline(cin, s);

    cout<<"\nDecoded Message is : "<<customSortString(order, s)<<endl;
    
    return 0;

}

// Time Complexity -> O( S log s + O(Order.Length()) 
// Space Complexity -> O(1)

// LeetCode - 791.