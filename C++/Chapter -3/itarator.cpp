#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;//is used to show all string one by one
    cin>>s;
    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<endl;
    // }
    cout<<*s.begin()<<endl;
    cout<<*s.end()<<endl;//that indicate the lust character like null character;
    cout<<*(s.end()-1)<<endl;
    string::iterator it;//here it is a veriable any verable can be use here
    for(it=s.begin();it<s.end();it++)
    {
        cout<< *it<<endl;//iterator is pointer so we need to derefarence it ;
    }

//  also write as://
    // for(string::iterator it=s.begin();it<s.end();it++)
    // {
    //     cout<< *it<<endl;
    // }

    //also write as g++14 or update version as 
    // for(auto it=s.begin();it<s.end();it++)//with out declear string::iterator it;
    // {
    //     cout<< *it<<endl;//iterator is pointer so we need to derefarence it ;
    // }
    return 0;
}