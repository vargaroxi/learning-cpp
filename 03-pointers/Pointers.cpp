#include<iostream>

using namespace std;

int main() {
	
	void doSomething(int b);
	void doSomethingElse(int* b);
	void doSomethingAnotherElse(int& b);

	int a = 5;
	cout << a << endl;


	//int*  int tipusra mutató pointer,
	//& kéri el a helyét
	int* addressOfa = &a;

	// *pointer az a változó amire mutat a pointer
	*addressOfa = 6;
	cout << a << endl;

	doSomething(a);
	cout << a << endl;

	doSomethingElse(&a);
	cout << a << endl;

	// itt sem kell az & jel
	doSomethingAnotherElse(a);
	cout << a << endl;

	getchar();
	return 0;
}

// az a változó másolatát módositottam
void doSomething(int b) {
	b = 10;
}

// itt az a helyére mutató változó poingtert adtam meg, 
// amire mutat, azt változtattam meg
void doSomethingElse(int* b) {
	*b = 11;
}

// ugyanazt csinálja, mint az előző. a két *ot lecseréltük egy &ra
// referenciát kap
void doSomethingAnotherElse(int& b) {
	b = 12;
}