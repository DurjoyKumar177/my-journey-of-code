//definition of the ternary operator in C++:
// The ternary operator is a shorthand for an if-else statement that evaluates a condition and returns one of two values based on whether the condition is true or false. It is written as `condition ? value_if_true : value_if_false;`.

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    // (n%2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
    (n%2==0) ? cout << "Even"<< endl : cout<< "Odd"<< endl;
    return 0;
}