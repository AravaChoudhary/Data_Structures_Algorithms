#include<iostream>
#include<set>

using namespace std;

// TC --> O(n1 + n2 + n3) and SC --> O(n)
int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80}; 
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    int n1 = 6;
    int n2 = 5;
    int n3 = 8;

    vector<int> ans;
    set<int> st;
        
    int i,j,k;
    i = j = k = 0;
        
    while(i < n1 and j < n2 and k < n3)
    {
         if(arr1[i] == arr2[j] and arr2[j] == arr3[k])
        {
            // ans.push_back(arr1[i]);
            st.insert(arr1[i]);
            i++ , j++ , k++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr3[k])
        {
            j++;
        }
        else {
            k++;
        }
    }
        
         
    for(auto i : st)
    {
        ans.push_back(i);
    }
        
    cout<<"Common Element is : ";
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}