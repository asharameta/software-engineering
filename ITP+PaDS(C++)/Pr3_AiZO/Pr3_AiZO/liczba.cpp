#include"liczba.h"


void Lista::push(char N, int arg)
{
    Node* add;
    try { add = new Node; }
    catch (exception& e)
    {
        cout << e.what() << endl;
        throw invalid_argument("No memory.");
    }

    if (arg == 0) {
        if (size == 0)
        {
            if (N != '+' && N != '-')
            {
                throw invalid_argument("Wrong sign.");
            }
            add->sign = N;
            add->next = nullptr;
            add->prev = tail;
            tail = add;
            if (add->prev) add->prev->next = add;
            else head = add;
        }
        else
        {
            if (!isdigit(N))
            {
                throw invalid_argument("Wrong sign.");
            }
            add->value = N - 48;
            add->next = nullptr;
            add->prev = tail;
            tail = add;
            if (add->prev) add->prev->next = add;
            else head = add;
        }
        size++;
    }
    else if (arg == 1) {
        if (size == 0) {
            add->sign = N;
            tail = add;
            head = add;
        }
        else if (size == 1) {
            add->value = N - 48;
            head->next = add;
            add->prev = head;
            tail = add;
            tail->next = nullptr;
        }
        else {
            add->value = N - 48;
            head->next->prev = add;
            add->next = head->next;
            add->prev = head;
            head->next = add;
        }
        size++;
    }
}

void Lista::print()
{
	if (size == 0)
	{
		cout << "empty->|" << endl;
		return;
	}
	Node* show = head;
    cout <<show->sign<<" > ";
    show = show->next;
	while (show)
	{
		cout << show->value << " > ";
		show = show->next;
	}
	cout << "|" << endl;
}

