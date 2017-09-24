#include<iostream>
#include<string>

using namespace std;


int main() {
	cout << "Manipulating strings." << "\n\n\n";

	string myidentity(string s);
	string reverseString(string s);
	string fromUser;
	//cin >> fromUser;

	getline(cin,fromUser);
	cout << "You entered: " << fromUser <<  endl;

	myidentity(fromUser);
	reverseString(fromUser);

	//while (getchar() != '\n');
	getchar();
	return 0;
}

string myidentity(string s) {

	return s;
}

string reverseString(string s) {
	string reversedS;

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << endl;
	}

	return reversedS;
}