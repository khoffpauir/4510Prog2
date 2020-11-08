#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int parameterized_pointer_function(int* pointer);

// Precondition: Takes in no arguments
// Postcondition: 
int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int global = 1234;
  cout << "Value of global is: " << global << endl;
  int* ptr = &global; //& is also known as the address of operator
  cout << "Address of global(ptr) is: " << ptr << endl;
  cout << endl;
  parameterized_pointer_function(ptr);
  return 0;
}

// Precondition: Takes in the pointer to an integer value
// Postcondition: Prints out the value the pointer refers to by dereferencing the pointer,
//    then prints out the address the pointer refers to, and then prints out the address
//    where the pointer itself resides.
int parameterized_pointer_function(int* pointer)
{
  cout << "parameterized_pointer_function Function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of global(*pointer) is: " << *pointer << endl;
  cout << "The address of global(pointer) is: " << pointer << endl;
  cout << "The address of pointer is: " << &pointer << endl;
}