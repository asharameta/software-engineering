package com.company;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class Student {
    public String name;
    public String surname;
    public LocalDate birthday;

    public Student(String name,String surname, LocalDate birthday) {
        this.name = name;
        this.surname = surname;
        this.birthday=birthday;
    }

    @Override
    public Student clone() throws CloneNotSupportedException {
          Student newStudent=new Student(name,surname,birthday);
          return newStudent;
    }

    @Override
    public boolean equals(Object obj) {
        if(!(obj instanceof Student))
            return false;
        Student student = (Student) obj;
        if(!name.equals(student.name))
            return false;
        if(!surname.equals(student.surname))
            return false;
        if(!birthday.equals(student.birthday))
            return false;
        return true;
    }

    @Override
    public int hashCode() {
        return Objects.hash(name,surname,birthday);
    }

    @Override
    public String toString() {
        return name+" "+surname+" "+birthday;
    }
}
