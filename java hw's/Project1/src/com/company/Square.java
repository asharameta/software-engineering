package com.company;

public interface Square{
    default String typ(){
        return "Square";
    }

    String square();
}
