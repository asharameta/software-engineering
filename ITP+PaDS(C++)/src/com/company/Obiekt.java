package com.company;

public abstract class Obiekt {
    public abstract void print();
}

class A extends Obiekt
{
    public void print()
    {
        System.out.print('A');
    }
}

class B extends Obiekt
{
    public void print()
    {
        System.out.print('B');
    }
}

class C extends Obiekt
{
    public void print()
    {
        System.out.print('C');
    }
}

class D extends Obiekt
{
    public void print()
    {
        System.out.print('D');
    }
}
