#include <bits/stdc++.h> // This header file is not part of the C++ standard, but it's often used in competitive programming and some environments for its convenience. It includes many standard C++ headers, making it easy to get started without worrying about which specific headers are needed for certain functionalities.
using namespace std;

int main()
{
    int *a = new int, *b = new int; // new int is creat a heap memory and we keep thais value in a veraibel in stac memory
    *a = 10;
    cin >> *b;          // input taking
    cout << a << endl;  // here a is the location of varialbe a
    cout << *a << endl; //*a was dereferance the value
    cout << "b=" << *b << endl;
    float *f = new float;
    *f = 1.4355;
    cout << *f << endl;

    return 0;
}