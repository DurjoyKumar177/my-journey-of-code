//Typecasting in C++ refers to the process of converting a variable from one data type to another.

#include<iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    int acchi= c; // acchi is the ASCII value of the character c
    cout<< c << " " << acchi <<endl;
    // we also used
    cout<< int(c)<<endl; //another way for showing the ASCII value of the character c

    long long int b=125525;
    
    double a= (long long int) (b);// for double of more world variable we should use (verable);

    cout<< a;

    return 0;
}