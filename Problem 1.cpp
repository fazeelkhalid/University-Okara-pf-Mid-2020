#include<iostream>

using namespace std;

int main() {
	int number = 0;
	cout << "Enter a number : ";
	cin >> number;
	if (number % 5 == 0 && number != 0) {
		cout << "\nHiFive";
	}
	else if (number % 2 == 0 && number != 0) {
		cout << "\nHiEven";
	}
	else {
		cout << "\nNot a multiple of 5 and 2 ";
	}
}