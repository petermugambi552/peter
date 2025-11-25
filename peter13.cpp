#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    int sum = 0;
    cout << "enter marks for 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        sum += marks[i];
    }
    double average = sum / 50;
    cout << "average marks:" << average << endl;
    return 0;
}