#include "lista.h"
#include <sstream>
#include<iostream>

using namespace std;

Lista::Lista()//konstruktor
{
    pocz=nullptr;
    ogon=nullptr;
    ileJest=0;
}

Lista::~Lista(){
}

void Lista::wstaw(char a, int arg)//wstawianie cyfry do liczby na koniec
{
    Node*nowy;
    try{nowy=new Node;}
    catch(exception&e)
    {
        cout<<"Brak pamienci!"<<endl;
        return;
    }

    if(arg == 0){
        if(ileJest==0)
        {
            if(a!='+'&&a!='-')
            {
            	cout<<"Bledny znak:("<<endl;
            	return;
            }
            nowy->znak=a;
            (*nowy).nast=nullptr;
            nowy->prev=ogon;
            ogon=nowy;
            if(nowy->prev) nowy->prev->nast = nowy;
            else pocz= nowy;
        }
        else
        {
            if(!isdigit(a)) throw invalid_argument ("BLAD ZNAKU1!");
            nowy->dane=a-48;
            (*nowy).nast=nullptr;
            nowy->prev=ogon;
            ogon=nowy;
            if(nowy->prev) nowy->prev->nast = nowy;
            else pocz= nowy;
        }
        ileJest++;
    }
    else if(arg == 1){
        if(ileJest == 0){
            nowy->znak = a;
            ogon = nowy;
            pocz = nowy;
        }
        else if(ileJest == 1){
            nowy->dane = a - 48;
            pocz->nast = nowy;
            nowy->prev = pocz;
            ogon = nowy;
            ogon->nast = nullptr;
        }
        else{
            nowy->dane = a - 48;
            pocz->nast->prev = nowy;
            nowy->nast = pocz->nast;
            nowy->prev = pocz;
            pocz->nast = nowy;
        }
        ileJest++;
    }
}

void Lista::wypisz()//operacja wyjscia
{
    Node*biegacz;
    biegacz=pocz;
    cout<<"Start > ";
    cout<<(*biegacz).znak<<" > ";
    biegacz=(*biegacz).nast;
    while(biegacz!=nullptr)
    {
        cout<<(*biegacz).dane<<" > ";
        biegacz=(*biegacz).nast;
    }
    cout<<"End\n";

}

