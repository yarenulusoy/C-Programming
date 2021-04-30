#include<stdio.h> // 1den 100 e kadar 10a 10luk matris
#include<conio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int matris[10][10];
	int sayi=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{ matris[i][j]=sayi;
	      sayi++;
     	}    
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	getch();
}
