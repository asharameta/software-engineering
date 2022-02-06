package com.company;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;

public class Menu{
    Map<String, Double> map = new HashMap<>();
    public void AddDish(String key, Double value){
        if (map.containsKey(key)) {
            System.out.println("This dish is already on the list.");
        }
        else {
            map.put(key, value);
        }
    }

    public void ShowMenu(){
        for (String key:map.keySet())
            System.out.println(key+" "+map.get(key));
    }

    public void ChangePrice(String key, Double oldP, Double newP){
        if(map.containsKey(key))
            map.replace(key, oldP, newP);
        else
            System.out.println("There is no dishes with this name:(");
    }

    public void DeleteDish (String name) {
        if(map.containsKey(name))
            map.remove(name);
        else
            System.out.println("There is no dishes with this name:(");
    }
}
