package com.company;

import java.time.*;
import java.util.Locale;

public class Person {
    private String name, surname;
    private LocalDate birthDate;
    private LocalTime timeOfBirth;

    void setName(String _name){name=_name;}
    void setSurname(String _surname){surname=_surname;}
    void setBirthDate(LocalDate _birthDate){birthDate=_birthDate;}
    void setTimeOfBirth(LocalTime _timeOfBirth){timeOfBirth=_timeOfBirth;}

    String getName(){return name;}
    String getSurname(){return surname;}
    LocalDate getBirthDate(){return birthDate;}
    LocalTime getTimeOfBirth(){return timeOfBirth;}

    String getGender(){
        if(name.charAt(name.length()-1)=='a'){
            return "female";
        }
        else
            return "male";
    }
    int getAge(){ LocalDate date = LocalDate.now(); return date.getYear()-birthDate.getYear();}
    DayOfWeek getDayOfBirth(){return birthDate.getDayOfWeek();}
    String reverseNameAndSurname(){
        String nameR="",surnameR="";
        for(int i = name.length() - 1; i >= 0; i--)
        {
             nameR= nameR + name.charAt(i);
        }
        for(int i = surname.length() - 1; i >= 0; i--)
        {
            surnameR= surnameR + surname.charAt(i);
        }
        nameR=nameR.substring(0,1).toUpperCase(Locale.ROOT)+nameR.substring(1).toLowerCase(Locale.ROOT);
        surnameR=surnameR.substring(0,1).toUpperCase(Locale.ROOT)+surnameR.substring(1).toLowerCase(Locale.ROOT);
        return nameR+" "+surnameR;
    }
    String BirthInLA(){
        ZoneId zonePoland = ZoneId.of("Europe/Warsaw");
        ZonedDateTime inPL = ZonedDateTime.of(birthDate,timeOfBirth, zonePoland);
        ZoneId zoneLA = ZoneId.of("America/Los_Angeles");
        ZonedDateTime inLA = inPL.withZoneSameInstant(zoneLA);
        return inLA.toString();
    }
}
