#include <iostream>

using namespace std;

// task1
int main () {
    
    int i = 1;
    int sum = 0;
    
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    
    // for (int  j = 1; j <= 10; j++)
    // {
    //     sum += j;
    // }
    
    cout << sum << endl;

    return 0;
}