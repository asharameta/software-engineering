package object;

import java.util.ArrayList;
import java.util.List;

public class Course {
	private List<Student> list;
	private String name;
	
	public Course(String name, Student...students) {
		list=new ArrayList<>();
		for(Student s:students)
			list.add(s);
		this.name = name;
	}
	
	final List<Student> getList(){
		return list;
	}

	final String getName() {
		return name;
	}
}
