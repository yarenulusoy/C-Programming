#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int bosluk=1,ilk=5,son=1,ilk2=1,son2=5;
	
	for(int i=1;i<=5;i++)
	{
		for(int a=0;a<bosluk;a++)
			printf(" ");
		for(int b=ilk;son<=b;b--)
			printf("%d",b);
		for(int c=ilk2;c<=son2;c++)
			printf("%d",c);
		printf("\n");
		ilk--;
		son2--;
		bosluk++;
	}
	getch();
}
