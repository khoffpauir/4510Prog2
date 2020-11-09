/*
  Authors: Nathan Markle and Kyle Hoffpauir
  Date: 11/08/2020
  Class: CSC-4510
  Description:
    A Java program emphasizing the manner in which paramter OBJECTS are passed in functions in Java
*/

public class JavaRef {
    public static void main(String[] args) {

    //set the object obj to null
    Object obj = null;
    System.out.println("BEFORE FUNCTION -- Obj = " + obj);
    //in a pass-by-reference language the void fucntion setObjToInt would modify the value of Obj
    //whenever we set the obj's value inside of it to something different.
    setObjToInt(obj);

    //However, when we pring out the obj outside of the function, we see that it is a still a null
    //this means that the passed parameter is not by reference but solely by value.
    //the value of the parameter is modified sucessfully within the function, however the changes do
    //not persist outside of the function, as it creates a shallow copy of the object only taking it's value
    System.out.println("AFTER FUNCTION -- Obj = " + obj);


    Integer x = new Integer(100);
    //the integer y does not contain THE String object returned by x's toString. it merely holds a reference to 
    //and empty string object that contains solely the information of the value of x's toString
    //Java does NOT pass entire objects back and forth, they only pass references to hollow objects that contain
    //relevant information.
    String y = x.toString();

  }

    static void setObjToInt(Object paramObj) {
        paramObj = 10000;
        System.out.println("INSIDE FUNCTION -- Obj = " + paramObj);
    }

}