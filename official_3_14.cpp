/**
 * n阶勒让德多项式
 * checkpoint
 *   x      p2(x)      p3(x)      p4(x)      p5(x)      p6(x)

0.200  -0.440000  -0.280000   0.232000   0.307520  -0.080576

0.300  -0.365000  -0.382500   0.072938   0.345386   0.129181

0.350  -0.316250  -0.417812  -0.018723   0.322455   0.222511

 */

#include <iostream>

using namespace std;

double leg(int n, double x) {
    double sum = 0;

    switch (n)
    {
    case 0:
        sum = 1;
        break;
    
    case 1:
        sum = x;
        break;

    default:
        sum += ((2*n-1)*x*leg(n-1, x) - (n-1)*leg(n-2, x))/n;
        break;
    }

    return sum;
}

int main () {
    
    cout << leg(6, 0.2) << endl;

    return 0;
}