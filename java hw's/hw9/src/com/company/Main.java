package com.company;

import java.util.*;
import java.util.concurrent.ConcurrentHashMap;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.stream.Collectors;

public class Main {

    public static void doOnProductList(List<Shop> list, Predicate<Shop> predicate, Consumer<Shop> consumer){
       for(Shop sh: list)
           if(predicate.test(sh))
               consumer.accept(sh);
    }


    public static void main(String[] args) {
        List<Shop> list = new ArrayList<>();
        list.add(new Shop("Apple", 3.00, 55,Shop.Type.FRUIT));
        list.add(new Shop("Carrot", 5.30, 33,Shop.Type.VEGETABLE));
        list.add(new Shop("Milk", 2.00, 61,Shop.Type.OTHER));
        list.add(new Shop("Orange", 6.00, 3,Shop.Type.FRUIT));
        list.add(new Shop("Eggs", 2.50, 105,Shop.Type.OTHER));

        doOnProductList(list, p->p.price>4,p-> p.printProduct());
        doOnProductList(list, p->p.type==Shop.Type.OTHER, p->p.price=p.price*(p.type.vat/100));
        doOnProductList(list, p->p.name=="Carrot", p-> System.out.println(p.numberOf* p.price+" zl."));
        doOnProductList(list, p->p.name.startsWith("O"), p->p.numberOf=0);
        doOnProductList(list, p->true, p->p.printProduct());

        System.out.println("----------------------");
        //1
        int numberOf= list
                .stream()
                .mapToInt(p->p.numberOf)
                .sum();
        System.out.println(numberOf);

        //2
        List<String> products = list
                .stream()
                .map(p -> p.type + " " + p.name)
                .collect(Collectors.toList());
        System.out.println(products);

        //3
        list
                .stream()
                .filter(p->p.type==Shop.Type.FRUIT)
                .collect(Collectors.toList())
                .forEach(p->p.printProduct());

        System.out.println("----------------------");

        //4
        list
                .stream()
                .sorted(Comparator.comparing(Shop::getPrice))
                .filter(p->p.price<1)
                .collect(Collectors.toList())
                .forEach(p->p.printProduct());


        //5
        Map<String, Integer> map = list
                .stream()
                .collect(Collectors.toMap(Shop::getName,Shop::getNUmberOf));
        System.out.println("map:");
        System.out.println(map);
        System.out.println("map end");
        //6
        boolean endWith=list
                .stream()
                .filter(p->p.type==Shop.Type.VEGETABLE)
                .allMatch(p->p.name.endsWith("a"));
        System.out.println(endWith);

    }
}
