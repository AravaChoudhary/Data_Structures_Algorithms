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


void convert_into_Upper_Case(char arr[], int n) {

    int len = getlength(arr,n);
    for(int i = 0; i < len ; i++) {
        char ch = arr[i];

        // If a letter is a lower case letter then only convert it.
        if(ch >= 'a' and ch <= 'z')
            ch = ch - 'a' + 'A';

        arr[i] = ch;
    }
}


void convert_into_Lower_Case(char arr[], int n) {

    int len = getlength(arr,n);
    for(int i = 0; i < len ; i++) {
        char ch = arr[i];

        // If a letter is a Upper case letter then only convert it.
        if(ch >= 'A' and ch <= 'Z')
            ch = ch - 'A' + 'a';
            
        arr[i] = ch;
    }
}

void ReverseCharArray(char arr[], int n) {

    int len = getlength(arr, n);
    int i = 0, j = len - 1;

    while(i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool Check_Palindrome(char arr[], int n) {

    int len = getlength(arr, n);
    int i = 0, j = len - 1;

    while(i <= j) {

        if(arr[i] == arr[j]) {
            i++;
            j--;
        }

        else //Not a palinfrome
            return false;
    }

    return true;
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

    // char arr1[1000];
    // cin>>arr1;
    // Replace_Character('@', ' ', arr1, 1000);
    // cout<<arr1<<endl;


    char arr1[1000];
    cout<<"Enter the Input : ";
    cin>>arr1;
    cout<<"\nConverted to Upper Case : ";
    convert_into_Upper_Case(arr1, 1000);
    cout<<arr1<<endl;

    cout<<"\nConverted to Lower Case : ";
    convert_into_Lower_Case(arr1,1000);
    cout<<arr1<<endl;

    cout<<"\nReversed Char Array : ";
    ReverseCharArray(arr1,1000);
    cout<<arr1<<endl;

    cout<<"\nPalindrome Check\n Yes (1) and No(0) : "<<Check_Palindrome(arr1, 1000)<<endl;;

    return 0;

}