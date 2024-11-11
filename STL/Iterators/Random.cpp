#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
using namespace std;

int main() {

    //Random Access Iterator 
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    //traverse using iterator 
    vector<int>::iterator it = arr.begin();

    while(it != arr.end()) {
        //write 
        *it = *it + 7;
        //read
        cout << *it << " ";
        //forward move
        it++;
    }

    // let's try backward movement in vector iterator
    vector<int>::iterator it = arr.end() ;

    while(it != arr.begin()) {
        //pehle piche jaunga -> backward 
        it--;
        //fer print
        cout << *it << ' ';
    }
    

    //random access iterator 
    vector<int>::iterator it = arr.begin() + 3;
    cout << *it << endl;

    return 0;
}