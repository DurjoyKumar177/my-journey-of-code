#include<iostream>
#include<iomanip>//means input output manipulation for set precision of edit output

using namespace std;
int main()
{
    double a;
    cin>>a;
    cout << fixed << setprecision(3) << a << endl;
    return 0;
}