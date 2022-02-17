#include <iostream>

using namespace std;

class FirstClass { //Class Format
public:  //Accessor Specifier
	int firstNum = 0;
	string firstString = "";
};

int main() {
	
	cout << "Hello World!!!" << endl; //cout: outputs endl: end line

	FirstClass myClass; //Designated myClass to be FirstClass (Like a variable char a)
	
	cout << myClass.firstNum << " and " << myClass.firstString << endl;
	cout << endl;

	myClass.firstNum = 2;
	myClass.firstString = "A String";

	cout << myClass.firstNum << " and " << myClass.firstString << endl;

	system("PAUSE");
	return 0;
}