#include <iostream>
#include <string>

using namespace std;

int main() {
	string userString;
	bool palindrome = 0;


	cout << "A palidrome is a word that is the same forward as it is backwards..." << endl << endl;
	cout << "Enter a word to check if it is a palidrome: " << endl;
	cin >> userString;

	if (palindrome) {
		cout << userString << " is a palidrome!" << endl;
	}
	else if (!palindrome) {
		cout << userString << " is not a palindrome!" << endl;
	}



	system("pause");
	return 0;
}