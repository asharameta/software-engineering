package com.company;


import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Shop extends Menu {
    List<String> Order = new ArrayList<>();

    public void addDishToTheOrder(String key, Menu menu) {
        if (menu.map.containsKey(key))
            Order.add(key);
        else
            System.out.println("This dish is not on the menu.");
    }

    public void checkOrder (String key) {
        if(Order.contains(key))
            System.out.println("Dish already in Order");
        else
            System.out.println("Dish not in Order");
    }

    public void getNumberOfDishes() {
        System.out.println("Number of ordered dishes: " + Order.size());
    }

    public void getPrice(Menu menu) {
        double price = 0;
        for (String key:Order)
            price += menu.map.get(key);
        System.out.println("Client have to pay: " + price + " zl");
    }
}
