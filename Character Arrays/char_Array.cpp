#include<iostream>
#include<vector>

using namespace std;

int getlength(char arr[], int size) {

    int count = 0;
    int index = 0;

    while(arr[index] != '\0') {
        // Jab tak Array mein null character nahi milta tab tak increment karo aur aage badho
        count++;
        index++;
    }

    return count;
}

// originalChar --> "@"
// newChar --> " "
void Replace_Character(char originalChar, char newChar, char arr[], int size) {

    for(int i = 0; i < size; i++) {

        if(arr[i] == originalChar)
            arr[i] = newChar;
    }

}


int main() {

    // // Creation
    // char arr[100];

    // cout<<"\nEnter your Name : ";
    // // cin>>arr;
    // cin.getline(arr, 100); //takes sentence input
    
    // cout<<"Your Name is : "<<arr<<endl;

    // cout<<arr[0]<<" → "<<(int)arr[0]<<endl;
    // cout<<arr[1]<<" → "<<(int)arr[1]<<endl;
    // cout<<arr[2]<<" → "<<(int)arr[2]<<endl;
    // cout<<arr[3]<<" → "<<(int)arr[3]<< endl;
    // cout<<arr[4]<<" → "<<(int)arr[4]<< endl;
    // cout<<arr[5]<<" → "<<(int)arr[5]<<endl;
    // cout<<arr[6]<<" → "<<(int)arr[6]<<endl;
    // cout<<arr[7]<<" → "<<(int)arr[7]<<endl;

    
    // char name[100];
    // cout<<"\n Enter Input : ";
    // cin.getline(arr, 50, '\t');
    // cout<<endl<<arr<<endl;

    // char array[1000];
    // cin>>array;
    // cout<<"Size of char array : "<<getlength(array,1000)<<endl;

    char arr1[1000];
    cin>>arr1;
    Replace_Character('@', ' ', arr1, 1000);
    cout<<arr1<<endl;



    return 0;

}