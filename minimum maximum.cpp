#include <iostream>
using namespace std;

int main () {
	int num1;
	int num2;
	
	cout << "Enter 2 numbers: ";
	cin >> num1;
	cin >> num2;
	
	if(num1>num2){
		cout << num1 << " is bigger than " << num2;
	}
	else {
		cout << num2 << " is bigger than " << num1;
	}
	
	return 0;
	
}
