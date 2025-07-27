#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin, s);

    // A stringstream is a stream class used to operate on strings.
// It allows us to insert and extract data as if it were a stream, like cin and cout.

stringstream ss(s); // Create a stringstream object initialized with string 's'

// We can use the stringstream to read words from the string 's' one by one.
// ss<<s;// s ar value ss a jacche; arrow sign ja dike thakbe value sa dike jabe
string word;
while (ss >> word) {
    cout << word << endl; //ss এর value ak ak kore word a rakha hocche;
}
    cout<<"word count: ";
    int count=0;
    while (ss >> word)
    {
        count++;//sob string ar value word a chole gase bole count 0 hobe;
    }
    cout<<count<<endl;
        return 0;
}