#include <bits/stdc++.h>

using namespace std;
class Student
{
public:  //this is object access specifier. There are 3 type of access specifier in C++: 
        //1. public
        //2. private
        //3. protected
        //public members can be accessed from outside the class
        //private members can not be accessed from outside the class
        //protected members can be accessed by derived classes only
    //public members can be accessed from outside the class
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a; //here Student is a class and a is an object of that class
    //we can access the public members of the class using the object
    a.roll = 29; //here roll is a public member of the class Student
    a.cgpa = 3.95;
    char tmp[100] = "Rakib"; //here tmp is a temporary variable to store the name
    strcpy(a.name, tmp); //copying the name to the object using strcpy function
    //we can also use cin to take input from the user

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    return 0;
}