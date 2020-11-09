/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description:
    A Java program that exercises scope levels and parameter passing in the Java language
    output and comments together tell a story of the way in which parameters exist in scope and the
    manner in which parameters are passed between main and add functions. 
*/

package com.khoffpauir;
import java.util.Scanner;

public class JavaParams {
    static int x = 10;
    public static void main(String[] args) {
        //set y = to global variable x. This exclusively copies the value into the variable.
        System.out.println("x = " + x);
        int y = x;
        System.out.println("y = x, so y is equal to " + y);
        //changing the value of y will not change the value of x
        y = 15;
        System.out.println("changed y's value to 15. x now equals " + x + " and y now equals " + 15);

        int z = add(x, y);
        System.out.println(x + " + " + y + " = " + z);

        System.out.println("After add, x = " + x + " and y = " + y);
    }

    public static int add(int a, int b) {
      //a is a copy of the VALUE of x, even though we pass in the global parameter x itself into the function.
      //this will print out true because a and x both have a value of 10
      System.out.println("a = 10 and x = 10 --> a == x: " + (a == x));
      a = 400;
      //if java was a call-by-reference style language, this would continue to be true
      //however, this returns false, so java uses pass by value.
      System.out.println("a = 400 and x = 10 --> a == x: " + (a == x));


      //cannot increment y in the scope of add as it is not defined in this scope, it only exists in main
      // System.out.println("INCREMENTING Y IN ADD");
      // y++;


      //within add we can increment the global variable of x
      System.out.println("INCREMENTING X IN ADD");
      x++;
      return a + b;
    }

  }
