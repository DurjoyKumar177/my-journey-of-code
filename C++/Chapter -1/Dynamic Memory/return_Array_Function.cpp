#include <iostream>

using namespace std;

int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return 0;
}

int main()
{
    int *a=fun();
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
    
}