#include<iostream>
#include<string>

using namespace std;

int main() {
	cout << "Manipulating strings." << "\n\n\n";

	string fromUser;
	cin >> fromUser;
	//getline(cin,fromUser);

	cout << "You entered: " << fromUser <<  endl;

	while (getchar() != '\n');
		getchar();
	return 0;
}