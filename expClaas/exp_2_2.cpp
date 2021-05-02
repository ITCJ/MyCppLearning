#include <iostream>

using namespace std;

int max(int a, int b) {
	int result = 0;
	if (a > b) 
		result = a;
	else
		result = b;
	
	return result;
}
int max(int a, int b, int c) {
	int result = 0;
	if (a > result) result = a;
	if (b > result) result = b;
	if (c > result) result = c;
	
	return result;
}

double max(double a, double b) {
	double result = 0;
	if (a > b) 
		result = a;
	else
		result = b;
	
	return result;
}
double max(double a, double b, double c) {
	double result = 0;
	if (a > result) result = a;
	if (b > result) result = b;
	if (c > result) result = c;
	
	return result;
}

int main () {
	cout << max(1.1, 1.2, 1.3) << endl;
	
	return 0;
}
