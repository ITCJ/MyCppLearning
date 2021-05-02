#include <iostream>

using namespace std;

int main () {
    int origin;
    int &referOrigin = origin;
    
    origin = 5;
    cout << origin << "\t" << referOrigin << endl;

    int cover = 8;
    referOrigin = cover;
    cout << origin << "\t" << cover << "\t" << referOrigin << endl;
    
    return 0;
}