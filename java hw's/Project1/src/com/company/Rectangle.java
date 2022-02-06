package com.company;

public interface Rectangle{
    default String typ(){
        return "Rectangle";
    }

    String rectangle();
}
