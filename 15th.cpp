/*Problem statement: Arithmetic operations using C++
Objective:
1. To study the syntax of different programming languages as JAVA, C++, Python
2. Compare and understand the way of writing programs in different languages.*/

#include <iostream>
using namespace std;

int main() {
	double num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	// Addition
	double sum = num1 + num2;
	// Subtraction
	double diff = num1 - num2;
	// Multiplication
	double prod = num1 * num2;
	// Division
	double div = 0;
	if (num2 != 0) {
		div = num1 / num2;
	} else {
		cout << "Warning: Division by zero is not allowed!" << endl;
	}
	// Modulus
	int mod = 0;
	if (num2 != 0) {
		mod = (int)num1 % (int)num2;
	}
	
	cout << "\n--- Arithmetic Operations ---" << endl;
	cout << "Addition : " << sum << endl;
	cout << "Subtraction : " << diff << endl;
	cout << "Multiplication : " << prod << endl;
	if (num2 != 0) {
		cout << "Division : " << div << endl;
		cout << "Modulus : " << mod << endl;
	}
	
	return 0;
}