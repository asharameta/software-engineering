package com.company;

public class Shop {

    public enum Type {
        FRUIT("Owoc",8.0), VEGETABLE("Warzywa", 8.0), OTHER("Inne", 23.0);
        String nameInPolish;
        Double vat;
        Type(String _nameInPolish, double _vat) {
            nameInPolish=_nameInPolish;
            vat=_vat;
        }
    }

    Type type;
    String name;
    Double price;
    Integer numberOf;


    public Shop(String _name, double _price, int _numberOf,Type _type) {
        super();
        type = _type;
        name = _name;
        price = _price;
        numberOf = _numberOf;
    }

    public String getName(){
        return name;
    }

    public int getNUmberOf(){
        return numberOf;
    }

    public double getPrice(){
        return price;
    }

    public void printProduct() {
        System.out.println(name+" "+type+" "+"Brutto: "+price*numberOf+" "+"Netto: "+price+" "+"Number of product: "+numberOf);
    }

}
