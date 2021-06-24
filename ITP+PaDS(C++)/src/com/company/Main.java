package com.company;

public class Main {

    public static void main(String[] args) {
        System.out.println("Pierwszy kod w javie");
        Obiekt o; //variable object, referencja

        //variable
        int x=0;
        System.out.println(x);

        Plansza p = new Plansza(5,4);
        p.print(p);
        p.wstaw(0,0, 'A');
        p.wstaw(1,1, 'B');
        p.wstaw(2,2, 'C');
        p.wstaw(3,1, 'D');
        p.print(p);

        System.out.println(p);
    }
}
