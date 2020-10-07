#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double y = 0.0;
    const double PI = 3.1415926;
    y = (log(5)*log(3) - log(2))/sin(PI/3);

    cout<<"y = "<< y <<endl;

    return 0;
}