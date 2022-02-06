package com.company;

import java.util.ArrayList;
import java.util.List;

public class School {
    private static List<Student> studentList;
    private final static School INSTANCE=new School();
    private static String name;

    private School(){
        studentList = new ArrayList<>();
    }

    public static void addStudents(Student ... list){
        for(Student s: list){
            studentList.add(s);
        }
    }
    public static School getINSTANCE(){
        return INSTANCE;
    }
    public static void addName(String _name) {
        name=_name;
    }
    public static List<Student> getStudents(){
        return studentList;
    }
}
