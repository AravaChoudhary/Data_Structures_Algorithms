#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main()
{
    // Creation
    unordered_map<string,string> table;
    
    // Insertion
    table["in"] = "India";
    table.insert(make_pair("en","England"));

    pair<string,string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    cout<<"Size : "<<table.size()<<endl;

    if(table.empty() == true) {
        cout<<"Map is Empty"<<endl;
    } else {
        cout<<"Map is NOT Empty"<<endl;
    }

    cout<<table.at("in")<<endl;
    //table.at("in") = "India2" --> way to modify

    cout<<"\nIterating on the Map"<<endl;
    unordered_map<string,string>::iterator it = table.begin();
    while(it != table.end()) {
        pair<string,string> p = *it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    } 

    // Find Function
    if(table.find("in") != table.end()) {
        cout<<"Key Found"<<endl;
    } else {
        cout<<"Key Not Found"<<endl;
    }

    // Count Function --> Returns number of elements with a Secified Key
    if(table.count("in") == 0) {
        cout<<"Key Not Found"<<endl;
    } 
    if(table.count("in") == 1) {
        cout<<"Key Found"<<endl;
    }

    return 0;
}