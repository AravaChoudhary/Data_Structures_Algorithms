#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> st;
    st.insert(10);
    st.insert(10);
    st.insert(30);
    st.insert(20);

    // Traversing
    set<int>::iterator it = st.begin();
    while(it != st.end()) {
        cout<<*it<<" ";
        it++;
    }
    

    return 0;
}