#include <iostream>
#include <string>

using namespace std;

// Function to determine grade based on percentage
string getGrade(double percentage) {
    if (percentage >= 90) {
        return "A";
    } else if (percentage >= 75) {
        return "B";
    } else if (percentage >= 50) {
        return "C";
    } else {
        return "F";
    }
}

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (cin.fail() || numStudents <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= numStudents; i++) {
        double percentage;
        cout << "\nStudent " << i << ":" << endl;
        cout << "Enter the percentage: ";
        cin >> percentage;

        if (cin.fail() || percentage < 0 || percentage > 100) {
            cout << "Invalid percentage. Please enter a value between 0 and 100." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            i--; // Repeat for the same student
            continue;
        }

        string grade = getGrade(percentage);
        cout << "Grade: " << grade << endl;
    }

    return 0;
}