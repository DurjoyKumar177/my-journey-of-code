#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s="Hello world";
    cout<<s.size()<<endl;//give the size of the string;
    cout<<s.max_size()<<endl;//general computer max size is 10^6;
    cout<<s.capacity()<<endl;//that indicate the current string capacity
    s.clear();
    cout<<"Size after clear stering: "<< s.size()<<s<<endl;
    s="hfihiehshfdhfiehshdfeshdfhahifaheufhasdfsfdhawesha";
    cout<< "new capacity: " <<s.capacity()<<endl;
    if(s.empty()==true) cout<<"Empty"<<endl;//s.empty is bulien function it return true or false;
    else
    cout<<"Not Empty"<< endl;
    s.clear();
    if(s.empty()==true) cout<<"Empty"<<endl;//s.empty is bulien function it return true or false;
    else
    cout<<"Not Empty"<< endl;

    return 0;
}