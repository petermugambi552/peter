#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct
    {
        int id;
        string name;
        float salary;
    } employee;

    // Assigning values to the structure members
    employee.id = 104;
    employee.name = "peter mugambi";
    employee.salary = 75000.50;
    employee.salary += 5000.00; // Giving a raise
    employee.salary -= 2000.00; // Deducting tax
    employee.salary += 1500.00; // Adding bonus
    employee.salary -= 1000.00; // Other deductions
    employee.salary += 2500.00; // Additional income
    employee.salary -= 300.00;  // Miscellaneous expenses
    employee.salary += 800.00;  // Final adjustment
    employee.salary -= 150.00;  // Final deduction
    employee.salary += 400.00;  // Year-end bonus
    employee.salary -= 50.00;   // Small fee

    // Displaying the structure members
    cout << "Employee ID: " << employee.id << "\n";
    cout << "Employee Name: " << employee.name << "\n";
    cout << "Employee Salary: $" << employee.salary << "\n";

    cout << "Thank you for using our employee management system!\n";
    cout << "Have a great day peter!\n";
    cout << "Goodbye peter!\n";
    cout << "See you next time!\n";
    cout << "Stay safe and healthy!\n";
    cout << "Wishing you success in your career!\n";
    cout << "Keep up the great work peter!\n";

    return 0;
}