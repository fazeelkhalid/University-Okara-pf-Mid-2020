#include<iostream>

using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int number1;
	int number2;
	int number3;
	cout << "Enter first number : ";
	cin >> num1;
	cout << "Enter second number : ";
	cin >> num2;
	cout << "Enter third number : ";
	cin >> num3;


	if (num1 < num2 && num2 < num3)
	{
		number1 = num1;
		number2 = num2;
		number3 = num3;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else if (num2 < num1 && num1 < num3)
	{
		number1 = num2;
		number2 = num1;
		number3 = num3;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else if (num3 < num2 && num2 < num1)
	{
		number1 = num3;
		number2 = num2;
		number3 = num1;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else if (num3 < num1 && num1 < num2)
	{
		number1 = num3;
		number2 = num1;
		number3 = num2;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else if (num2 < num3 && num3 < num1)
	{
		number1 = num2;
		number2 = num3;
		number3 = num1;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}
	else if (num1 < num3 && num3 < num2)
	{
		number1 = num1;
		number2 = num3;
		number3 = num2;

		cout << number1 << endl;
		cout << number2 << endl;
		cout << number3 << endl;
	}

	system("PAUSE");
	return 0;
}