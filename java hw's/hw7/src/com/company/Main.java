package com.company;

import java.util.*;

public class Main {

    public static void main(String args[]) {
        Menu m = new Menu();
        Shop s = new Shop();

        m.AddDish("Zupa pomidorowa",4.0);
        m.AddDish("Krupnik", 4.0);
        m.AddDish("Gulasz", 9.0);
        m.AddDish("Pierogi", 9.5);
        m.AddDish("Rolada z kurczaka", 9.0);
        m.AddDish("Ziemniaki", 4.0);
        m.AddDish("Kasza gryczana", 3.5);
        m.AddDish("Kasza jeczmienna", 3.5);
        m.AddDish("Surowka z kapusty kiszonej", 4.0);
        m.AddDish("Buraki", 4.0);
        m.AddDish("Sernik", 6.0);

        s.addDishToTheOrder("Krupnik", m);
        s.addDishToTheOrder("Krupnik", m);
        s.addDishToTheOrder("Pierogi", m);

        s.checkOrder("Buraki");

        s.getNumberOfDishes();

        s.getPrice(m);
    }
}
