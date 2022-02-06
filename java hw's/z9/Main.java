package z9;

import java.time.DayOfWeek;
import java.time.LocalDate;
import java.time.format.TextStyle;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;

import z9.Person.Sex;

public class Main {
	public static void printPersonsOlderThan(List<Person> list,int age) {
		for(Person p:list)
			if (p.getAge()>=age)
				p.printPerson();
	}
	
	public static void printPersonsWithinAgeRange(List<Person> list , int low, int high) {
		for(Person p:list)
			if (p.getAge()>=low && p.getAge()<=high)
				p.printPerson();		
	}
	
	public static void printWomen(List<Person> list) {
		for(Person p:list)
			if (p.gender.equals(Sex.FEMALE))
				p.printPerson();
	}
	
	interface CheckPerson {
		boolean check(Person p);
	}
	
	static class CheckAge implements CheckPerson {
		int age;
		public CheckAge(int age) { this.age = age;}
		@Override
		public boolean check(Person p) {
			return (p.getAge()>=age);
		}
	}
		
	static class CheckWomen implements CheckPerson {
		@Override
		public boolean check(Person p) {
			return p.gender.equals(Sex.FEMALE);
		}		
	}
	
	public static void printPersosns(List<Person> list, CheckPerson checker) {
		for(Person p:list)
			if (checker.check(p))
				p.printPerson();
	}
	
	public static void printPersosnsWithPredicate(List<Person> list, Predicate<Person> predicate) {
		for(Person p:list)
			if (predicate.test(p))
				p.printPerson();
	}
	
	public static void processPersons(List<Person> list, Predicate<Person> predicate, Consumer<Person> consumer) {
		for(Person p:list)
			if (predicate.test(p))
				consumer.accept(p);
	}
	
	public static void processPersonsWithFunction(List<Person> list, Predicate<Person> predicate, Function<Person, LocalDate> mapper, Consumer<DayOfWeek> consumer) {
		for(Person p:list)
			if (predicate.test(p)) {
				LocalDate date = mapper.apply(p);
				DayOfWeek day = date.getDayOfWeek();
				consumer.accept(day);
			}
	}
	
	public static <T,U>void processPersonsWithFunctionG(List<T> list, Predicate<T> predicate, Function<T, U> mapper, Consumer<U> consumer) {
		//TODO
	}

	
	public static void main(String[] args) {
		List<Person> list = new ArrayList<>();
		list.add(new Person("Anna",LocalDate.of(1980,11,3),Person.Sex.FEMALE));
		list.add(new Person("Jan",LocalDate.of(1985,1,31),Person.Sex.MALE));
		list.add(new Person("Agata",LocalDate.of(2005,6,20),Person.Sex.FEMALE));
		list.add(new Person("Piotr",LocalDate.of(2008,2,29),Person.Sex.MALE));
	
		//Podejœcie standardowe
		printPersonsOlderThan(list,18);
		System.out.println();
		printPersonsWithinAgeRange(list,18,40);
		System.out.println();
		printWomen(list);
		System.out.println();
		
		//Podejœcie klasy lokalne
		printPersosns(list,new CheckAge(18));
		printPersosns(list,new CheckWomen());		
		
		//Podejœcie klasy anonimowe
		printPersosns(list, new CheckPerson() {
			@Override
			public boolean check(Person p) {
				return p.gender.equals(Sex.MALE);
			}});
		
		printPersosns(list, new CheckPerson() {
			@Override
			public boolean check(Person p) {
				return p.getAge()<18;
			}});
		Person p1;
		//Podejœcie lambdy
		printPersosns(list,p->p.gender.equals(Sex.MALE));
		printPersosnsWithPredicate(list,p->p.name.startsWith("A"));

		printPersosnsWithPredicate(list,p->p.name.startsWith("A"));

		processPersons(list,p->true,
				p->{p.printPerson();
				p.printBirthday();});
		processPersons(list,p->p.gender.equals(Sex.MALE),
			p->p.birthday = p.birthday.plusMonths(1));
		processPersons(list,p->true,
				p->{p.printPerson();
				p.printBirthday();});	
		processPersonsWithFunction(list,
				p->p.gender.equals(Sex.MALE),
				p->p.birthday,
				day->System.out.println(day.getDisplayName(TextStyle.FULL_STANDALONE, Locale.FRANCE)));
		//Zmiany na osobach
		
	}
}
