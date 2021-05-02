#include <iostream>

using namespace std;

/** 
 * baseLine F1=F2=1
 * 0、1、1、2、3、5、8、13、21、34、……
 */

unsigned int fibonacci (int n) {
    unsigned int sum = 0;
    
    if (n < 3) {
        sum += 1;
    } else if(n >= 3) {
        sum += fibonacci(n-1) + fibonacci(n-2);
    }
    
    return sum;
}
int main () {
    int n = 7;

    unsigned int sum = fibonacci(n);
    cout << sum << endl;

    return 0;
}