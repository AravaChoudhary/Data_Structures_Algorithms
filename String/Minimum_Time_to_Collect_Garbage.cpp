#include<iostream>
#include<vector>
#include<string>

using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {

    int n = garbage.size();
    
    // P, M, G trucks
    int pickP = 0, travelP = 0, lastHouseP = 0;
    int pickM = 0, travelM = 0, lastHouseM = 0;
    int pickG = 0, travelG = 0, lastHouseG = 0;
     
    // Let's travel to the street of houses
    for(int i = 0; i < n; i++) {
        // ith house
        string current_house = garbage[i];

        // Let's dive into the current house and see the type of garbage
        for(int j = 0; j < current_house.length(); j++) {

            char garbage_type = current_house[j];

            if(garbage_type == 'P') {
                pickP++;
                lastHouseP = i; // yahan tak toh mera P truck. pakka aaya hai , so lets store it. 
            }

            if(garbage_type == 'M') {
                pickM++;
                lastHouseM = i;
            }

            if(garbage_type == 'G') {
                pickG++;
                lastHouseG = i;
            }
        }
    }

    
    // Let's Calculate Travel Time for P
    for(int i = 0; i < lastHouseP; i++)
        travelP  = travelP + travel[i];

    // Let's Calculate Travel Time for M
    for(int i = 0; i < lastHouseM; i++)
        travelM = travelM + travel[i];

    // Let's Calculate Travel Time for G
    for(int i = 0; i < lastHouseG; i++)
        travelG = travelG + travel[i];


    int total_pick_time = pickP + pickM + pickG;
    int total_travel_time = travelP + travelM + travelG;
    int total_time = total_pick_time + total_travel_time;

    return total_time;

}

int main() {

    int n;
    cout << "\nEnter number of Houses : ";
    cin >> n;

    vector<string> garbage(n);
    cout << "Enter Garbage Type in Each House : ";
    for (int i = 0; i < n; i++)
        cin >> garbage[i]; // takes input word by word


    vector<int> travel(n - 1);
    cout << "\nEnter Travel Time Array : ";
    for (int i = 0; i < n - 1; i++)
        cin >> travel[i];

    cout<<"\nMinimum Amount of Time is : "<<garbageCollection(garbage, travel)<<endl;
    
    return 0;

}

// Time Complexity -> O(n * m)
// Space Complexity -> O(1)

// LeetCode - 2391.