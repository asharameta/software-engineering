#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include<ctime>
#include <algorithm>

using namespace std;

struct node
{
    int key=0;

    int counter = 0;

    node* left = nullptr;
    node* right = nullptr;
};



node* Add(node*& r, int s)
{
    if (r == nullptr)
    {
        r = new node;
        r->key = s;
        r->left = r->right = nullptr;
        r->counter = 1;
        return r;
    }
    if (s == r->key)
    {
        r->counter++;
        return r;
    }
    if (s > r->key) return Add(r->right, s);
    return Add(r->left, s);
}




int WysokoscDrzewa(node*& r)
{
    if (!r) return 0;
    int left = 1 + WysokoscDrzewa(r->left);
    int right = 1 + WysokoscDrzewa(r->right);
    if (left > right)
        return left;
    return right;
}



int main()
{
    srand(time(NULL));

    node* root = nullptr;
    node* root1 = nullptr;

    int x = 0;
    for (int i = 0; i < 5000; i++)
    {
        x = 1+rand() % 4;
        //cout <<"x = "<< x << endl;
        Add(root, x);
    }
    int y = 0;
    for (int i = 0; i < 5000; i++)
    {
        y = rand();
        //cout <<"x = "<< x << endl;
        Add(root1, y);
    }

    cout << endl;
    cout << "Wysokosc drzewa z zakresu{1 - 4}: " << WysokoscDrzewa(root) << endl;
    cout << "Wysokosc drzewa losowo: " << WysokoscDrzewa(root1) << endl;
    return 0;
}
