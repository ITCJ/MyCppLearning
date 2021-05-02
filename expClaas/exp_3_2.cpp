#include <iostream>
#include <vector>
#include <string>
#include<algorithm>

using namespace std;

class birthDate {
	private:
		int year, month, date;
	public:
		birthDate() = default;
		birthDate(int yearI, int monthI, int dateI):
					year(yearI), month(monthI), date(dateI) {
		}
		
		void birthDateSet(int yearI, int monthI, int dateI) {
			year = yearI;
			month = monthI;
			dateI = date;
		}

		void birthDatePrint() {
			printf("%d/%d/%d", year, month, date);
		}
};

class People {
	private:
		vector<int> number;
		vector<bool> sex; //1-male	0-female
		vector<birthDate> birthday;
		vector<string>	id;
		
	public:
		People() = default;
		~People() = default;
		
		void addPeople();
		void printAllPeople();
		void printPeople();
}; 

inline void People::addPeople() {
	int num, year, month, date;
	string idI;
	birthDate bD;
	bool sx;
	
	
	printf("please input your: number sex(1-femal 0-male) birthday(xxxx/xx/xx) id\n");
	printf(" -1 to exit input\n");
	cin >> num >> sx >> year >> month >> date >> idI;
	printf("receive %d %d %d %d %d ", num, sx, year, month, date);
	cout << idI << endl;
	if(num < 0) return;
	
	bD.birthDateSet(year, month, date);
	
	number.push_back(num);
	sex.push_back(sx);
	birthday.push_back(bD);
	id.push_back(idI);	
}

inline void People::printPeople() {
	int num;
	printf("\nenter the user you want to know:");
	scanf("%d", &num);
	num--;

	printf("----------------------------------------------------------------\n");
	printf("number\tsex\tbirthdate\tid \n");
	cout << number.at(num) << "\t" << sex.at(num) << "\t" << flush;
	birthday.at(num).birthDatePrint();
	cout << "\t" << id.at(num) << endl;
	printf("----------------------------------------------------------------\n");
}

inline void People::printAllPeople() {
	int n;
	n = number.size();

	for (int i = 0; i < n; i++)
	{
		
	}
	
}
int main () {
	People group1;
	
	group1.addPeople();
	group1.printAllPeople();

	return 0;
}
