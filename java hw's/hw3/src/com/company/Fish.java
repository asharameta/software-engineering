package com.company;

public class Fish extends Animal{
    public Fish(float _weight, int _age, String _name, String _species){
        super(_weight,_age,_name,_species);
    }
    public void swim()
    {
        System.out.println("I'm swimming!!!");
    }
}
