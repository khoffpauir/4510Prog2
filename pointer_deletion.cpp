#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number is: " << number << endl;
  int* ptr = new int;
  ptr = &number; //& is also known as the "address of" operator
  cout << "Address of number(ptr) is: " << ptr << endl;
  cout << "Deleting the value of the pointer" << endl;
  delete(ptr);
  cout << "Deleted the pointer value" << endl;
  cout << "The value of number after pointer deletion is: " << number << endl;
  cout << "The address of number(ptr) after deletion is: " << ptr << endl;
  return 0;
}