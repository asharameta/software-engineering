package com.company;

import java.util.Scanner;

import static java.lang.Math.sqrt;

public class Triangle extends Polygon{
    double x1,x2,x3;
    double y1,y2,y3;
    double area, circuit;
    String type, type2;

    public Triangle(String _triangle) throws Exception {
        try{
            if(_triangle.matches("^\\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\)")){
                _triangle=_triangle.replaceAll("[\\p{Punct}&&[^.]]", " ");
                Scanner scan=new Scanner(_triangle);
                x1=Double.parseDouble(scan.next());
                y1=Double.parseDouble(scan.next());
                x2=Double.parseDouble(scan.next());
                y2=Double.parseDouble(scan.next());
                x3=Double.parseDouble(scan.next());
                y3=Double.parseDouble(scan.next());
            }
            if(x1==x2&&x2==x3){
                throw new Exception();
            }
            else if(y1==y2&&y2==y3){
                throw new Exception();
            }
            else if((y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2)){
                throw new Exception();
            }
        }
        catch(Exception e){
            throw new Exception();
        }
        FindType();
        WhatTypeIs();
        FindArea();
        FindCircuit();
    }

    double FindAngle(double x1, double x2, double x3, double y1, double y2, double y3){
        double ratio = (y2*(x1-x3) + y1*(x3-x2) + y3*(x2-x1))/((x2-x1)*(x1-x3) + (y2-y1)*(y1-y3));

        double angleRad = Math.atan(ratio);
        double angleDeg = (angleRad*180)/Math.PI;

        if(angleDeg<0){
            angleDeg+=180;
        }

        return angleDeg;
    }

    public String FindType(){
        if(FindAngle(x2,x1,x3,y2,y1,y3)<90 && FindAngle(x1,x3,x2,y1,y3,y2)<90 && FindAngle(x3,x2,x1,y3,y2,y1)<90){
            type2="Acute";
        }
        else if(FindAngle(x2,x1,x3,y2,y1,y3)==90 || FindAngle(x1,x3,x2,y1,y3,y2)==90 || FindAngle(x3,x2,x1,y3,y2,y1)==90){
            type2="Right";
        }
        else if(FindAngle(x2,x1,x3,y2,y1,y3)>90 || FindAngle(x1,x3,x2,y1,y3,y2)>90 || FindAngle(x3,x2,x1,y3,y2,y1)>90){
            type2="Obtuse";
        }
        else
            type2="Triangle";
        return type2;
    }


    public String WhatTypeIs(){
        double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        if(a==b && b==c && a==c){
            type="Equilateral";
        }
        else if(a==b || b==c || a==c){
            type="Isosceles";
        }
        else if(a!=b&&b!=c&&a!=c){
            type="Scalene";
        }
        return type;
    }

    public void FindArea(){
        area=Math.abs(0.5 * (x1*y2 + x2*y3 + x3*y1 - x1*y3 - x2*y1 - x3*y2 ));
    }

    public void FindCircuit(){
        double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        circuit=(a+b+c);
    }

    @Override
    void getFigure() {
        System.out.println("Type: "+type+" "+type2);
        System.out.println("Area: "+area);
        System.out.println("Circuit: "+circuit);
        logger.info("Triangle vertices: (" + x1 + "," + y1 + ") (" + x2 + "," + y2 + ") (" + x3 + "," + y3 + ")");
    }
}
