package com.company;

import java.io.IOException;
import java.util.Scanner;
import java.util.logging.FileHandler;
import java.util.logging.Logger;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scan= new Scanner(System.in);
        System.out.println("Number of figures: ");
        int nOfFigures=scan.nextInt();
        Figure[] figures = new Figure[nOfFigures];
        scan.nextLine();
        for(int i=0;i<nOfFigures;i++){
               while (true){
                   String tmp;
                   System.out.println("Figure " + (i + 1) + ": ");
                   try{
                       tmp = scan.nextLine();
                       figures[i]=Figure.whatIsIt(tmp);
                       break;
                   } catch (Exception e) {
                       System.err.println("Error while parsing");
                   }
               }
        }
        scan.close();

        Figure.startLogger();
        for (Figure f:figures) {
            f.getFigure();
        }

    }

}
