#include<iostream>

using namespace std;

int main() {
	int number = 0;
	bool isPrime = true;
	while (number <= 0) {
		cout << "Enter Number : ";
		cin >> number;
	}
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			isPrime = false;
			i = number;
		}
	}
	if (isPrime) {
		cout << "\nYou entered a prime number \n\n\n ";
	}
	else {
		cout << "\nYou entered a non prime number \n\n\n";
	}
	system("PAUSE");
	return 0;
}