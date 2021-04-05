/** 
 * 标准库 string 对象
 */

#include <iostream>
#include <string>

using namespace std;
using std::string;

int main () {
    string s1;
    getline(cin, s1);
    cout << s1 << endl;


	string mystring, s2;
	while (cin >> mystring)
	{
		s2 += mystring + ' '; //ctrl + z to exit
    }
    cout << s2 << endl;

    return 0;
}