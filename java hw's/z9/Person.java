package z9;

import java.time.LocalDate;
import java.time.format.TextStyle;
import java.time.temporal.ChronoUnit;
import java.util.Locale;

public class Person {

    public enum Sex {
        MALE, FEMALE
    }

    String name;
    LocalDate birthday;
    Sex gender;
    String emailAddress;

    public int getAge() {
        return (int)ChronoUnit.YEARS.between(birthday, LocalDate.now());
    }

    public void printPerson() {
     /*   StringBuilder sb = new StringBuilder();
        sb.append("Name: "+name+"\n");
        sb.append("Birthday: "+birthday.getDayOfMonth()+"."+birthday.getMonthValue()+"."+birthday.getYear()+"\n");
        sb.append("Gender: "+(gender.equals(Sex.FEMALE)?"famle":"male")+"\n");
        System.out.println(sb);*/
    	System.out.println(name);
    }

	public Person(String name, LocalDate birthday, Sex gender) {
		super();
		this.name = name;
		this.birthday = birthday;
		this.gender = gender;
	}
	
	public static int compareByAge(Person p1, Person p2) {
		return p1.birthday.compareTo(p2.birthday);
	}
	
	public int compareByName(Person p) {
		return this.name.compareTo(p.name);
	}
	
	public void printBirthday() {
		System.out.println(birthday.getDayOfMonth()+" "+birthday.getMonth().getDisplayName(TextStyle.FULL, Locale.getDefault())+
				" "+birthday.getYear());
	}
}
