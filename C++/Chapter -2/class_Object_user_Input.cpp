#include<bits/stdc++.h>

using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;    
};
int main()
{
    Student a,b;
    cin>>a.name>>a.roll>>a.cgpa;
    
    getchar();//to skip one character;becouse here is a space between two character;
    cin.getline(b.name,100);//to gate space between name or title
    cin>>b.roll>>b.cgpa;

    cout<<a.name<< " "<< a.roll<< " "<<a.cgpa<<endl;
    cout<< b.name<< " "<< b.roll<< " "<< b.cgpa<<endl;

    cout<< "Best Student is: ";

    if(a.cgpa>b.cgpa)
    cout<<a.name<< " "<< a.roll<< " "<<a.cgpa<<endl;
    else if(a.cgpa==b.cgpa && a.roll<b.roll)
    cout<<a.name<< " "<< a.roll<< " "<<a.cgpa<<endl;
    else
    cout<< b.name<< " "<< b.roll<< " "<< b.cgpa<<endl;
    return 0;
}
// input:
// Dev 123 3.54
// Sree Durjoy Kumar
// 102 4.0
// output:
// Dev 123 3.54
// Sree Durjoy Kumar 102 4
// Best Student is: Sree Durjoy Kumar 102 4