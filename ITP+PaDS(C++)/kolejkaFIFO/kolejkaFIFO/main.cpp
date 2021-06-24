#include"list_H.h"


int main()
{
    queue s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.print(); //1 2 3 4 5
    cout << "Size: " << s1.counter() << endl; //5
    cout << "Pop: " << s1.pop() << endl; //1
    s1.print(); //2 3 4 5
    cout << "Size: " << s1.counter() << endl; //4

    queue s2 = s1;
    cout << endl;
    s2.print(); //2 3 4 5
    cout << "Size: " << s2.counter() << endl; //4
    s2.push(1);
    s2.print(); //2 3 4 5 1
    cout << "Size: " << s2.counter() << endl; //5

    s1 = s2;
    cout << endl;
    cout << "Size: " << s1.counter() << endl; //5

    cout << "Pop: " << s1.pop() << endl; //2
    s1.print(); //3 4 5 1
    s2.print(); //2 3 4 5 1

    s2.clear();
    s1.print(); //3 4 5 1
    s2.print(); //empty

    return 0;
}