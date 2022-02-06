package com.company;

import java.util.Random;
import java.util.Scanner;

import static java.lang.Integer.parseInt;

public class Person extends Thread {


    public enum Gender {
        MALE,
        FEMALE
    };

    private Gender gender;
    private String name;
    private String surname;
    private String pesel;
    private String bDay;
    private long timer1;
    private long timer2;
    private long timer3;

    public Person(String _name, String _surname, String _bDay) {
        name = _name;
        surname = _surname;
        bDay = _bDay;
        gender=getGender();
        pesel = createPesel(bDay);
    }


    public String createPesel(String bDay){
        Scanner scan=new Scanner(bDay);
        String year= scan.next();
        String month=scan.next();
        String day=scan.nextLine();
        int y = parseInt(year);
        year=year.substring(2);
        day=day.substring(1);
        int m=parseInt(month);
        int d=parseInt(day);
        if(d<10)day=0+""+d;
        if(m<10 && y>=2000)month=2+""+m;
        else if(m<10 && y<2000)month=0+""+m;
        Random rand=new Random();
        String ordinal=rand.nextInt(10)+""+rand.nextInt(10)+""+rand.nextInt(10);
        pesel=year+month+day+ordinal;
        int sex= rand.nextInt(10);
        if(getGender()==Gender.MALE && sex%2!=0){
            pesel=pesel+sex;
        }
        else if(getGender()==Gender.MALE&& sex%2==0){sex+=1;pesel=pesel+sex;}
        else if(getGender()==Gender.FEMALE && sex%2==0)pesel=pesel+sex;
        else if(getGender()==Gender.FEMALE&& sex%2!=0){
            if(sex==1)sex=sex+2;
            else sex-=1;
            pesel=pesel+sex;
        }
        int digit=findDigit(pesel);
        pesel=pesel+""+digit;
        return pesel;
    }

    private static int findDigit(String pesel) {
        int[] weights = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
        assert (pesel.length() == weights.length);
        int sum = 0;
        for (int i = 0; i < pesel.length(); i++) {
            sum += Character.getNumericValue(pesel.charAt(i)) * weights[i];
        }
        return (10 - sum % 10) % 10;
    }

    public Gender getGender() {
        if (name.charAt(name.length()-1) == 'a') return Gender.FEMALE;
        else return Gender.MALE;
    }

    @Override
    public final String toString() {
        return name+" "+surname+" "+bDay+" "+pesel;
    }

    @Override
    public final boolean equals(Object obj){
        if(!(obj instanceof Person))return false;
        Person p = (Person) obj;
        if(!pesel.equals(p.pesel))return false;
        return true;
    }

    @Override
    public void run(){
        if(timer1!=0){
            if(timer2!=0)timer3= System.currentTimeMillis();
            else timer2=System.currentTimeMillis();
        } else timer1=System.currentTimeMillis();
    }
}
