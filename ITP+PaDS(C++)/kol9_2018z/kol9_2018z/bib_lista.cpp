#include <iostream>
#include <stdexcept>
#include "bib_lista.h"
using namespace std;



void Sznur::clear() // Деструктор по схеме цибульки, очень жизнь упрощает, можно вызывать деструктор когда захочешь
{
    while(head != nullptr)
    {
        Node* kiler = head;
        cout << "usuwam element " << kiler->value << endl;
        head = head->next;
        delete kiler;
    }
    cout << "Sznur zniszczony" << endl;
}


Sznur::~Sznur()
{
    clear(); // Вызов
}

void Sznur::wstaw(int A)
{
    Node* pred = nullptr;
    Node* succ = head;
    while(succ != nullptr && succ->value > A)
    {
        pred = succ;
        succ = succ->next;
    }
    Node* creator = new Node(A, succ);
    if(pred != nullptr)
    {
        pred->next = creator;
    }
    else
    {
        head = creator;
    }
    counter++;
}


void Sznur::wypisz()
{
    if (counter == 0)
        return;
    Node* walker = head;
    while(walker != nullptr)
    {
        cout << walker->value << "->";
        walker = walker->next;
    }
    cout << "|" << endl;
}


void Sznur::size()
{
    cout << "Size: " << counter << endl;
}




/*void Sznur::usunCiagi(int S, int K)
{
    int Sum = S;
    int PassK = K;
    int CiagSum = 0;
    int CiagCounter = 0;
    Node* walker = head;
    while(walker != nullptr)
    {

                  CiagSum = CiagSum + walker->value;
                  CiagCounter++;

                   if(Sum <= CiagSum-walker->value && head == walker)
                     {
                         Node* killer = head->next;
                         for(int i = 0; i<CiagCounter; i++)
                            {
                               cout << "Element zniszczony: " << killer->value << endl;
                               head->next = killer->next;
                               delete killer;
                               counter=counter - CiagCounter;
                            }

                          while(PassK!=0)
                          {
                              cout << "Nie usuwam: " <<  walker->value <<endl;
                              walker = walker->next;
                              CiagSum = 0;
                              PassK--;
                          }
                        cout << "Size: " << size() << endl;
                     }
                     else if(Sum <= CiagSum-walker->value && head != walker)
                     {
                         Node* killer = walker->next;
                         for(int i = 0; i<CiagCounter; i++)
                            {
                               cout << "Element zniszczony: " << killer->value << endl;
                               walker->next = killer->next;
                               delete killer;
                               counter=counter - CiagCounter;

                            }

                           while(PassK!=0)
                          {
                              cout << "Nie usuwam: " <<  walker->value <<endl;

                              walker = walker->next;
                              PassK--;
                              CiagSum = 0;
                          }

                        cout << "Size: " << size() << endl;
                     }
                        CiagCounter = 0;
                        PassK = K;
    }

    cout << "CiagCounter: " << CiagCounter << endl;
}*/




/*funkcję usunCiagi usuwającą ze sznura ciągi sąsiednich elementów sznura w następujący
sposób: usuwamy najdłuższy możliwy ciągły fragment taki, że suma jego wartości nie przekracza
S (być może pusty), omijamy kolejnych K elementów, usuwamy najdłuższy możliwy ciągły
fragment o sumie nieprzekraczającej S, omijamy K elementów, itd. */


void Sznur::usunCiagi(int S, int K)
{
    int sum = 0;
    Node* succ = head;
    Node* pred = succ;
    for(int i = 0; i < Ciagcounter; i++) // CiagCounter = 0(1 раз) // CiagCounter = 2(succ = head)
    {

        succ = succ->next; // succ = 7 после 1-го круга succ = 5
        if(i>0)
        pred = pred->next; // после 1-го круга pred = 6
    }
    sum = sum + succ->value; // 0+7=7 // после 1-го круга 0+5=5
    while(sum<=S) // 7 < 10
    {
        if(succ!=nullptr)
        {
            pred->next = succ->next;
            Node* killer = succ;
            succ = succ->next;
            delete killer;
            counter--;
            if(Ciagcounter == 0)
                head = succ;
            if(succ == nullptr)
                return;
            sum = sum + succ->value;
        }
        else
        {
            head = succ;
            return;
        }
    }
        for(int i = 0; i < K; i++)
        {
            if(succ == nullptr || succ->next == nullptr)
                return;
            succ = succ->next;
            Ciagcounter++; // CiagCounter + 2 = 2
        }
        if(Ciagcounter==0)
            head = succ;

        usunCiagi(S,K);
}







