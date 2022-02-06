package com.company;

public class Shark extends Fish implements Carnivorous{
    Shark(float _weight, int _age, String _name, String _species){
        super(_weight,_age,_name,_species);
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
