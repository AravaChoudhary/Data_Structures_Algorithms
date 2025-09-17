#include<iostream>
#include<string>

using namespace std;
  
int countDevices(string& binary) {

    int count = 0;
    for(auto b : binary)
        count += b - '0';
    
    return count;
}

int numberOfBeams(vector<string>& bank) {

    vector<int> devices;
    for(auto row : bank)
        devices.push_back(countDevices(row));

    int beams;
    for(int i = 0; i < devices.size(); i++) {

        int j = i + 1;
        while(j < devices.size()) {

            beams += devices[i] * devices[j];

            if(devices[j] == 0)
                i++;
            else
                break;
        }
    }

    return beams;
}


int main() {
    int n;
    cin >> n;
    vector<string> bank(n);

    cin.ignore();
    for (int i = 0; i < n; ++i) {
        getline(cin, bank[i]);
    }
    cout << numberOfBeams(bank) << endl;
    
    return 0;
}

// Time Complexity -> O(m * n)
// Space Complexity -> O(m)

// LeetCode - 2125.