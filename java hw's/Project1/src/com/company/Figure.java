package com.company;

import java.io.IOException;
import java.util.logging.FileHandler;
import java.util.logging.Logger;

abstract public class Figure {
    static Logger logger = Logger.getLogger("Figures");

    static void startLogger() throws IOException {
        FileHandler fh=new FileHandler("log.txt", true);
        logger.addHandler(fh);
    }



    public static Figure whatIsIt(String tmp) throws Exception {
        int counter=0;
        String walker;
        for (int j=0;j<tmp.length();j++){
            walker= String.valueOf(tmp.charAt(j));
            if(walker.equals("(") || walker.equals(")")){
                counter++;
            }
        }
        Figure f;
        if (counter==2){
            //Circle
            f = new Circle(tmp);
        }
        else if(counter==6 || counter==8){
            //Polygon
            f = Polygon.whatIsIt(tmp);
        }
        else
            throw new Exception();

        return f;
    }

    abstract void getFigure();

}
