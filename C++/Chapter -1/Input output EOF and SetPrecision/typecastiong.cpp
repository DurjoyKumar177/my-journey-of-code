#include<iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    int acchi= c;
    cout<< c << " " << acchi <<endl;
    // we also used
    cout<< int(c)<<endl;

    long long int b=125525;
    
    double a= (long long int) (b);// for double of more world variable we should use (verable);

    cout<< a;

    return 0;
}