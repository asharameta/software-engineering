package com.company;

abstract public class Polygon extends Figure {

    public static Polygon whatIsIt(String tmp) throws Exception {
        Polygon p;
        int counter = 0;
        String walker;
        for (int j = 0; j < tmp.length(); j++) {
            walker = String.valueOf(tmp.charAt(j));
            if (walker.equals("(") || walker.equals(")")) {
                counter++;
            }
        }
            if (counter == 6) {
                //Triangle
                p = new Triangle(tmp);
            } else if (counter == 8) {
                //Quadrangle
                p = new Quadrangle(tmp);
            }
            else{
                p= new Polygon() {
                    void getFigure() {
                    }
                };
            }

        return p;
    }
}
