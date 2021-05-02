#include <iostream>

using namespace std;

//template <typename numType>
//numType max(numType a, numType b) {
//	numType result = 0;
//	if (a > b) 
//		result = a;
//	else
//		result = b;
//	
//	return result;
//}

template <typename numType>
numType max(numType a, numType b, numType c) {
	numType result = 0;
	if (a > result) result = a;
	if (b > result) result = b;
	if (c > result) result = c;
	
	return result;
}


int main () {
	cout << max<int>(1.1, 1.2, 1.3) << endl;
	
	return 0;
}
