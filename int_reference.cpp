/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description: int_reference.cpp seeks to demonstrate how C++ passes parameters by
    reference. First we initialize a number in main and get the variables address in memory,
    printing both out to the screen. We then pass the number by reference to the
    parameterized_reference_function and print out the variable's value and address in memory.
    We see that we are accessing the same variable that is present in main since the value
    and memory both match. We then increment this value and print out the value and memory of
    the variable within the scope of the parameterized_reference_function. We then print out
    the value and address of the variable within main again, seeing the modified value which
    means we were accessing the same variable in both cases.
*/
#include <iostream>
#include <string>

using namespace std;

//Function Prototype
int parameterized_reference_function(int& number);

int main(void)
{
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  int number = 1234;
  cout << "Value of number within main is: " << number << endl;
  int* ptr = &number; //& is also known as the address of operator
  cout << "Address of number(ptr) within main is: " << ptr << endl;
  cout << endl;
  parameterized_reference_function(number);
  cout << endl;
  cout << "Main Function" << endl;
  cout << "-------------" << endl;
  cout << "Value of number within main is now: " << number << endl;
  cout << "Address of number(ptr) within main is now: " << ptr << endl;
  return 0;
}

// Precondition: Takes in a reference to the number
// Postcondition: Prints the value and address of number, increments it, and then prints out the value
//      and address once more.
int parameterized_reference_function(int& number)
{
  cout << "parameterized_reference_function Function" << endl;
  cout << "-------------------------------" << endl;
  cout << "The value of number(number) within parameterized_reference_function is: " <<  number << endl;
  cout << "The address of number(&number) within parameterized_reference_function is: " << &number << endl;
  cout << "Attempt to increment the value of number(*pointer) within parameterized_reference_function" << endl;
  number += 1;
  cout << "The value of number(*pointer) within parameterized_reference_function is now: " << number << endl;
  cout << "The address of number(pointer) within parameterized_reference_function is now: " << &number << endl;
}