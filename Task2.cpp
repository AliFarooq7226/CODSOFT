#include<iostream>
using namespace std;

int main() {
	int choice,n1,n2;
	cout << "___________________________________Simple Calculator___________________________________";
	cout << "\n\nPress 1 for Addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division.\n";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "\nYou chose Addition.";
		cout << "\nEnter the first number:";
		cin >> n1;
		cout << "\nEnter the second number:";
		cin >> n2;
		cout << "\nResult is: " << n1 + n2;
		break;
	case 2:
		cout << "\nYou chose Substraction.";
		cout << "\nEnter the first number:";
		cin >> n1;
		cout << "\nEnter the second number:";
		cin >> n2;
		cout << "\nResult is: " << n1 - n2;
		break;
	case 3:
		cout << "\nYou chose Multiplication.";
		cout << "\nEnter the first number:";
		cin >> n1;
		cout << "\nEnter the second number:";
		cin >> n2;
		cout << "\nResult is: " << n1 * n2;
		break;
	case 4:
		cout << "\nYou chose Division.";
		cout << "\nEnter the first number:";
		cin >> n1;
		cout << "\nEnter the second number:";
		cin >> n2;
		cout << "\nResult is: " << n1 / n2;
		break;
	}
	return 0;
}