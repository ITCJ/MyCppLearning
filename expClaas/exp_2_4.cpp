#include <iostream>

using namespace std;

template <typename numType>
numType max1(numType a[]) {
	numType result = 0;
	int i = 0;
	
	while(a[i] != -1) {
		if (result < a[i]) 
			result = a[i];
		i++;
	}
	return result;
}



int main () {
	double a[4] = {1.2, 1.3, -1};
	int b[4] = {1, 2, 3, -1};
	
	cout << max1<int>(b) << endl;
	
	return 0;
}
