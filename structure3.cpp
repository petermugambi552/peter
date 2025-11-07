#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {
        string brand;
        string model;
        int year;
    } mycar1, mycar2, mycar3;

    // car 1 details
    mycar1.brand = "BMW";
    mycar1.model = "X5";
    mycar1.year = 2027;

    // car 2 details
    mycar2.brand = "Audi";
    mycar2.model = "Q7";
    mycar2.year = 2028;

    // car 3 details
    mycar3.brand = "Ford";
    mycar3.model = "Mustang";
    mycar3.year = 2029;

    // print the structure members
    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << "\n";
    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << "\n";
    cout << mycar3.brand << " " << mycar3.model << " " << mycar3.year << "\n";

    return 0;
}
