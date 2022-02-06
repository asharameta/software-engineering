package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        System.out.println("Enter your Surname: ");
        String surname=scn.nextLine();
        System.out.println("Enter the number of Subjects: ");
        int subjects=scn.nextInt();
	    StudentIndex S1= new StudentIndex(surname, subjects);
	    S1.EnterGrades();
	    S1.PrintStudent();
        System.out.println("the maximum grade: "+S1.GetMaxGrade());
        S1.NotReceived();
    }

}
