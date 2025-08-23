#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(int arr[], int start, int end, int x) {

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == x)
            return mid;

        else if(arr[mid] > x)
            end = mid - 1;
        
        else
            start = mid + 1;
    }

    return -1;
}

int UnboundSearch(int arr[], int x) {

    int i = 0, j = 1;

    while(arr[j] < x) {
        
        i = j;
        j = j * 2;
    }

    int start = i;
    int end = j;

    return BinarySearch(arr, start, end, x);
    
}

int main() {

    int arr[] = {1010, 1120, 1364, 1493, 1647, 2076, 2314, 2368, 2441, 2547, 2551, 2701, 3537, 3672, 3972, 4218, 4382, 4416, 5086, 5396, 5597, 5738, 5877, 6567, 6933, 7088, 7254, 7507, 7723, 7935, 8641, 8777, 8832, 9092, 9164, 9274, 9805, 9873, 9972, 9996};
    int x;

    cout<<"\nSearch an Element in an Infinite Sorted Array"<<endl;

    cout<<"\nEnter the Element that you wanna Search : ";
    cin>>x;

    int ans = UnboundSearch(arr, x);
    cout<<"\nElement Found at "<<ans<<" Index\n"<<endl;
  
    return 0;
    
}

// LeetCode -> Premium Question.