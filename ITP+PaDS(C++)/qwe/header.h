#ifndef TEST_DWA_H
#define TEST_DWA_H
#include<string>

struct stos
{
    private:
    int max_rozmiar;
    int * dane;
    int ileJest;
    public:
        stos(int maxR = 10);
        ~stos();
};

#endif // !TEST_DWA_H
