#include <iostream>
using namespace std;

int main() {
    int i=0,j=0,n;

    cout<<"Enter sime numbers(0 to quit): ";
    cin>>n;
    while (n!=0) {
        if (n>0) i++;
        if (n<0) j++;
        cin>>n;
    }
    cout<<"Count of positive integers:"<<j<<endl;
    cout<<"Count of nagative integers:"<<j<<endl;

return 0;

}