#include <iostream>

using namespace std;

// creating a student structure
struct Student
{
    char studentName[30];
    int studentExamNo;
    int studentAge;
};


int main() {
    // creating a student object
    Student s1;
    
    // get the student name
    cout << "Student Name: ";
    cin.getline(s1.studentName, 30);

    // get the student exam no
    cout << "Student Examination Number: ";
    cin >> s1.studentExamNo;

    // get the student age
    cout << "Student Age: ";
    cin >> s1.studentAge;

    // print out the student details
    cout << "\nStudent Details: \n";
    cout << "Name: " << s1.studentName << "\n";
    cout << "Exam No: " << s1.studentExamNo << "\n";
    cout << "Age: " << s1.studentAge;
 
     
    
    
    return 0;
}