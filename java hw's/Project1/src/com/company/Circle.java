package com.company;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Circle extends Figure{
    double x1,y1,r;
    double area, circuit;
    public Circle(String _circle) throws Exception {
        try{
            if(_circle.matches("^\\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\p{Digit}*\\.?\\p{Digit}")){
                _circle=_circle.replaceAll("[\\p{Punct}&&[^.]]", " ");
                Scanner scan=new Scanner(_circle);
                x1=Double.parseDouble(scan.next());
                y1=Double.parseDouble(scan.next());
                r=Double.parseDouble(scan.next());
            }
        }
        catch(Exception e){
            throw new Exception();
        }
        FindArea();
        FindCircuit();
    }



    public void FindArea(){
        area=(Math.pow(r,2))*Math.PI;
    }

    public void FindCircuit(){
        circuit=2*Math.PI*r;
    }

    @Override
    void getFigure() {
        System.out.println("Type: Circle");
        System.out.println("Area: "+area);
        System.out.println("Circuit: "+circuit);
        logger.info("Circle: (" + x1 + "," + y1 + ") "+r);
    }
}
