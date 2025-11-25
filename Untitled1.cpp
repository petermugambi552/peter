#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char a;
    float num1, num2;
    cout << "Enter an operator(+,-,*,/)";
    cin >> a;
    cout << "Enter two operands:";
    cin >> num1 >> num2;
    switch (a)
    {

    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    case '%':
        cout << num1 << "%" << num2 << "=" << num1 % num2;
        break;
    case '<' default:
        // operator doesn't matchany case constant (+,-,*,/,%,>,<)
        cout << "Error! operator is not correct";
        break;
    }
    return 0;
}
