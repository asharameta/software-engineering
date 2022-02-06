package com.company;

public interface Carnivorous{
    default void hunt(){
        System.out.println("I'm hunting!!!");
    }
}
