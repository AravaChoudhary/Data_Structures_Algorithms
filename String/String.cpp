#include<iostream>
#include<vector>

using namespace std;

int main() {

    // Creating
    string str;
    // cout<<"Enter the String : ";
    // cin>>str;
    // cout<<"String is : "<<str<<endl;

    // str.push_back('N');
    // str.push_back('a');
    // str.push_back('i');
    // str.push_back('n');
    // str.push_back('i');
    // str.push_back('k');
    // str.push_back('a');
    // str.push_back('A');
    // str.pop_back();
    // cout<<"String is : "<<str<<endl;

    // string sentence;
    // getline(cin, sentence, '\n');
    // cout<<"String is : "<<sentence;

    // string name = "Jalaaludin Mohammed Akbar";
 
    // // cout<<name[0]<<endl;
    // // cout<<name.at(0)<<endl;
    // // cout<<name.front()<<endl;
    // // cout<<name.back()<<endl;
    // // cout<<name.length()<<endl;

    // auto it = name.begin();
    // while(it != name.end()) {
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    // name.clear();
    // if(name.empty())
    //     cout<<"String is Empty";
    // else
    //     cout<<"String is NOT Empty"<<endl;


    // string fname = "Arava";
    // string lname = "Choudhary";

    // string ans = fname + " " + lname;
    // cout<<ans<<endl;

    string greet = "Hello , How are you all ?";
    cout<<greet.substr(5,19)<<endl;

    string word = "How";
    int ans = greet.find(word);
    cout<<ans<<endl;

    string s1 = "Nainika";
    string s2 = "Arava";
    cout<<s1.compare(s2)<<endl;

    return 0;

}