package com.company;

import java.util.Scanner;

import static java.lang.Math.sqrt;

public class Quadrangle extends Polygon implements Parallelogram, Square,Rectangle,Trapezoid{
    double x1,x2,x3,x4;
    double y1,y2,y3,y4;
    Double area, circuit;
    String type;
    public Quadrangle(String _quadrangle) throws Exception {
        try {
            if (_quadrangle.matches("^\\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\) \\([-]?\\p{Digit}*\\.?\\p{Digit},[-]?\\p{Digit}*\\.?\\p{Digit}\\)")) {
                _quadrangle=_quadrangle.replaceAll("[\\p{Punct}&&[^.]]", " ");
                Scanner scan=new Scanner(_quadrangle);
                x1=Double.parseDouble(scan.next());
                y1=Double.parseDouble(scan.next());
                x2=Double.parseDouble(scan.next());
                y2=Double.parseDouble(scan.next());
                x3=Double.parseDouble(scan.next());
                y3=Double.parseDouble(scan.next());
                x4=Double.parseDouble(scan.next());
                y4=Double.parseDouble(scan.next());
            }
            if(x1==x2&&x2==x3 || x1==x3&&x3==x4 || x2==x3&&x3==x4 || x1==x2&&x2==x4){
                throw new Exception();
            }
            else if(y1==y2&&y2==y3 || y1==y3&&y3==y4|| y2==y3&&y3==y4 || y1==y2&&y2==y4){
                throw new Exception();
            }
            else if((y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2)){
                throw new Exception();
            }
            else if((y1 - y4) * (x1 - x3) == (y1 - y3) * (x1 - x4)){
                throw new Exception();
            }
        } catch (Exception e) {
            throw new Exception();
        }
        FindType();
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

    public void FindType(){
        double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        double c = sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
        double d = sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        if(FindAngle(x2,x3,x1,y2,y3,y1)==90 && FindAngle(x4,x3,x1,y4,y3,y1)==90){
            if(a==b&&b==c&&c==d&&d==a){
                type=square();
            }
            else if(a==c&&b==d){
                type=rectangle();
            }
        }
        else if(FindAngle(x1,x2,x4,y1,y2,y4)==FindAngle(x3,x2,x4,y3,y2,y4) && FindAngle(x1,x2,x4,y1,y2,y4)!=90 && FindAngle(x3,x2,x4,y3,y2,y4)!=FindAngle(x2,x1,x3,y2,y1,y3)){
            if(a==c&&b==d){
                type=parallelogram();
            }
        }
        else if(FindAngle(x1,x2,x4,y1,y2,y4)==FindAngle(x2,x1,x3,y2,y1,y3)){
            if(a==c&&b==d){
                type=trapezoid();
            }
        }
        else
            type="Quadrangle";
    }

    public void FindArea(){
       area=Math.abs(0.5 * (x1*y2 + x2*y3 + x3*y4 + x4*x1 - x1*y4 - x4*y3 - x2*y1 - x3*y2));
    }

    public void FindCircuit(){
        double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        double c = sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
        double d = sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        circuit=(a+b+c+d);
    }

    @Override
    void getFigure() {
        System.out.println("Type: "+type);
        System.out.println("Area: "+area);
        System.out.println("Circuit: "+circuit);
        logger.info("Quadrangle vertices: ("+x1+","+y1+") ("+x2+","+y2+") ("+x3+","+y3+") ("+x4+","+y4+")");
    }




    @Override
    public String square() {
        return Square.super.typ();
    }

    @Override
    public String trapezoid() {
        return Trapezoid.super.typ();
    }

    @Override
    public String typ() {
        return Parallelogram.super.typ();
    }

    @Override
    public String parallelogram() {
        return Parallelogram.super.typ();
    }
    @Override
    public String rectangle() {
        return Rectangle.super.typ();
    }

}
