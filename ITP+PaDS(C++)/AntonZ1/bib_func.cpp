#include"bib.h"
void sznur::print(int a)
{
    box* wolker=new box(a);
    if (head == nullptr)
        head=wolker;
    else if(a>= head->value)
    {
        wolker->next=head;
        head=wolker;
    }
    else
    {
        box* zaszuk=nullptr;
        box* szuk=head;
        //  cout<<"jestem tu"<<endl;
        while(szuk!=nullptr && szuk->value>a)
        {
            zaszuk = szuk;
            szuk = szuk->next;
        }
        zaszuk->next=wolker;
        wolker->next=szuk;
    }
    counter++;
}

void sznur::wypisz()
{
    box* wolker = head;
    while(wolker != nullptr)
    {
        cout << wolker->value <<"->";
        wolker=wolker->next;
    }

}

void sznur::usun(int a)
{
    if(counter<3)
        return;
    box* p1 = head;
    box* p2 = p1->next;
    box* p3 = p2->next;
    box* przedPary=nullptr;
    while(p3 != nullptr)
    {
        if(p2->value<a)
        {
            if(p1 == head)
                head=p2;
            else
                przedPary->next=p2;
            //    cout<<"Delete(1 element): "<<p1->value<<endl;
            delete p1;
            counter--;

            przedPary=p3;
            p1=p3->next;
            if(p1 != nullptr)
                p2=p1->next;
            else
                p2 = nullptr;

            if (p2 != nullptr)
                p3=p2->next;
            else
                p3=nullptr;
        }
        else
        {
            p1->next=p3->next;
            delete p2,p3;
            counter=counter-2;
            przedPary=p1;

            p1=p1->next;
            if(p1 != nullptr)
                p2=p1->next;
            else
                p2 = nullptr;

            if (p2 != nullptr)
                p3=p2->next;
            else
                p3=nullptr;

        }

    }
}
void sznur::przenies()
{
    if(counter<3)
        return;
    box* begin1 = nullptr;
    box* end1 = nullptr;
    box* begin2 = nullptr;
    box* end2 = nullptr;
    box* Popary=nullptr;
    box* przedpary = nullptr; 
    box* p1=head;
    box* p2=head->next;
    while(p1!=nullptr && p2!=nullptr)
    {
        if(p1->value != p2 -> value )
        {
            przedpary = p1;
            przedpary->next = p2->next;

            Popary = p2->next;


            p2->next = begin2;
            begin2 = p2;

            p1 = Popary;
            if (p1 != nullptr)
                p2 = p1->next;
            else
                p2 = nullptr;
        }
        else
        {
            //////////////////////
            if (p1 == head)
            {
                head = p2->next;
                przedpary = head;
            }
            else
                przedpary->next = p2->next;


            Popary = p2->next;

            p2->next = nullptr;
            if (begin1 == nullptr)
                begin1 = p1;
            else {
                end1->next = p1;

            }
            end1 = p1;
            end1 = end1->next;

            p1 = Popary;
            if (p1 != nullptr)
                p2 = p1->next;
            else
                p2 = nullptr;
        }

    }
    


    if (begin1 != nullptr)
    {
        box* wolker;
        end1->next = head;
        wolker = begin1;
        cout << endl;
        box* zaszuk = nullptr;
        box* szuk = begin1;
        while (szuk != nullptr)
        {
            zaszuk = szuk;
            szuk = szuk->next;
        }
        zaszuk->next = begin2;
        head = begin1;
    }
    else
    {
        box* zaszuk = nullptr;
        box* szuk = head;
        while (szuk != nullptr)
        {
            zaszuk = szuk;
            szuk = szuk->next;
        }
        zaszuk->next = begin2;
    }

    cout << endl;
    cout << "begin1 = ";
    while (begin1 != nullptr)
    {
        cout << begin1->value << "->";
        begin1 = begin1->next;
    }
    cout << "|" << endl;
    cout << "begin2 = ";
    while (begin2 != nullptr)
    {
        cout << begin2->value << "->";
        begin2 = begin2->next;
    }
    cout << "|" << endl;
}


/*void sznur::przenies()
{
    if(counter<3)
        return;

    box* przedpary=nullptr;
    box* p2=head;
    box* p1=head->next;
    box* body=nullptr;
    box* tail_body=nullptr;
    box* ogon=nullptr;
    int sprw = 0;
    while(p1!=nullptr && p2!=nullptr)
    {
        if(p1->value != p2->value)
        {
            box* body1=new box(p2->value);
            if(body == nullptr)
                body=body1;
            else
            tail_body->next=body1;
            tail_body=body1;
            box* ogon1 = new box(p1->value, ogon);
            ogon=ogon1;
            if(p2==head)
                head=p1->next;
            else
            {
                przedpary->next=p1->next;
            }
            p2=p1->next;
            if(p2 != nullptr)
                p1=p2->next;
            else
                p1=nullptr;


        }
        else
        {
            sprw = 1;
            przedpary=p1;
            p2=p1->next;
        if(p2 != nullptr)
                p1=p2->next;
          else
                p1=nullptr;
        }
    }
    if (sprw == 1)
    {
        //9,9,9,8,8,6,6,6,6,5,5,5,5,2,2,1,1 dostaniemy wynik 9,9,6,6,5,5,9,8,6,5,2,1,1,2,5,6,8,
        box* wol = nullptr;
        box* wolker = head;
        while (wolker != nullptr)
        {
            wol = wolker;
            wolker = wolker->next;
        }
        wol->next = body;

        wol = nullptr;
        wolker = head;
        while (wolker != nullptr)
        {
            wol = wolker;
            wolker = wolker->next;
        }
        wol->next = ogon;
    }

    else
    {
      // dla  9, 8, 7, 5, 4, 3, 2     uzyska postać 9, 7, 4, 2, 3, 5, 8,
        if (counter % 2 == 0) {
            head = body;
            box* wol = nullptr;
            box* wolker = head;
            while (wolker != nullptr)
            {
                wol = wolker;
                wolker = wolker->next;
            }
            wol->next = ogon;
        }
        else
        {
                box* wol1 = nullptr;
                box* wolker1 = body;
                while (wolker1 != nullptr)
                {
                    wol1 = wolker1;
                    wolker1 = wolker1->next;
                }
                cout << "osotatni element: " << wol1->value << endl;
                wol1->next = head;
            head = body;
            box* wol = nullptr;
            box* wolker = head;
            while (wolker != nullptr)
            {
                wol = wolker;
                wolker = wolker->next;
            }
            wol->next = ogon;
        }
    }
}
*/
