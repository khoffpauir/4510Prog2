#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int pointer_deletion(int* value);

// Precondition: Takes in no arguments
// Postcondition: 
int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number is: " << number << endl;
  int* ptr = new int;
  ptr = &number; //& is also known as the "address of" operator
  cout << "Address of number(ptr) is: " << ptr << endl;
  cout << endl;
  pointer_deletion(ptr);
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  cout << "Value of number after deletion is: " << number << endl;
  cout << "Address of number is: " << &number << endl;
  cout << "Value of ptr is: " << ptr << endl;
  return 0;
}

// Precondition: Takes in an integer value
// Postcondition: Prints out the integer value and then the address of the integer value dereferencing the integer,
int pointer_deletion(int* pointer)
{
  cout << "pointer_deletion Function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of number(*pointer) is: " << *pointer << endl;
  cout << "The address of number(pointer) is: " << pointer << endl;
  cout << "Deleting pointer" << endl;
  delete(pointer);
}