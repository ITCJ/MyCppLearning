#include <iostream>
using namespace std;

int main () {
//if 选择
    int year;
    bool isLeapYear;

    cout<<"enter the year:";
    cin>>year;
    isLeapYear=((year%4==0&&year%100!=0)||(year%400==0));

    if(isLeapYear)
        cout<<year<<"is a Leap Year"<<endl;
    else
    {
        cout<<year<<"is not a leap year"<<endl;
    }
//嵌套if
    bool intel,amd,nvdia;
    cout<<"if you are a intel fan"<<endl;
    cin>>intel;

    if(intel==1)
        cout<<"i7-10710u yes!";
    else
    {
        cout<<"if you are a amd fan";
        cin>>amd;
        if(amd==1)
            cout<<"3900x amd yes";
        else
        {
            cout<<"if you are a nvdia fan";
            cin>>nvdia;
            if (nvdia==1)
                cout<<"2090ti yes";
            else
            {
                cout<<"HuaWei YES";        
        
            }
            

        }
        
    }

//if else if
    if (intel==1)
        cout<<"intel yes"<<endl;
    else if (amd==1)
        cout<<"amd yes"<<endl;
    else if (nvdia ==1)
        cout<<"nvdia yes"<<endl;
    else
    {
        cout<<"fuck you"<<endl;
    }
    
//switch 判断同一表达式
    int fanmode;
    cout<<"fan mode 1-intel 2-amd *-me"<<endl;
    cin>>fanmode;

    switch (fanmode)
    {
    case 1:
        cout<<"intel mode";
        break;
    case 2:
        cout<<"amd mode";
        break;

    default:
        cout<<"my mode";
        break;
    }

    return 0;

}