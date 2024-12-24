/* 
Write a C++ program to demonstrate different types of inheritance by creating
a hierarchy for a university management system.

The program should include the following:
● Base Class (Person): Contains common attributes like name and age and a
method to display them.
● Derived Class (Student): Inherits from Person and includes additional
attributes like roll number and course.
● Derived Class (Faculty): Inherits from Person and includes attributes like
employee ID and department.
*/
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    Student(string n, int a, int r, string c) : Person(n, a), rollNumber(r), course(c) {}

    void displayStudentInfo() {
        displayPersonInfo();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Faculty : public Person {
private:
    int employeeID;
    string department;

public:
    Faculty(string n, int a, int eID, string dept) : Person(n, a), employeeID(eID), department(dept) {}

    void displayFacultyInfo() {
        displayPersonInfo();
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student("Ralliyah", 18, 153, "Computer Science");
    cout << "Student Details:\n";
    student.displayStudentInfo();

    cout << "\n";

    Faculty faculty("Anushree", 32, 2016, "C++");
    cout << "Faculty Details:\n";
    faculty.displayFacultyInfo();

    return 0;
}