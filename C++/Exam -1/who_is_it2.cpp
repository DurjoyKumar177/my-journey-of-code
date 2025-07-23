#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int id;
   char name[105];
    char section;
    int totalMarks;

    // Constructor to initialize the student details
    Student(int _id, char _name, char _section, int _totalMarks)
    {
        id= _id;
        name[105] = _name;
        section= _section;
        totalMarks= _totalMarks;
    }

    // Function to print student details
    void printDetails() {
        cout << id << " " << name << " " << section << " " << totalMarks << endl;
    }
};

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        // Input details for three students
        int id1, id2, id3;
        char name1[105], name2[105], name3[105];
        char section1, section2, section3;
        int marks1, marks2, marks3;

        cin >> id1 >> name1 >> section1 >> marks1;
        cin >> id2 >> name2 >> section2 >> marks2;
        cin >> id3 >> name3 >> section3 >> marks3;

        // Create Student objects
        Student student1(id1, name1, section1, marks1);
        Student student2(id2, name2, section2, marks2);
        Student student3(id3, name3, section3, marks3);

        // Determine the student with the highest total marks
        if (student1.totalMarks >= student2.totalMarks && student1.totalMarks >= student3.totalMarks) {
            student1.printDetails();
        } else if (student2.totalMarks >= student1.totalMarks && student2.totalMarks >= student3.totalMarks) {
            student2.printDetails();
        } else {
            student3.printDetails();
        }
    }

    return 0;
}
