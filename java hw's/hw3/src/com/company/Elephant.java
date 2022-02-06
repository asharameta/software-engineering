package com.company;

public class Elephant extends Mammal{
    Elephant(int _numberOfLegs, float _weight,int _age,String _name, String _species){
        super(_numberOfLegs,_weight,_age,_name,_species);
    }

    @Override
    public void whoAmI(){
        System.out.println("[ name: "+name+", age: "+age+", weight: "+weight+"g, species: "+species+"]");
    }

    @Override
    public void eat(){
        System.out.println("I'm eating!!!");
    }

    @Override
    public void sleep(){
        System.out.println("I'm sleeping!!!");
    }
}
