/* 
Write a program to input basic salary of an employee and calculate its Gross
salary according to following:

Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% 
*/
#include <iostream>
#include <iomanip> // Required for fixed and setprecision
using namespace std;

int main() {
    int Gross_Salary, Basic_Salary, HRA, DA;

    // Prompting the user to enter the basic salary
    cout << "Enter the salary: " << endl;
    cin >> Basic_Salary;

    // Validate input
    if (cin.fail() || Basic_Salary < 0) {
        cout << "Invalid input. Please enter a positive salary." << endl;
        return 1;
    }

    // Initialize HRA and DA based on salary ranges
    if (Basic_Salary <= 10000) {
        HRA = 0.20 * Basic_Salary;
        DA = 0.80 * Basic_Salary;
    } else if (Basic_Salary <= 20000) {
        HRA = 0.25 * Basic_Salary;
        DA = 0.90 * Basic_Salary;
    } else { // Basic_Salary > 20000
        HRA = 0.30 * Basic_Salary;
        DA = 0.95 * Basic_Salary;
    }

    // Calculate Gross Salary
    Gross_Salary = Basic_Salary + HRA + DA;

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nBasic Salary: " << Basic_Salary << endl;
    cout << "HRA: " << HRA << endl;
    cout << "DA: " << DA << endl;
    cout << "Gross Salary: " << Gross_Salary << endl;

    return 0;
}
