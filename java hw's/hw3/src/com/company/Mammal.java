package com.company;

public class Mammal extends Animal implements Carnivorous {
    int numberOfLegs;
    public Mammal(int _numberOfLegs, float _weight,int _age,String _name, String _species){
        super(_weight,_age,_name,_species);
        numberOfLegs=_numberOfLegs;
    }
    public void walk(){
        System.out.println("walk on "+numberOfLegs+" legs");
    }
}
