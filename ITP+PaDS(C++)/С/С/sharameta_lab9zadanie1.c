//#include<stdio.h>
//
//
//struct Student
//{
//	char imie[20];
//	char nazwisko[40];
//	int wiek;
//	int rok_stud; 
//	float sr_ocen;
//};
//
//typedef struct Student Student;
//void wczytaj(Student *pod);
//void wypisz(const Student* pod);
////int sr_studentow();
////int Najstarszy_student();
//
//int main()
//{
//	Student s1;
//		wczytaj(&s1);
//		wypisz(&s1);
//	Student s2;
//		wczytaj(&s2);
//		wypisz(&s2);
//	Student s3;
//		wczytaj(&s3);
//		wypisz(&s3);
//	return 0;
//}
//
//void wczytaj(Student* pod)
//{
//	fputs("\nPodaj imie: ", stdout);
//	fgets(pod->imie, sizeof(pod->imie), stdin);
//	fputs("\nPodaj nazwisko: ", stdout);
//	fgets(pod->nazwisko, sizeof(pod->nazwisko), stdin);
//	puts("\nPodaj wiek: ");
//	scanf_s("%d", &pod->wiek);
//	puts("\nPodaj rok studiow: ");
//	scanf_s("%d", &pod->rok_stud);
//	puts("\nPodaj srednia ocen: ");
//	scanf_s("%f", &pod->sr_ocen);
//
//}
//void wypisz(const Student* pod)
//{
//	printf("\n----------------------------------------------------\n");
//	printf("Imie: %sNazwisko: %s", pod->imie, pod->nazwisko);
//	printf("Wiek: %d\nrok studiow: %d\nsrednia ocen: %f", pod->wiek, pod->rok_stud, pod->sr_ocen);
//	printf("\n----------------------------------------------------\n");
//}
////int sr_studentow()
////{
////
////}
////int Najstarszy_student()
////{
////
////}