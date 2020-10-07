#include <iostream>
using namespace std;

int main(){
//while
    int i;
    while(i<=10){
        i++;
    int sum;
    sum=sum+i;
    }

//do while
    int n,right_digit,newnum=0;
    cout<<"Enter the number:";
    cin>>n;

    cout<<"the number in reserved number is";
    do{
        right_digit=n%10;
        cout<<right_digit;
        n/=10;
    }while(n!=0);
//for
int n;

cout<<"Enter a positive integer:";
cin>>n;
cout<<"Number "<<n<<" Factors ";

for (int k=1; k<=n; k++)  //省略1，3等于while
    //可解决所有循环问题
    if (n%k ==0)
        cout<<k<<"  ";
cout<<endl;

return 0;
}