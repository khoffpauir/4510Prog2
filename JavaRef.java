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

  }

    static void setObjToInt(Object paramObj) {
        paramObj = 10000;
        System.out.println("INSIDE FUNCTION -- Obj = " + paramObj);
    }

}