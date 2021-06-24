//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define N 5
//
//int main()
//{
//	int a[N];
//	int b[N];
//	int repeat = 0;
//	srand(time(NULL));
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = rand() % 10;
//	}
//	puts("Twoja tablica A: ");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	for (int j = 0; j < N; j++)
//	{
//		for (int i = j+1; i < N; i++)
//		{
//			if (a[j]==a[i])
//			{
//				repeat = a[i];
//			}
//		}
//	}
//	for (int j = 0; j < N; j++)
//	{
//		if (a[j]!=repeat)
//		{
//			b[j] = a[j];
//		}
//	}
//	puts(" ");
//	puts("Twoja tablica B: ");
//	for (int j = 0; j < N; j++)
//	{
//		printf("%d ", b[j]);
//	}
//
//}
//
