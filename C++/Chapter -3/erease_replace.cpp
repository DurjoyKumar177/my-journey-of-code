#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a = "HelloWorld";
    a.erase(4, 1); // here 4 is starting loacation and 1 is amount or character ;
    cout << a << endl;
    a.erase(5); // erase all after location 5
    cout << a << endl;

    a.replace(4, 3, "so"); // 4 is starting loaction; 3 is amount of character and then give the which strig you want to replace;
    // so replace is erase and add character;

    string b = "hello world";
    b.replace(6, 0, "hi ");
    cout << b << endl;
    b.insert(5, "Durjoy"); // 5 is starting location and then replace world;
    cout << b << endl;
    return 0;
}