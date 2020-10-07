/*
一等奖 ipad 1%   二等奖 matepad pro 3%    三等奖 MI Pad 5%
参与人数
资金

test number 
100 150 
*/

#include <iostream>

using namespace std;

int main ()
{
    int people = 0;
    int ipadP = 0, matepadP = 0, mipadP = 0;

    const int ipad = 5800, matepad = 3299, mipad = 1999; 
    double cost = 0.0;
    cout << "输入参会人员:";
    cin >> people;
    cout << endl;
    ipadP = int(people * 0.01);
    matepadP = int(people * 0.03);
    mipadP = int(people * 0.05);

    cost = ipadP*ipad + matepadP*matepad + mipadP*mipad;
    cout << "总参与人数为 " << people <<endl << "总花费为 " <<  cost << endl;

    return 0;
}