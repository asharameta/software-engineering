#include"Header.h"
void sznur::wstaw(int a)
{
	box* creator = new box(a); 
	if (head == nullptr)
		head = creator;
	else
	{
		tail->next = creator;
	}
	tail = creator;
	counter++; 
}

void sznur::wypisz()
{
	if (head == nullptr) return; 
	box* wolker = head; 
	while (wolker != nullptr)
	{
		cout << wolker->value << "->"; 
		wolker = wolker->next; 
	}
	cout << endl; 
}

void sznur::usun(int m)
{
	// (przykład: dla M=2 sznur 4, 7,5,1, 6, 6,7,1,4,2,9,1,1
	// uzyska postać 1, 1, 2, 1, 1, a dla M = 3 ten sam sznur zostanie zredukowany do postaci 4, 1, 1, 4, 2, 1, 1).

	box* wolker = head; 
	int licz = 0, licz2 = 0;
	float sum = 0;
	
	while (wolker != nullptr)
	{
		licz++;
			if (licz % m == 0)
			{
				licz2++; 
				cout << "sum += liczba: " << wolker->value; 
				sum += wolker->value;
				cout << endl;
		     }
		wolker = wolker->next; 
     }

	sum = sum / licz2; 
	cout << "srednia: " << sum << endl; 
	//-------------------usuwanie---------------------
	box* p1 = head;
	box* przedpary = nullptr; 
	while (p1 != nullptr)
	{
		bool sprw = true;
		if (p1->value > sum)
		{
			if (p1 == head)
			{
				head = p1->next;
				przedpary = head; 
				sprw = false; 
			}
			else
				przedpary->next = p1->next; 
		//	cout << " delete: " << p1->value << endl; 
			delete p1; 
			p1 = przedpary; 
		}

		przedpary = p1; 
		if(sprw == true)
			p1 = p1->next;
; 
	}

}

void sznur::przeniesTrojki()
{
	if (counter < 5) return; 
   box*	przedpary = nullptr;
   box* popary = nullptr; 
   box* p1 = head; 
   box* p2 = p1->next; 
   box* p3 = p2->next;
   box* begin1 = nullptr;
   box* end1 = nullptr;

   //Przykład: sznur 3, 6, 6, 4, 7, 5, 7, 3, 2, 9, 7, 7, 4, 2 ma zostać przekształcony do postaci 3, 6, 6, 9, 7, 7, 4, 2, 5, 7, 4, 2, 3, 7
   while (p3 != nullptr)
   {
	   if (p1->value != p2->value && p2->value != p3->value)
	   {
		   if (p1 == head)
		   {
			   head = p3->next; 
			   przedpary = head;
		   }
		   else
		   {
			   przedpary->next = p3->next; 
		   }

		   //-----begin1-------
		    p1->next = nullptr;  // Jak mozno zrobic inaczej? 
		    p2->next = nullptr;
		   popary = p3->next; 
		   p3->next =nullptr;
		   if (begin1 == nullptr)
			   begin1 = p3;
		   else
			   end1->next = p3; 
		   end1 = p3; 

		   end1->next = p2; 
		   end1 = p2; 

		   end1->next = p1; 
		   end1 = p1; 
          //-------------------

		   p1 = popary; 
		   if (p1 != nullptr)
			   p2 = p1->next;
		   else
			   p2 = nullptr;
		   if (p2 != nullptr)
			   p3 = p2->next;
		   else
			   p3 = nullptr; 
	   }
	   else
	   {
		   przedpary = p3; 
		   p1 = p3->next; 
		   if (p1 != nullptr)
			   p2 = p1->next;
		   else
			   p2 = nullptr;
		   if (p2 != nullptr)
			   p3 = p2->next;
		   else
			   p3 = nullptr;
	   }
   }


   //---------------------sprawdzenia--------------------
 /*  box* wolker = begin1; 
   while (wolker != nullptr)
   {
	   cout << "->" << wolker->value;
	   wolker = wolker->next; 
   }
   cout << endl; */

  //---------------swiazek-------------------------
   box* szuk = head;
   box* zaszuk = nullptr;
   while (szuk != nullptr)
   {
	   zaszuk = szuk; 
	   szuk = szuk->next; 
   }
   //zaszuk->next = begin1; 

   
}