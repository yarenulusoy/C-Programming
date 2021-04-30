#include <stdio.h>
#include <conio.h>

main()
{
	int bosluk=1,ilk=1,son=5;
	
	for(int i=0;i<5;i++)
	{
		for(int a=0;a<bosluk;a++)	
			printf(" ");
		for(int b=ilk;b<=son;b++)
			printf("%d",b);
		printf("\n");
		son--;
		bosluk++;
	}
	
	ilk=5;
	bosluk=5;
	for(int i=0;i<5;i++)
	{
		for(int a=0;a<bosluk;a++)	
			printf(" ");
		for(int b=ilk;b<=5;b++)
			printf("%d",b);
		printf("\n");
		bosluk--;
		ilk--;
	}
	getch();
}
