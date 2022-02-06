package object;

import java.util.ArrayList;
import java.util.List;

public class UniversitySemester {
	private final static UniversitySemester INSTANCE = new UniversitySemester();
	private static List<Course> courses;
	
	public static UniversitySemester get() {
		return INSTANCE;
	}
	
	private UniversitySemester() {
		courses = new ArrayList<>();
	}
	
	public static void addCOurse(Course... list) {
		for(Course c:list)
			courses.add(c);
	}
	
	public static List<Course> getCourses(){
		return courses;
	}
}
