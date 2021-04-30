#include <stdio.h>
#include <conio.h>

main()
{
	int adet=9,bosluk=1;
	for(int i=0;i<5;i++)
	{
		for(int a=0;a<bosluk;a++)
			printf(" ");
		for(int b=0;b<adet;b++)
			printf("*");
		printf("\n");
		adet-=2;
		bosluk++;
	}
	
	adet=1;
	bosluk=5;
	for(int i=0;i<5;i++)
	{
		for(int a=0;a<bosluk;a++)
			printf(" ");
		for(int b=0;b<adet;b++)
			printf("*");
		printf("\n");
		adet+=2;
		bosluk--;
	}
	getch();
}

