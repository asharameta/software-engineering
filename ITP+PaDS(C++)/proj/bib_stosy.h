#ifndef ZNAM_BIB_STOSY_H
#define ZNAM_BIB_STOSY_H

struct Stos{

private:
    int max_rozmiar;
    int * dane;
    int ileJest;
public:
    Stos(int maxR=10);
    ~Stos();


};

#endif // ZNAM_BIB_STOSY_H
