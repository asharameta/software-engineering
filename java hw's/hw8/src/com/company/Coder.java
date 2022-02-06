package com.company;

import java.util.Locale;

public class Coder {

    private Coder() {
    }

    public static String code(String s) {
        String walker;
        String res="";
        s=s.toLowerCase();
        for (int j=0;j<s.length();j++){
            walker= String.valueOf(s.charAt(j));
            switch (walker){
                case "g"->res+="a";
                case "a"->res+="g";
                case "k"->res+="i";
                case "i"->res+="k";
                case "d"->res+="e";
                case "e"->res+="d";
                case "r"->res+="y";
                case "y"->res+="r";
                case "p"->res+="o";
                case "o"->res+="p";
                case "l"->res+="u";
                case "u"->res+="l";
                default -> res+=walker;
            }
        }
      return res.toUpperCase().charAt(0)+res.substring(1);
    }
}
