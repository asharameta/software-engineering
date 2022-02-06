package object;

public class StudentsUtils {

	private StudentsUtils() {
	}
	
	public static double countAverage(Student s) {
		double sum=0.0;
		for(Integer i:s.grades)
			sum=sum+i;
		return sum/s.grades.size();
	}
}
