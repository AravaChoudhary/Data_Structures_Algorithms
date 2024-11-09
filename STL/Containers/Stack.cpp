#include<iostream>
#include<stack>

using namespace std;

int main()
{
    // Creation
    stack<int> st;

    // Insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Size : "<<st.size()<<endl;

    st.pop();
    cout<<"Size : "<<st.size()<<endl;

    cout<<"Top -> "<<st.top()<<endl;

    if(st.empty() == true) {
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Stack is NOT Empty"<<endl;
    }

    cout<<"Swapping"<<endl;
    stack<int> first;
    stack<int> second;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);

    second.push(11);
    second.push(12);
    second.push(13);
    second.push(14);

    first.swap(second);
    cout<<first.top()<<endl;

    return 0;
}