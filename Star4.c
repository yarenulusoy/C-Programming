#include <stdio.h>
#include <conio.h>

main()
{
	int bosluk=17,adet=1;
	
	for(int i=0;i<5;i++)
	{
		for(int a=0;a<adet;a++)
			printf("*");
		for(int b=0;b<bosluk;b++)
			printf(" ");
		for(int c=0;c<adet;c++)
			printf("*");
		printf("\n");
		adet+=2;
		bosluk-=4;
	}
	getch();
}
