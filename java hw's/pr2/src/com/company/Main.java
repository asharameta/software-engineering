package com.company;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
import java.util.concurrent.Callable;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.function.Consumer;
import java.util.function.Predicate;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        List<Person> list = new ArrayList<>();
        try {
            File myObj = new File("daneBZ.txt");
            Scanner myReader = new Scanner(myObj);
            while (myReader.hasNextLine()) {
                String data = myReader.nextLine();
                data=data.replaceAll("[;]", " ");
                Scanner scan=new Scanner(data);
                String name= scan.next();
                String surname=scan.next();
                String bDay=scan.nextLine();
                list.add(new Person(name, surname, bDay));
            }
            myReader.close();
        } catch (FileNotFoundException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        Collections.shuffle(list);

        List<Callable<Object>> callableList=new ArrayList<>();

        for(Person p: list){
            Thread t = p;
            callableList.add(Executors.callable(t));
        }

        ExecutorService es = Executors.newFixedThreadPool(callableList.size());
        try{
            es.invokeAll(callableList);
            Collections.shuffle(callableList);
            es.invokeAll(callableList);
            Collections.shuffle(callableList);
            es.invokeAll(callableList);
            Collections.shuffle(callableList);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        es.shutdown();
    }
}
