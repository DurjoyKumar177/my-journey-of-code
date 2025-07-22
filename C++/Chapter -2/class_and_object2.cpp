#include<bits/stdc++.h>

using namespace std;
class Greading
{
public:
    // Function to calculate grade based on CGPA
    string calculateGrade(double marks) {
        if (marks >= 80) return "A+";
        else if (marks >= 75) return "A";
        else if (marks >= 70) return "A-";
        else if (marks >= 65) return "B+";
        else if (marks >= 60) return "B";
        else if (marks >= 55) return "B-";
        else if (marks >= 50) return "C+";
        else if (marks >= 45) return "C";
        else if (marks >= 40) return "D";
        else return "F";
    }
};
int main()
{
    Greading grad;
    double marks;
    cout << "Enter your marks: ";
    cin >> marks;
    string Subject_grade = grad.calculateGrade(marks);
    cout << "Your grade is: " << Subject_grade << endl;
    return 0;
}