Lista Lista::operator+(const Lista& L)
{
    Lista num;
    Node* curr1 = this->head->next;
    Node* curr2 = L.head->next;
    bool isFirstNumberBigger = false;
    bool isSecondNumberBigger = false;
    bool isEqualAmountNumbers = false;

    if (this->size == L.size) {
        isEqualAmountNumbers = true;
        bool isFindRightAnswer = false;
        for (int i = 1; i < this->size; i++) {
            if (curr1->value > curr2->value) {
                num.push(this->head->sign, 1);
                isFirstNumberBigger = true;
                isFindRightAnswer = true;
                break;
            }
            else if (curr1->value < curr2->value) {
                num.push(L.head->sign, 1);
                isSecondNumberBigger = true;
                isFindRightAnswer = true;
                break;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        if (isFindRightAnswer == false) {
            num.push(this->head->sign, 1);
        }
    }
    else {
        if (this->size > L.size) {
            isFirstNumberBigger = true;
            num.push(this->head->sign, 1);
        }
        else {
            isSecondNumberBigger = true;
            num.push(L.head->sign, 1);
        }
    }

    curr1 = this->tail;
    curr2 = L.tail;
    if (this->head->sign == L.head->sign) {
        while (curr1 != this->head && curr2 != L.head) {
            int l = curr1->value + curr2->value + 48;
            num.push(l, 1);
            curr1 = curr1->prev;
            curr2 = curr2->prev;
        }
        if (isEqualAmountNumbers == false) {
            if (isFirstNumberBigger == true) {
                while (curr1 != this->head) {
                    num.push(curr1->value + 48, 1);
                    curr1 = curr1->prev;
                }
            }
            else if (isSecondNumberBigger == true) {
                while (curr2 != L.head) {
                    num.push(curr2->value + 48, 1);
                   curr2 = curr2->prev;
                }
            }
        }
        Node* CurrNum = num.tail;
        while (CurrNum != num.head) {
            if (CurrNum->value > 9) {
                CurrNum->value -= 10;
                if (CurrNum->prev == num.head) {
                    num.push(1 + 48, 1);
                }
                else {
                    CurrNum->prev->value += 1;
                }
            }
            CurrNum = CurrNum->prev;
        }
    }
    else {
        while (curr1 != this->head && curr2 != L.head) {
            if (isFirstNumberBigger == true) {
                int l = curr1->value - curr2->value + 48;
                num.push(l, 1);
                curr1 = curr1->prev;
                curr2 = curr2->prev;
            }
            else {
                int l = curr2->value - curr1->value + 48;
                num.push(l, 1);
                curr1 = curr1->prev;
                curr2 = curr2->prev;
            }
        }
        if (isEqualAmountNumbers == false) {
            if (isFirstNumberBigger == true) {
                while (curr1 != this->head) {
                    num.push(curr1->value + 48, 1);
                    curr1 = curr1->prev;
                }
            }
            else if (isSecondNumberBigger == true) {
                while (curr2 != L.head) {
                    num.push(curr2->value + 48, 1);
                    curr2 = curr2->prev;
                }
            }
        }
        Node* CurrNum = num.tail;
        while (CurrNum != num.head) {
            if (CurrNum->value < 0) {
                CurrNum->value += 10;
                CurrNum->prev->value -= 1;
            }
            CurrNum = CurrNum->prev;
        }
    }
    num.print();

    return num;
}

Lista Lista::operator*(const Lista& L)
{
    Lista num;
    Node* curr1 = this->tail;
    Node* curr2 = L.tail;

    if (this->head->sign == L.head->sign) {
        num.push('+', 1);
    }
    else {
        num.push('-', 1);
    }

    Lista* help=new Lista[L.size];
    for (int i = 1; i < L.size; i++) {
        help[i].push(num.head->sign, 1);
        for (int d = 1; d < i; d++) {
            help[i].push(48, 1);
        }
        curr1 = this->tail;
        while (curr1 != this->head) {
            int l = curr1->value * curr2->value + 48;
            help[i].push(l, 1);
            curr1 = curr1->prev;
        }
        Node* currHelp = help[i].tail;
        while (currHelp != help[i].head) {
            if (currHelp->value > 9) {
                int des = currHelp->value / 10;
                int ed = currHelp->value % 10;
                if (currHelp->prev != help[i].head) {
                    currHelp->value = ed;
                    currHelp->prev->value += des;
                }
                else {
                    currHelp->value = ed;
                    help[i].push(des + 48, 1);
                }
            }
            currHelp = currHelp->prev;
        }
        curr2 = curr2->prev;
    }

    for (int i = 0; i < L.size; i++) {
        Node* currNum = num.tail;
        Node* curr2Help = help[i].tail;

        if (i == 0) {
            while (curr2Help != help[i].head) {
                num.push(curr2Help->value + 48, 1);
                curr2Help = curr2Help->prev;
            }
        }
        else {
            while (curr2Help != help[i].head) {
                if (currNum == num.head) {
                    num.push(curr2Help->value + 48, 1);
                    curr2Help = curr2Help->prev;
                }
                else {
                    currNum->value += curr2Help->value;
                    currNum = currNum->prev;
                    curr2Help = curr2Help->prev;
                }
            }
        }
    }

    Node* cHelp = num.tail;
    while (cHelp != num.head) {
        if (cHelp->value > 9) {
            int des = cHelp->value / 10;
            int ed = cHelp->value % 10;
            if (cHelp->prev != num.head) {
                cHelp->value = ed;
                cHelp->prev->value += des;
            }
            else {
                cHelp->value = ed;
                num.push(des + 48, 1);
            }
        }
        cHelp = cHelp->prev;
    }

    num.print();

    return num;
}

Lista Lista::operator-(const Lista& L)
{
    Lista num;
    Node* curr1 = this->head->next;
    Node* curr2 = L.head->next;
    bool isFirstNumberBigger = false;
    bool isSecondNumberBigger = false;
    bool isEqualAmountNumbers = false;
    num.push(this->head->sign, 1);

    if (this->size == L.size) {
        isEqualAmountNumbers = true;
        for (int i = 1; i < this->size; i++) {
            if (curr1->value > curr2->value) {
                isFirstNumberBigger = true;
                break;
            }
            else if (curr1->value < curr2->value) {
                isSecondNumberBigger = true;
                break;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    else {
        if (this->size > L.size) {
            isFirstNumberBigger = true;
        }
        else {
            isSecondNumberBigger = true;
        }
    }

    if (this->head->sign == '-' && L.head->sign == '-') {
        if (isSecondNumberBigger == true) {
            num.head->sign = '+';
        }
        else {
            num.head->sign = '-';
        }
    }
    else if (this->head->sign == '+' && L.head->sign == '+') {
        if (isFirstNumberBigger == true) {
            num.head->sign = '+';
        }
        else {
            num.head->sign = '-';
        }
    }
    else if (this->head->sign == '+' && L.head->sign == '-') {
        num.head->sign = '+';
    }
    else if (this->head->sign == '-' && L.head->sign == '+') {
        num.head->sign = '-';
    }

    curr1 = this->tail;
    curr2 = L.tail;
    if (this->head->sign != L.head->sign) {
        while (curr1 != this->head && curr2 != L.head) {
            int l = curr1->value + curr2->value + 48;
            num.push(l, 1);
            curr1 = curr1->prev;
            curr2 = curr2->prev;
        }
        if (isEqualAmountNumbers == false) {
            if (isFirstNumberBigger == true) {
                while (curr1 != this->head) {
                    num.push(curr1->value + 48, 1);
                    curr1 = curr1->prev;
                }
            }
            else if (isSecondNumberBigger == true) {
                while (curr2 != L.head) {
                    num.push(curr2->value + 48, 1);
                    curr2 = curr2->prev;
                }
            }
        }
        Node* curr1Num = num.tail;
        while (curr1Num != num.head) {
            if (curr1Num->value > 9) {
                curr1Num->value -= 10;
                if (curr1Num->prev == num.head) {
                    num.push(1 + 48, 1);
                }
                else {
                    curr1Num->prev->value += 1;
                }
            }
            curr1Num = curr1Num->prev;
        }
    }
    else {
        while (curr1 != this->head && curr2 != L.head) {
            if (isFirstNumberBigger == true) {
                int l = curr1->value - curr2->value + 48;
                num.push(l, 1);
                curr1 = curr1->prev;
                curr2 = curr2->prev;
            }
            else {
                int l = curr2->value - curr1->value + 48;
                num.push(l, 1);
                curr1 = curr1->prev;
                curr2 = curr2->prev;
            }
        }
        if (isEqualAmountNumbers == false) {
            if (isFirstNumberBigger == true) {
                while (curr1 != this->head) {
                    num.push(curr1->value + 48, 1);
                    curr1 = curr1->prev;
                }
            }
            else if (isSecondNumberBigger == true) {
                while (curr2 != L.head) {
                    num.push(curr2->value + 48, 1);
                    curr2 = curr2->prev;
                }
            }
        }
        Node* Curr2Num = num.tail;
        while (Curr2Num != num.head) {
            if (Curr2Num->value < 0) {
                Curr2Num->value += 10;
                Curr2Num->prev->value -= 1;
            }
            Curr2Num = Curr2Num->prev;
        }
    }
    num.print();


    return L;
}



