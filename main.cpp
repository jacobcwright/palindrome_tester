#include <iostream>
#include <string>

using namespace std;

int main() {
	string userString;
	bool palindrome = 0;
	int lastIndex;


	cout << "A palidrome is a word that is the same forward as it is backwards..." << endl << endl;
	cout << "Enter a word to check if it is a palidrome: " << endl;
	cin >> userString;
	lastIndex = userString.size();

	for (unsigned int i = 0; i < userString.size(); i++) {
		if (userString.at(i) == userString.at(lastIndex - i - 1)) {
			palindrome = true;
		}
		else {
			palindrome = false;
			break;
		}
	}


	if (palindrome) {
		cout << endl << userString << " is a palidrome!" << endl;
	}
	else if (!palindrome) {
		cout << endl << userString << " is not a palindrome!" << endl;
	}



	system("pause");
	return 0;
}