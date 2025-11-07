#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "square root of 64 is " << sqrt(64) << "\n";
    cout << "power of 2 raised to 3 is " << pow(2, 3) << "\n";
    cout << "absolute value of -55.5 is " << fabs(-55.5) << "\n";
    cout << "ceiling value of 4.3 is " << ceil(4.3) << "\n";
    cout << "floor value of 4.7 is " << floor(4.7) << "\n";
    cout << "round value of 4.5 is " << round(4.5) << "\n";
    cout << "logarithm (base e) of 2.71828 is " << log(2.71828) << "\n";
    cout << "logarithm (base 10) of 1000 is " << log10(1000) << "\n";
    cout << "sine of 30 degrees is " << sin(30 * M_PI / 180) << "\n";
    cout << "cosine of 60 degrees is " << cos(60 * M_PI / 180) << "\n";
    cout << "tangent of 45 degrees is " << tan(45 * M_PI / 180) << "\n";
    cout << "exponential value of 2 is " << exp(2) << "\n";
    cout << "hypotenuse of a right triangle with sides 3 and 4 is " << hypot(3, 4) << "\n";
    cout << "maximum of 10 and 20 is " << fmax(10, 20) << "\n";
    cout << "minimum of 10 and 20 is " << fmin(10, 20) << "\n";
    cout << "modulus of 29.5 and 4.2 is " << fmod(29.5, 4.2) << "\n";
    cout << "degrees of pi/4 radians is " << (M_PI / 4) * (180.0 / M_PI) << "\n";
    cout << "radians of 45 degrees is " << 45 * (M_PI / 180.0) << "\n";
    cout << "gamma value of 5 is " << tgamma(5) << "\n";
    cout << "lgamma value of 5 is " << lgamma(5) << "\n";
    cout << "nextafter from 1.0 to 2.0 is " << nextafter(1.0, 2.0) << "\n";
    cout << "copysign of -3.5 with sign of 2.0 is " << copysign(-3.5, 2.0) << "\n";
    cout << "truncation of 5.7 is " << trunc(5.7) << "\n";
    cout << "fractional part of 5.7 is " << (5.7 - trunc(5.7)) << "\n";
    return 0;
}