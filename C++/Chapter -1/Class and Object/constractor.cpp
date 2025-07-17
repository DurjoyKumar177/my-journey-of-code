#include<bits/stdc++.h>

using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
   Student rahim(29,9,5.00);//call constractor function; it is mendatory;
   Student karim(30,6,5.00);
   Student jamal(31,7,4.86);
   cout<<rahim.roll<< " "<<rahim.cls<< " "<<rahim.gpa<<endl;
   cout<<karim.roll<< " "<<karim.cls<< " "<<karim.gpa<<endl;
   cout<<jamal.roll<< " "<<jamal.cls<< " "<<jamal.gpa<<endl;



    return 0;
}