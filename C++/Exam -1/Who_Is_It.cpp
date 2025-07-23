#include<bits/stdc++.h>

using namespace std;
class Student
{
    public:
        int id;
        char name[105];
        char sec;
        int TM;        
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student a,b,c;
        
        cin>>a.id>>a.name>>a.sec>>a.TM;
        cin>>b.id>>b.name>>b.sec>>b.TM;
        cin>>c.id>>c.name>>c.sec>>c.TM;
        
        if(a.TM>b.TM && a.TM>c.TM)
        cout<<a.id<<" "<<a.name<<" "<<a.sec<< " "<< a.TM<<endl;

        else if(b.TM>a.TM && b.TM>c.TM)
        cout<<b.id<<" "<<b.name<<" "<<b.sec<< " "<< b.TM<<endl;

        else if(c.TM>a.TM && c.TM>b.TM)
        cout<<c.id<<" "<<c.name<<" "<<c.sec<< " "<< c.TM<<endl;

        else if (a.TM==b.TM && b.TM==c.TM)
        {
            if(a.id<b.id && a.id<c.id)
            cout<<a.id<<" "<<a.name<<" "<<a.sec<< " "<< a.TM<<endl;
            if(b.id<a.id && b.id<c.id)
            cout<<b.id<<" "<<b.name<<" "<<b.sec<< " "<< b.TM<<endl;
            if(c.id<b.id && c.id<a.id)
            cout<<c.id<<" "<<c.name<<" "<<c.sec<< " "<< c.TM<<endl;
        }

        else if(a.TM==b.TM)
        {
            if(a.id<b.id)
                cout<<a.id<<" "<<a.name<<" "<<a.sec<< " "<< a.TM<<endl;
            else
            cout<<b.id<<" "<<b.name<<" "<<b.sec<< " "<< b.TM<<endl;
        }
         else if(c.TM==b.TM)
        {
            if(c.id<b.id)
                cout<<c.id<<" "<<c.name<<" "<<c.sec<< " "<< c.TM<<endl;
            else
            cout<<b.id<<" "<<b.name<<" "<<b.sec<< " "<< b.TM<<endl;
        }
        else if(a.TM==c.TM)
        {
            if(a.id<c.id)
                cout<<a.id<<" "<<a.name<<" "<<a.sec<< " "<< a.TM<<endl;
            else
            cout<<c.id<<" "<<c.name<<" "<<c.sec<< " "<< c.TM<<endl;
        }

    }
    return 0;
}