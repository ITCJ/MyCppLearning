#include <iostream>

using namespace std;

struct time
{
    unsigned int year, month, date, hour, minute, second;
    void inputDate() {
        cout << "input in order year, month, date, hour, minute, second" << endl;
        cin >> year >> month >> date >> hour >> minute >> second;
        cout << "time has been set to: " << 
            year << "/" << month << "/" << date << "\t" <<
            hour << ":" << minute << ":" << second << endl;

    }
};

int main () {
    time t1;
    t1.inputDate();

    return 0;
}