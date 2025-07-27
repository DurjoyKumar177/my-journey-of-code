#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a="Hello";
    string b="world";
    a=a+'A';
    cout<< a<<endl;
    a="HelloA";//also work asme;
    a.push_back('A');//increase memory size and add character;
    cout<<a<<endl;
    a.pop_back();//remove one character ;
    cout<<a<<endl;

    return 0;
}