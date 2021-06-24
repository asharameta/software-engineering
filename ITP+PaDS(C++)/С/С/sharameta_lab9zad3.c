//#include<stdio.h>
//
//int usunEnter(char* p);
//
//int main()
//{
//	char tekst[10], * c;
//	int count1=0, count2=0;
//	fputs("\nPodaj slowo: ", stdout);
//	fgets(tekst, sizeof(tekst), stdin);
//	for (c = tekst; *c; ++c)
//		*c = tolower(*c);
//	int n;
//	usunEnter(tekst);
//	n = strlen(tekst);
//	for (int i = 0; i < 1; ++i)
//	{
//		for (int j = i + 1; j < n; ++j)
//		{
//			if (tekst[j] == tekst[i]) {
//				count1++;
//				break;
//			}
//			else if (tekst[j] != tekst[i]) {
//				tekst[j] = '_';
//				count1++;
//			}
//		}
//	}
//	for (int k = n - 1; k > n - 2; --k)
//	{
//		for (int j = k - 1; j > 0; --j)
//		{
//			if (tekst[j] == tekst[k]) {
//				count2++;
//				break;
//			}
//			else if (tekst[j] != tekst[k]) {
//				tekst[j] = '_'; count2++;
//			}
//		}
//	}
//	for (int i = count1; i < count2+1; i++)
//	{
//		if(tekst[i+1]!=tekst[n - 1] && tekst[i + 1] != tekst[0])
//		tekst[i+1] = '_';
//	}
//	printf("%s", tekst);
//	return 0;
//}
//	int usunEnter(char* p)
//	{
//		int n = strlen(p);
//		if (p[n - 1] == '\n')
//			p[n - 1] = 0;
//		return p;
//	}
//
//
