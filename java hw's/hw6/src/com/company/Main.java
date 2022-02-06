package com.company;

import javax.sound.midi.Soundbank;
import java.sql.SQLOutput;
import java.time.*;
import java.time.format.TextStyle;
import java.util.Locale;
import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter your name");
        String name = scan.nextLine();
        Person p=new Person();
        try {
            if (!name.matches("[A-Z][a-z]+")) {
                throw new Exception();
            }
            p.setName(name);
        }
        catch (Exception e){
            System.err.println("Wrong name. First letter might be Upper or Consist not from letters only");
            System.exit(0);
        }
        System.out.println("Enter your surname");
        String surname = scan.nextLine();
        try {
            if (!surname.matches("[A-Z][a-z]+")) {
                throw new Exception();
            }
            p.setSurname(surname);
        }
        catch (Exception e){
            System.err.println("Wrong surname. First letter might be Upper or Consist not from letters only");
            System.exit(0);
        }
        System.out.println("Enter your birth YYYY-MM-DD");
        String birthDateStr=scan.nextLine();
        try{
            if(birthDateStr.matches("[A-Z][a-z]+")){
                throw new Exception();
            }
            LocalDate birthDate = LocalDate.parse(birthDateStr);
            p.setBirthDate(birthDate);
        } catch (Exception e) {
            System.err.println("Wrong Birth Date. Consist not from number only");
            System.exit(0);
        }

        System.out.println("Enter time of your birth HH:MM");
        String timeOfBirthStr=scan.nextLine();
        LocalTime timeOfBirth = LocalTime.parse(timeOfBirthStr);

    }
}
