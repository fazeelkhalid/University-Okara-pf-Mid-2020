#include<iostream>

using namespace std;

void displayBMIMessage(float BMI) {
	if (BMI < 16) {
		cout << BMI << "\tseriously underweight ";
	}
	else if (BMI >= 16 && BMI < 18) {
		cout << BMI << "\tunderweight ";
	}
	else if (BMI >= 18 && BMI < 24) {
		cout << BMI << "\tnormal weight ";
	}
	else if (BMI >= 24 && BMI < 29) {
		cout << BMI << "\toverweight ";
	}
	else if (BMI >= 29 && BMI <= 35) {
		cout << BMI << "\tseriously overweight ";
	}
	else {
		cout << BMI << "\tgravely overweight ";
	}
}

int main() {
	float weight = 0;
	float height = 0;
	float BMI = 0;
	while (weight <= 0) {
		cout << "\nEnter weight in pounds : ";
		cin >> weight;
	}
	weight = weight * 0.45359237;
	while (height <= 0) {
		cout << "\nEnter height in inches : ";
		cin >> height;
	}
	height = height * 0.0254;

	BMI = (weight / (height * height));
	
	displayBMIMessage(BMI);
	cout << "\n\n\n\n";
	system("PAUSE");
	return 0;
}