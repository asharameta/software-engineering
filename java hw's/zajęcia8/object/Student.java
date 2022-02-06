package object;

import java.util.ArrayList;
import java.util.List;
import java.util.Objects;

public class Student implements Cloneable{
	public String name;
	public String surname;
	public List<Integer> grades;
	
	public Student(String name,String surname) {
		this.name = name;
		this.surname = surname;
		this.grades = new ArrayList<>();
	}

	@Override
	public Student clone() throws CloneNotSupportedException {
		Student copy = (Student) super.clone();
		copy.grades = new ArrayList<>();
		copy.grades.addAll(this.grades);
		return copy;
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
		if(!grades.equals(student.grades))
			return false;
		return true;
	}
	
	@Override
	public int hashCode() {
		return Objects.hash(name,surname,grades);
	}
	
	@Override
	public String toString() {
		return name+" "+surname;
	}
}
