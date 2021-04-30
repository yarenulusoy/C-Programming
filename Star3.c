#include <stdio.h>
#include <conio.h>

main()
{
	int adet=9,bosluk=1;
	
	for(int i=0;i<=5;i++)
	{
		for(int b=0;b<bosluk;b++)
			printf(" ");
		for(int a=0;a<adet;a++)
			printf("*");
		printf("\n");
		
		adet-=2;
		bosluk+=2;
	}
	getch();
}
