package object;

public class Main {
	
	public static void main(String[] args) {
		Student s1 = new Student("Jan","Kowalski");
		s1.grades.add(5);
		s1.grades.add(6);
		
		Student s2 = new Student("Marcin","Nowak");
		s2.grades.add(3);
		
		Course c1 = new Course("Zajecia1",s1);
		Course c2 = new Course("Zajecia2",s1,s2);
		
		UniversitySemester semester = UniversitySemester.get();
		semester.addCOurse(c1,c2);
		
		System.out.println(StudentsUtils.countAverage(s2));
	}

}
