#include<iostream>

using namespace std;

int monthDays(int m, int y) {
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		return 31;
	}
	else if (m == 2 && y % 4 == 0) {
		return 29;
	}
	else if (m == 2) {
		return 28;
	}
	else {
		return 30;
	}
}

void PrintMonthName(int m) {
	if (m == 1) {
		cout << "January ";
	}
	else if(m == 2) {
		cout << "February ";
	}
	else if (m == 3) {
		cout << "March ";
	}
	else if (m == 4) {
		cout << "April ";
	}
	else if (m == 5) {
		cout << "May ";
	}
	else if (m == 6) {
		cout << "June ";
	}
	else if (m == 7) {
		cout << "July ";
	}
	else if (m == 8) {
		cout << "August ";
	}
	else if (m == 9) {
		cout << "September ";
	}
	else if (m == 10) {
		cout << "October ";
	}
	else if (m == 11) {
		cout << "November ";
	}
	else if (m == 12) {
		cout << "December ";
	}
}
int main() {
	int month = 0;
	int year = 0;

	while (month <= 0) {
		cout << "\nEnter month : ";
		cin >> month;
	}
	while (year <= 0) {
		cout << "Enter year : ";
		cin >> year;
	}
	PrintMonthName(month);
	cout << year << " has ";
	cout<< monthDays(month, year);
	cout << " days";
	cout << "\n\n\n\n";
	system("PAUSE");
	return 0;
}