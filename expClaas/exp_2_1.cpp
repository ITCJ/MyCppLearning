#include <iostream>

using namespace std;

float Convert(float TempFer) {
	return (TempFer - 32)*5/9;
}

int main () {
	double temp;

	cin >> temp;
	cout << Convert(temp) << endl;
	
	return 0;
}
