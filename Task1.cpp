#include<iostream>
using namespace std;

int main() {
	srand(static_cast<unsigned int>(std::time(nullptr)));
	int random_number = rand() % 10 + 1;
	cout << "___________________________________NUMBER GUESSING GAME.___________________________________";
	cout << "\n The computer has guessed a number!!!!!";
	cout << "\n\nGuess the number between 1 and 10: ";
	int n;
	cin >> n;
	while (n != random_number) {
		if (n == random_number) {
			cout << "\nCongratulations!!!!! You've guessed the correct number.";
			break;
		}
		else if (n != random_number) {
			if (n > random_number - 2 && n < random_number + 2)
				cout << "\nYour guess is quite close.";
			else
				cout << "\nTry Again!!!!!!! You're not even close to it.";
		}
		cout << "\nGuess the number again.";
		cin >> n;
		
	}
	cout << "Random variable: " << random_number;
	return 0;
}