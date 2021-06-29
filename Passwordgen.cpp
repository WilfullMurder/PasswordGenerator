#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char AlphaNum[] =
"0123456789"
"!@£$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int Size = sizeof(AlphaNum) - 1;

int main() {
	int Length;

	cout << "Please select a password lenght (8-30 characters) \n";

	cin >> Length;

	if (Length >= 8 && Length <= 30) {

		srand(time(0));
		for (int i = 0; i < Length; i++) {

			cout << AlphaNum[rand() % ::Size];

		}
		return 0;
	}
	else {

		cout << "Incorrect selection!\n" << "Please select a password length (8-30 characters) \n";
		cin >> Length;

		srand(time(0));
		for (int i = 0; i < Length; i++) {

			cout << AlphaNum[rand() % ::Size];

		}
		return 0;
	}







	return 0;
}