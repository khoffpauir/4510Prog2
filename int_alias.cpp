/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description:
    int_alias.cpp seeks to demonstrate how C++ approaches provisioning and modifying
    aliases in the same scope level. Within main, we initialize an integer variable with
    a value and then immediately alias that integer value with the variable alias. Then we
    get the addresses of both the variable and alias with pointers. Next, we print out the value
    and address for both the variable and alias. From this, we can clearly see that C++ handles
    aliasing of variables by creating a clone of the variable in a new memory location containing
    the same value. To further test this, we increment the value of the alias to see whether the
    change persists in the initial variable. The result is an incremented alias value with the 
    same address in memory while the initial integer variable remains with the same value and
    address in memory. From this experiment we can conclude that aliasing simply clones a variable
    to a new location in memory within the same current scope level.
*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  // Initialize a integer value
  int x = 10;
  // Alias the value
  int alias = x;
  // Get the addresss of the integer value
  int *x_ptr = &x;
  // Get the address of the alias value
  int *alias_ptr = &alias;

  //Print out the corresponding values
  cout << "X's value is: " << x << endl;
  cout << "X's address is: " << x_ptr << endl;
  cout << "Alias's value is: " << alias << endl;
  cout << "Alias's address is: " << alias_ptr << endl;
  cout << "Incrementing alias" << endl;

  // Increment the alias
  alias++;

  //Print out the corresponding values again
  cout << "X's value is: " << x << endl;
  cout << "X's address is: " << x_ptr << endl;
  cout << "Alias's value is: " << alias << endl;
  cout << "Alias's address is: " << alias_ptr << endl;
  return 0;
}