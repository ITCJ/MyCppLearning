#include <iostream>
using namespace std;

int main() {
    int i=1, a=0;
    for (; i<=5; i++) {
        do {
            i++;
            a++;
        } while (i<3);
        i++;
    }
    cout<<a<<","<<i<<endl;

    const int N=4;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=30; j++)
            cout<<' ';
        for (int j=1; j<=8-2 *i; j++)
            cout<<' ';
        for (int j=1; j<=2 *i-1; j++)
            cout<<'*';
        cout<<endl;
    }
    for (int i=1; i<=N-1; i++) {
        for (int j=1; j<=30; j++)
            cout<<' ';
        for (int j=1; j<=7-2 *i; j++)
            cout<<'*';
    cout<<endl;
    }




return 0;
}

//选择结构的嵌套