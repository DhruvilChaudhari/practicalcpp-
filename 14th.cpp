/*Problem statement: Arithmetic Exception Handling using single try and catch block (divisible
by 0).
Objective: To understand how exceptions can be handled in C++ programming by using try catch
block.*/

#include <iostream>
using namespace std;
int main()
{
 int num1, num2;
 float result;
 cout << "Enter numerator: ";
 cin >> num1;
 cout << "Enter denominator: ";
 cin >> num2;
 try
 {
 // Check for division by zero
 if (num2 == 0)
 throw "Error: Division by zero is not allowed!";
 else
 {
 result = (float)num1 / num2;
 cout << "Result = " << result << endl;
 }
 }
 catch (const char *msg)
 {
 // Catching the exception
 cout << msg << endl;
 }
 return 0;
}