#include <iostream>

using namespace std;

int getPower(int x, int y) {
    int result = 1;

    if(y > 0) {
        for (int i = 0; i < y; i++)
        {
            result *= x;
        }
    } else {
        result = 0;
    }

    return result;
}
double getPower(double x, int y) {
    double result = 1;

    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    return result;
}


int main () {

    cout << getPower(2, 10) << endl;
    cout << getPower(1.5, 10) << endl;

    return 0;
}

