#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    cout << "enter the number:";
    cin >> a;
    int counter = 1;
    while (counter <= a)
    {
        cout << "execute while" << counter << "time" << endl;
        counter++;
    }
    getch();
}