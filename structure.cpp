#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct
    {
        int myNum;
        string mystring;

    } mystructure;
    mystructure.myNum = 1;
    mystructure.mystring = "hello peter!";
    cout << mystructure.myNum << "\n";
    cout << mystructure.mystring << "\n";
    return 0;
}