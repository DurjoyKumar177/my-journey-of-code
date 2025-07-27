#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    s.resize(5);
    cout<<"After resize: "<<s<<endl;
    cout<<"Now size: "<<s.size()<<endl;
    s.resize(8);
    cout<< "After resize it to 8 we get: ";
    cout<<s<<endl;
    cout<< s.size()<<endl;
    s.resize(5);
    s.resize(8,'A');
    cout<<s<<endl;
    return 0;
}