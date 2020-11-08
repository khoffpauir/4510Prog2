#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int parameterized_int_function(int value);

// Precondition: Takes in no arguments
// Postcondition: 
int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number is: " << number << endl;
  int* ptr = &number; //& is also known as the "address of" operator
  cout << "Address of number(ptr) is: " << ptr << endl;
  cout << endl;
  parameterized_int_function(number);
  return 0;
}

// Precondition: Takes in an integer value
// Postcondition: Prints out the integer value and then the address of the integer value dereferencing the integer,
int parameterized_int_function(int number)
{
  cout << "parameterized_int_function Function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of number(number) is: " << number << endl;
  cout << "The address of number(&number) is: " << &number << endl;
}