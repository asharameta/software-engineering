package com.company;

public interface Trapezoid {
    public default String typ(){
        return "Trapezoid";
    }

    String trapezoid();
}
