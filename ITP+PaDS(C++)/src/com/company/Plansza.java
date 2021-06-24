package com.company;

public class Plansza {
    final private int szer;
    final private int wys;
    final private Obiekt[][] tab;

    public Plansza(int szer, int wys) {
        this.szer = szer;
        this.wys = wys;

        tab=new Obiekt[wys][szer];
    }

    public void wstaw(int i, int j, char znak)
    {
        switch(znak)
        {
            case 'A': tab[i][j]=new A(); break;
            case 'B': tab[i][j]=new B(); break;
            case 'C': tab[i][j]=new C(); break;
            case 'D': tab[i][j]=new D(); break;
            default:
                return;
        }
    }

    public void print(Plansza p)
    {
        for (int i = 0; i < p.wys; i++) {
            for (int j = 0; j < p.szer; j++)
            {
                if (p.tab[i][j] != null) p.tab[i][j].print();
                else
                    System.out.print(".");
            }
            System.out.println();
        }
        System.out.println();
    }
}
