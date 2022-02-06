package com.company;

import java.util.Arrays;
import java.util.Scanner;
import java.util.*;

public class StudentIndex {
    public String surname;
    public int subjects;
    public double[] grades;
    public StudentIndex(String _surname, int _subjects)
    {
        surname=_surname;
        subjects=_subjects;
    }
    public void EnterGrades()
    {
        grades=new double[subjects];
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter grades one at a time: ");
        for(int i=0;i<grades.length;i++)
        {
            grades[i]=scan.nextDouble();
        }
    }
    public void PrintStudent()
    {
        System.out.println("Student "+surname+" has the following grades: ");
        for(int i=0;i<grades.length;i++)
        {
            String grade= String.valueOf(grades[i]);
            switch (grade) {
                case "2.0" -> System.out.println("niedostateczny(2.0)");
                case "3.0" -> System.out.println("dostateczny(3.0)");
                case "3.5" -> System.out.println("plus dostateczny(3.5)");
                case "4.0" -> System.out.println("dobry(4.0)");
                case "4.5" -> System.out.println("plus dobry(4.5)");
                case "5.0" -> System.out.println("bardzo dobry(5.0)");
            }
        }
    }

    public double GetMaxGrade()
    {
        Arrays.sort(grades);
        return (grades[subjects-1]);
    }

    public void NotReceived()
    {
        System.out.print("Student didn't received following grades: ");
        double[] scaleGrade={2.0,3.0,3.5,4.0,4.5,5.0};
        ArrayList<Double> unique = new ArrayList<>();
        for(int i=0; i<scaleGrade.length; i++){
            boolean duplicate = false;
            for(int j=0; j<grades.length; j++){
                if(scaleGrade[i] == grades[j]){
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                unique.add(scaleGrade[i]);
            }
        }
        System.out.println(unique);
    }
}
