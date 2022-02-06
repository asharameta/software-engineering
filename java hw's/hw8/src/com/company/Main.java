package com.company;

import java.time.LocalDate;

public class Main {

    public static void main(String[] args) throws CloneNotSupportedException {
        Student s1=new Student("Jan", "Kowalski", LocalDate.of(2000,12,1));
        Student s2=new Student("Ala Ma", "Kota",LocalDate.of(2002,5,5));

        School sch=School.getINSTANCE();
        sch.addName("Oxford");
        sch.addStudents(s1,s2);
        Student s3=s2.clone();
        System.out.println(s3.equals(s2));
        System.out.println(s1+" "+s1.hashCode());
        System.out.println(Coder.code("Kowalska"));
    }
}
