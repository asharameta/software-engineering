package com.company;

public class Ksiazki {
    public String name;
    public int numberOfPages;
    public boolean isBookReaded;
    public int readPages;
    public Ksiazki(String _name, int _numberOfPages){
        name=_name;
        numberOfPages=_numberOfPages;
    }

    public void AddReadedPages(int _add){
        if(readPages >= numberOfPages)
        {
            isBookReaded=true;
        }
        else
        readPages+=_add;
    }
    public void NameOfBook(String _name){
        name=_name;
    }
    public void Pages(int _add){
        numberOfPages=_add;
    }
    public boolean readBook(){
        if(readPages >= numberOfPages)
        {
            return true;

        }
        else
        {
            return false;
        }

    }
}
