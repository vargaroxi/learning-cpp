#include<iostream>
#include<string>

using namespace std;


int main() {
	cout << "Manipulating strings." << "\n\n\n";

	string myidentity(string s);
	string reverseString(string s);
	bool isPalindrome(string s);
	string fromUser;
	//cin >> fromUser;

	getline(cin,fromUser);
	cout << "You entered: " << myidentity(fromUser) <<  endl;
	cout << "Your reversed string: " << reverseString(fromUser) << endl;
	cout << (isPalindrome(fromUser) ? "Your string is palindrom." : "Your string is not palindrom." )<< endl;

	//while (getchar() != '\n');
	getchar();
	return 0;
}

string myidentity(string s) {

	return s;
}

string reverseString(string s) {
	string reversedS;

	for (int i = s.size()-1; i >= 0; i--){
		reversedS += s[i];
	}

	return reversedS;
}

bool isPalindrome(string s) {
	return (s == reverseString(s));
	
}