#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    const float pi=3.142;
    int height=5;
    int radius=5;
    int surfacearea;
    surfacearea=2*pi*radius+radius+2*pi*radius*height;
    cout<<surfacearea;
    getch();
}
