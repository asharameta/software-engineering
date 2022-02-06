package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        String tmp=scn.nextLine();
        if(tmp.matches("[(][0-9][)]")){
            System.out.println("a");
        }
    }
}
