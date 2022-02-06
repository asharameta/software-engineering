package com.company;

public class Animal{
    float weight;
    int age;
    String name;
    String species;
    public Animal(float _weight,int _age,String _name, String _species){
        weight=_weight;
        age=_age;
        name=_name;
        species=_species;
    }

    public void whoAmI(){
        System.out.println("[ name: "+name+", age: "+age+", weight: "+weight+"g, species: "+species+"]");
    }
    public void eat(){
        System.out.println("I'm eating!!!");
    }
    public void sleep(){
        System.out.println("I'm sleeping!!!");
    }
}