Lista Lista::operator+(const Lista& L) const
{
    Lista num;
    Node *biegaczOne = this->pocz->nast;
    Node *biegaczTwo = L.pocz->nast;
    bool isFirstNumberBigger = false;
    bool isSecondNumberBigger = false;
    bool isEqualAmountNumbers = false;

    if(this->ileJest == L.ileJest){
        isEqualAmountNumbers = true;
        bool isFindRightAnswer = false;
        for(int i = 1; i < this->ileJest; i++){
            if(biegaczOne->dane > biegaczTwo->dane){
                num.wstaw(this->pocz->znak, 1);
                isFirstNumberBigger = true;
                isFindRightAnswer = true;
                break;
            }
            else if(biegaczOne->dane < biegaczTwo->dane){
                num.wstaw(L.pocz->znak, 1);
                isSecondNumberBigger = true;
                isFindRightAnswer = true;
                break;
            }
            biegaczOne = biegaczOne->nast;
            biegaczTwo = biegaczTwo->nast;
        }
        if(isFindRightAnswer == false){
            num.wstaw(this->pocz->znak, 1);
        }
    }
    else{
        if(this->ileJest > L.ileJest){
            isFirstNumberBigger = true;
            num.wstaw(this->pocz->znak, 1);
        }
        else{
            isSecondNumberBigger = true;
            num.wstaw(L.pocz->znak, 1);
        }
    }

    biegaczOne = this->ogon;
    biegaczTwo = L.ogon;
    if(this->pocz->znak == L.pocz->znak){
        while(biegaczOne != this->pocz && biegaczTwo != L.pocz){
            int l = biegaczOne->dane + biegaczTwo->dane + 48;
            num.wstaw(l, 1);
            biegaczOne = biegaczOne->prev;
            biegaczTwo = biegaczTwo->prev;
        }
        if(isEqualAmountNumbers == false){
            if(isFirstNumberBigger == true){
                while(biegaczOne != this->pocz){
                    num.wstaw(biegaczOne->dane + 48, 1);
                    biegaczOne = biegaczOne->prev;
                }
            }
            else if(isSecondNumberBigger == true){
                while(biegaczTwo != L.pocz){
                    num.wstaw(biegaczTwo->dane + 48, 1);
                    biegaczTwo = biegaczTwo->prev;
                }
            }
        }
        Node *biegaczNum = num.ogon;
        while(biegaczNum != num.pocz){
            if(biegaczNum->dane > 9){
                biegaczNum->dane -= 10;
                if(biegaczNum->prev == num.pocz){
                    num.wstaw(1 + 48, 1);
                }
                else{
                    biegaczNum->prev->dane += 1;
                }
            }
            biegaczNum = biegaczNum->prev;
        }
    }
    else{
        while(biegaczOne != this->pocz && biegaczTwo != L.pocz){
            if(isFirstNumberBigger == true){
                int l = biegaczOne->dane - biegaczTwo->dane + 48;
                num.wstaw(l, 1);
                biegaczOne = biegaczOne->prev;
                biegaczTwo = biegaczTwo->prev;
            }
            else{
                int l = biegaczTwo->dane - biegaczOne->dane + 48;
                num.wstaw(l, 1);
                biegaczOne = biegaczOne->prev;
                biegaczTwo = biegaczTwo->prev;
            }
        }
        if(isEqualAmountNumbers == false){
            if(isFirstNumberBigger == true){
                while(biegaczOne != this->pocz){
                    num.wstaw(biegaczOne->dane + 48, 1);
                    biegaczOne = biegaczOne->prev;
                }
            }
            else if(isSecondNumberBigger == true){
                while(biegaczTwo != L.pocz){
                    num.wstaw(biegaczTwo->dane + 48, 1);
                    biegaczTwo = biegaczTwo->prev;
                }
            }
        }
        Node *biegaczNum = num.ogon;
        while(biegaczNum != num.pocz){
            if(biegaczNum->dane < 0){
                biegaczNum->dane += 10;
                biegaczNum->prev->dane -= 1;
            }
            biegaczNum = biegaczNum->prev;
        }
    }
    num.wypisz();

    return num;
}
Lista Lista::operator-(const Lista& L) const
{
    Lista num;
    Node *biegaczOne = this->pocz->nast;
    Node *biegaczTwo = L.pocz->nast;
    bool isFirstNumberBigger = false;
    bool isSecondNumberBigger = false;
    bool isEqualAmountNumbers = false;
    num.wstaw(this->pocz->znak, 1);

    if(this->ileJest == L.ileJest){
        isEqualAmountNumbers = true;
        for(int i = 1; i < this->ileJest; i++){
            if(biegaczOne->dane > biegaczTwo->dane){
                isFirstNumberBigger = true;
                break;
            }
            else if(biegaczOne->dane < biegaczTwo->dane){
                isSecondNumberBigger = true;
                break;
            }
            biegaczOne = biegaczOne->nast;
            biegaczTwo = biegaczTwo->nast;
        }
    }
    else{
        if(this->ileJest > L.ileJest){
            isFirstNumberBigger = true;
        }
        else{
            isSecondNumberBigger = true;
        }
    }

    if(this->pocz->znak == '-' && L.pocz->znak == '-'){
        if(isSecondNumberBigger == true){
            num.pocz->znak = '+';
        }
        else{
            num.pocz->znak = '-';
        }
    }
    else if(this->pocz->znak == '+' && L.pocz->znak == '+'){
        if(isFirstNumberBigger == true){
            num.pocz->znak = '+';
        }
        else{
            num.pocz->znak = '-';
        }
    }
    else if(this->pocz->znak == '+' && L.pocz->znak == '-'){
        num.pocz->znak = '+';
    }
    else if(this->pocz->znak == '-' && L.pocz->znak == '+'){
        num.pocz->znak = '-';
    }

    biegaczOne = this->ogon;
    biegaczTwo = L.ogon;
    if(this->pocz->znak != L.pocz->znak){
        while(biegaczOne != this->pocz && biegaczTwo != L.pocz){
            int l = biegaczOne->dane + biegaczTwo->dane + 48;
            num.wstaw(l, 1);
            biegaczOne = biegaczOne->prev;
            biegaczTwo = biegaczTwo->prev;
        }
        if(isEqualAmountNumbers == false){
            if(isFirstNumberBigger == true){
                while(biegaczOne != this->pocz){
                    num.wstaw(biegaczOne->dane + 48, 1);
                    biegaczOne = biegaczOne->prev;
                }
            }
            else if(isSecondNumberBigger == true){
                while(biegaczTwo != L.pocz){
                    num.wstaw(biegaczTwo->dane + 48, 1);
                    biegaczTwo = biegaczTwo->prev;
                }
            }
        }
        Node *biegaczNum = num.ogon;
        while(biegaczNum != num.pocz){
            if(biegaczNum->dane > 9){
                biegaczNum->dane -= 10;
                if(biegaczNum->prev == num.pocz){
                    num.wstaw(1 + 48, 1);
                }
                else{
                    biegaczNum->prev->dane += 1;
                }
            }
            biegaczNum = biegaczNum->prev;
        }
    }
    else{
        while(biegaczOne != this->pocz && biegaczTwo != L.pocz){
            if(isFirstNumberBigger == true){
                int l = biegaczOne->dane - biegaczTwo->dane + 48;
                num.wstaw(l, 1);
                biegaczOne = biegaczOne->prev;
                biegaczTwo = biegaczTwo->prev;
            }
            else{
                int l = biegaczTwo->dane - biegaczOne->dane + 48;
                num.wstaw(l, 1);
                biegaczOne = biegaczOne->prev;
                biegaczTwo = biegaczTwo->prev;
            }
        }
        if(isEqualAmountNumbers == false){
            if(isFirstNumberBigger == true){
                while(biegaczOne != this->pocz){
                    num.wstaw(biegaczOne->dane + 48, 1);
                    biegaczOne = biegaczOne->prev;
                }
            }
            else if(isSecondNumberBigger == true){
                while(biegaczTwo != L.pocz){
                    num.wstaw(biegaczTwo->dane + 48, 1);
                    biegaczTwo = biegaczTwo->prev;
                }
            }
        }
        Node *biegaczNum = num.ogon;
        while(biegaczNum != num.pocz){
            if(biegaczNum->dane < 0){
                biegaczNum->dane += 10;
                biegaczNum->prev->dane -= 1;
            }
            biegaczNum = biegaczNum->prev;
        }
    }
    num.wypisz();


    return L;
}
Lista Lista::operator*(const Lista& L) const
{
    Lista num;
    Node *biegaczOne = this->ogon;
    Node *biegaczTwo = L.ogon;

    if(this->pocz->znak == L.pocz->znak){
        num.wstaw('+', 1);
    }
    else{
        num.wstaw('-', 1);
    }

    Lista help[L.ileJest];
    for(int i = 1; i < L.ileJest; i++){
        help[i].wstaw(num.pocz->znak, 1);
        for(int d = 1; d < i; d++){
            help[i].wstaw(48, 1);
        }
        biegaczOne = this->ogon;
        while(biegaczOne != this->pocz){
            int l = biegaczOne->dane * biegaczTwo->dane + 48;
            help[i].wstaw(l, 1);
            biegaczOne = biegaczOne->prev;
        }
        Node *biegaczHelp = help[i].ogon;
        while(biegaczHelp != help[i].pocz){
            if(biegaczHelp->dane > 9){
                int des = biegaczHelp->dane / 10;
                int ed = biegaczHelp->dane % 10;
                if(biegaczHelp->prev != help[i].pocz){
                    biegaczHelp->dane = ed;
                    biegaczHelp->prev->dane += des;
                }
                else{
                    biegaczHelp->dane = ed;
                    help[i].wstaw(des + 48, 1);
                }
            }
            biegaczHelp = biegaczHelp->prev;
        }
        biegaczTwo = biegaczTwo->prev;
    }

    for(int i = 0; i < L.ileJest; i++){
        Node *biegNum = num.ogon;
        Node *biegHelp = help[i].ogon;

        if(i == 0){
            while(biegHelp != help[i].pocz){
                num.wstaw(biegHelp->dane + 48, 1);
                biegHelp = biegHelp->prev;
            }
        }
        else{
            while(biegHelp != help[i].pocz){
                if(biegNum == num.pocz){
                    num.wstaw(biegHelp->dane + 48, 1);
                    biegHelp = biegHelp->prev;
                }
                else{
                    biegNum->dane += biegHelp->dane;
                    biegNum = biegNum->prev;
                    biegHelp = biegHelp->prev;
                }
            }
        }
    }

    Node *biegaczHelp = num.ogon;
    while(biegaczHelp != num.pocz){
        if(biegaczHelp->dane > 9){
            int des = biegaczHelp->dane / 10;
            int ed = biegaczHelp->dane % 10;
            if(biegaczHelp->prev != num.pocz){
                biegaczHelp->dane = ed;
                biegaczHelp->prev->dane += des;
            }
            else{
                biegaczHelp->dane = ed;
                num.wstaw(des + 48, 1);
            }
        }
        biegaczHelp = biegaczHelp->prev;
    }

    num.wypisz();

    return num;
}
Lista Lista::operator/(const Lista& L) const
{

    return L;
}
bool Lista::operator==(const Lista& L) const
{
    Node *biegaczOne = this->pocz->nast;
    Node *biegaczTwo = L.pocz->nast;
    bool isTrue = false;

    if(this->ileJest == L.ileJest){
        while(biegaczOne != nullptr && biegaczTwo != nullptr){
            if(biegaczOne->dane != biegaczTwo->dane){
                isTrue = false;
                break;
            }
            biegaczOne = biegaczOne->nast;
            biegaczTwo = biegaczTwo->nast;
        }
    }
    return isTrue;
}
bool Lista::operator>(const Lista& L) const
{
    Node *biegaczOne = this->pocz->nast;
    Node *biegaczTwo = L.pocz->nast;
    bool isTrue;

    if(this->pocz->znak == '-' && L.pocz->znak == '+'){
        isTrue = false;
    }
    else if(this->pocz->znak == '+' && L.pocz->znak == '-'){
        isTrue = true;
    }
    else{
        if(this->ileJest > L.ileJest){
            isTrue = true;
        }
        else if(this->ileJest < L.ileJest){
            isTrue = false;
        }
        else{
            while(biegaczOne != nullptr){
                if(biegaczOne->dane < biegaczTwo->dane){
                    isTrue = false;
                    break;
                }
            }
            isTrue = true;
        }
    }
    return isTrue;
}
bool Lista::operator<(const Lista& L) const
{
    Node *biegaczOne = this->pocz->nast;
    Node *biegaczTwo = L.pocz->nast;
    bool isTrue;

    if(this->pocz->znak == '-' && L.pocz->znak == '+'){
        isTrue = true;
    }
    else if(this->pocz->znak == '+' && L.pocz->znak == '-'){
        isTrue = false;
    }
    else{
        if(this->ileJest < L.ileJest){
            isTrue = true;
        }
        else if(this->ileJest > L.ileJest){
            isTrue = false;
        }
        else{
            while(biegaczOne != nullptr){
                if(biegaczOne->dane > biegaczTwo->dane){
                    isTrue = false;
                    break;
                }
            }
            isTrue = true;
        }
    }
    return isTrue;
}
