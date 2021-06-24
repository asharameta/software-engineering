//#include <stdio.h>
//#include <string.h>
//int main()
//{
//
//    char tekst1[40] = "Anton Wiktor Kasia";
//    char tekst2[40];///mozna przetestowac dla char tekst2[40]="wiktor";
//    scanf_s("%s", tekst2);
//    if (strstr(tekst1, tekst2) != NULL)
//        printf("\"%s\" jest w \"%s\"\n", tekst2, tekst1);
//    else
//        printf("\"%s\" nie ma w \"%s\"\n", tekst2, tekst1);
//
//    char znak = 'o';///mozna przetestowac dla char znak='b';
//    if (strchr(tekst1, znak) != NULL)
//        printf("\'%c\' jest w \"%s\"\n", znak, tekst1);
//    else
//        printf("\'%c\' nie ma w \"%s\"\n", znak, tekst1);
//
//    ///CIEKAWE - obie funkcje zwracaja wskaznik na znak, ktory jest poczatkiem tablicy
//
//    char* wsk1 = strstr(tekst1, tekst2);///zapamietujemy to co zostalo znalezione
//    if (wsk1 != NULL)
//        printf("\n%s\n", wsk1);
//
//    char* wsk2 = strchr(tekst1, znak);///zapamietujemy to co zostalo znalezione
//    if (wsk2 != NULL)
//        printf("\n%s\n", wsk2);
//
//    return 0;
//}