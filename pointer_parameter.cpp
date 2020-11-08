/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description:
    pointer_parameter.cpp seeks to demonstrate how C++ approaches the passing of pointers
    as parameters. Within main, we declare a integer variable and initialize it with a
    value. Next, we create a pointer to the address in memory to this new integer variable.
    We then print out the value and address of this number within main. Next we call the
    parameterized_pointer_function by passing the pointer to the number as a parameter.
    Printing out the value and address of the number shows that we are accessing the same
    variable present within main because the value and memory address of the variable within
    the parameterized_pointer_function matches that of in main. Incrementing the number in
    parameterized_pointer_function is successful and does not change the address in memory.
    Now we check the value of number within main after parameterized_pointer_function we can
    see the value was also changed within the scope of main meaning we were accessing the
    same variable in all scopes of the program.
*/
#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int parameterized_pointer_function(int* pointer);

int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number within main is: " << number << endl;
  int* ptr = &number; //& is also known as the address of operator
  cout << "Address of number(ptr) within main is: " << ptr << endl;
  cout << endl;
  parameterized_pointer_function(ptr);
  cout << endl;
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  cout << "Value of number within main is now: " << number << endl;
  cout << "Address of number(ptr) within main is now: " << ptr << endl;
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
  cout << "The value of number(*pointer) within parameterized_pointer_function is: " << *pointer << endl;
  cout << "The address of number(pointer) within parameterized_pointer_function is: " << pointer << endl;
  cout << "Attempt to increment the value of number(*pointer) within parameterized_pointer_function" << endl;
  *pointer += 1;
  cout << "The value of number(*pointer) within parameterized_pointer_function is now: " << *pointer << endl;
  cout << "The address of number(pointer) within parameterized_pointer_function is now: " << pointer << endl;
}