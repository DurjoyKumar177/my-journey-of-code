#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    cin>>x;
    cin.ignore();//to avoid a character;
    //getchar();we can also use that;
    string s;
    getline(cin,s);//getline is used to take a string with space;
    //cin>>s; //this will not take the space;
    cout<<endl;
    cout<<"Given String is: "<<s<<endl;
    cout<<"Given Integer: " <<x<<endl;
    return 0;
}