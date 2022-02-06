package com.company;

public class Bird extends Animal{
    public Bird(float _weight, int _age, String _name, String _species){
        super(_weight,_age,_name, _species);
    }
    public void fly()
    {
        System.out.println("I'm flying!!!");
    }
}
