/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description:
    int_parameter.cpp seeks to demonstrate how C++ approaches the passing of integers
    as parameters and how these values are treated within the code. Within main, a
    integer value is created and a pointer is made to the address of theat integer
    value in memory. When passed as a parameter to the parameterized_int_function,
    we can clearly see the integer value that has been passed into as a parameter is
    not the same variable found within main. If this were the case, the addresses in
    memory would be the same and they clearly are not. Incrementing the value within
    parameterized_int_function works and the memory address remains the same, indicating
    this cloned number value was successfully modified within the scope of
    parameterized_int_function. Once we have exited parameterized_int_function, we can see
    none of the values for number were modified at all, meaning the passing of an integer
    within C++ is handled by creating a clone of the variable within the scope of the recipient
    function.
*/

#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int parameterized_int_function(int number);

// Precondition: Takes in no arguments
// Postcondition: 
int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number in main is: " << number << endl;
  int* ptr = &number; //& is also known as the "address of" operator
  cout << "Address of number(ptr) in main is: " << ptr << endl;
  cout << endl;
  parameterized_int_function(number);
  cout << endl;
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  cout << "Value of number in main after parameterized_int_function is: " << number << endl;
  cout << "Address of number(ptr) in main after parameterized_int_function is: " << ptr << endl;
  return 0;
}

// Precondition: Takes in an integer value
// Postcondition: Prints out the integer value and then the address of the integer value dereferencing the integer,
int parameterized_int_function(int number)
{
  cout << "parameterized_int_function Function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of number(number) in parameterized_int_function is: " << number << endl;
  cout << "The address of number(&number) in parameterized_int_function is: " << &number << endl;
  cout << "Incrementing the number in parameterized_int_function " << endl;
  number++;
  cout << "The new value of number(number) in parameterized_int_function is: " << number << endl;
  cout << "The address of number(&number) in parameterized_int_function is: " << &number << endl;
}