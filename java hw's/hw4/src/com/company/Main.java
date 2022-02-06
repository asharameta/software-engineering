package com.company;

import java.io.IOException;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws Exception{
        Scanner scan=new Scanner(System.in);
	    System.out.println("Enter the number from 0.1 to 9999.99");
	    try {
            double n=scan.nextDouble();
            if(n<0.1){
                throw new MyException();
            }
            if(n>9999.99){
                throw new ArithmeticException();
            }
        } catch(ArithmeticException e){
            System.err.println("Number is out of given range.");
        } catch(InputMismatchException e){
            System.err.println("It is not a number.");
        } catch(MyException e){
            System.err.println("Number should be positive.");
        }
    }
}

class MyException extends Exception{
    public MyException () {
        super("Number should be positive.");
    }
}
