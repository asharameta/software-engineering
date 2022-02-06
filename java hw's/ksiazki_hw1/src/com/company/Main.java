package com.company;

public class Main {

    public static void main(String[] args) {
    Ksiazki Book1=new Ksiazki("Rok w lesie", 128);
    Ksiazki Book2=new Ksiazki("Cudowny chlopak", 200);
    System.out.println("Fisrt Book: "+Book1.name+", "+Book1.numberOfPages+" pages");
    System.out.println("Second Book: "+Book2.name+", "+Book2.numberOfPages+" pages");
    System.out.println("First book have "+Book1.readPages+" pages read");
    System.out.println("Second book have "+Book2.readPages+" pages read");
    System.out.println("Is first book been read? - "+Book1.readBook());
    System.out.println("Is second book been read? - "+Book2.readBook());
    Book1.AddReadedPages(128);
    Book2.AddReadedPages(100);
    System.out.println("First book have "+Book1.readPages+" pages read");
    System.out.println("Second book have "+Book2.readPages+" pages read");
    System.out.println("Is first book been read? - "+Book1.readBook());
    System.out.println("Is second book been read? - "+Book2.readBook());

    }
}
