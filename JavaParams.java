package com.khoffpauir;
import java.util.Scanner;

public class JavaParams {

    public static void main(String[] args) {
        System.out.println("Enter 2 integers to be added together");
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        in.nextLine();
        int z = x + y;
        System.out.println(x + " + " + y + " = " + z);
    }
}
