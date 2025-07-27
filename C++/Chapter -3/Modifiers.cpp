#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a="Hello";
    string b="_World";
    a=a+b;//also write as a+=b; That is concatonate in string ;
    cout<<a<<endl;
    cout<<b<<endl;
    a.append(b);//same as a=a+b;
    cout<<a;  

    return 0;
}