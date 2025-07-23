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

class GradPoint
{
    public:
    
    float calculateGP(string grade)
    {
        if (grade == "A+") return 4.0;
        else if (grade == "A") return 3.75;
        else if (grade == "A-") return 3.5;
        else if (grade == "B+") return 3.25;
        else if (grade == "B") return 3.0;
        else if (grade == "B-") return 2.75;
        else if (grade == "C+") return 2.5;
        else if (grade == "C") return 2.25;
        else if (grade == "D") return 2.0;
        else return 0.0; // For grade F
    }
};
int main()
{
    Greading grad;
    GradPoint gp;
    double subject1, subject2, subject3,subject4, subject5;
    cout<< "Enter marks for Subject 1: ";
    cin >> subject1;
    cout<< "Enter marks for Subject 2: ";
    cin >> subject2;
    cout<< "Enter marks for Subject 3: ";
    cin >> subject3;
    cout<< "Enter marks for Subject 4: ";
    cin >> subject4;
    cout<< "Enter marks for Subject 5: ";
    cin >> subject5;
    cout<< "\n"<<endl;
    string Subject_grade = grad.calculateGrade(subject1);
    float subject1_gp = gp.calculateGP(Subject_grade);
    cout << "Subject 1 Grade: " << Subject_grade << " | Grade Point: " << subject1_gp << endl;

    Subject_grade = grad.calculateGrade(subject2);
    float subject2_gp = gp.calculateGP(Subject_grade);
    cout << "Subject 2 Grade: " << Subject_grade << " | Grade Point: " << subject2_gp << endl;

    Subject_grade = grad.calculateGrade(subject3);
    float subject3_gp = gp.calculateGP(Subject_grade);
    cout << "Subject 3 Grade: " << Subject_grade << " | Grade Point: " << subject3_gp << endl;

    Subject_grade = grad.calculateGrade(subject4);
    float subject4_gp = gp.calculateGP(Subject_grade);
    cout << "Subject 4 Grade: " << Subject_grade << " | Grade Point: " << subject4_gp << endl;

    Subject_grade = grad.calculateGrade(subject5);
    float subject5_gp = gp.calculateGP(Subject_grade);
    cout << "Subject 5 Grade: " << Subject_grade << " | Grade Point: " << subject5_gp << endl;

    // Calculate total grade point
    cout<< "\n"<<endl;
    float total_gp = (subject1_gp + subject2_gp + subject3_gp + subject4_gp + subject5_gp) / 5.0;
    cout << "Total Grade Point: " << total_gp << endl;

    return 0;
}