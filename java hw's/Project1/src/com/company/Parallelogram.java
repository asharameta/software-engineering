package com.company;

public interface Parallelogram {
    default String typ(){
        return "Parallelogram";
    }

    String parallelogram();
}
