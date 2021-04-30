#include <stdio.h>
#include <conio.h>

main()
{
	int bosluk=2,ilk=7,son=1,ilk2=3,son2=9;
	
	for(int i=1;i<=6;i++)
	{
		for(int a=ilk;son<=a;a--)
			printf("%d",a);
		for(int b=0;b<bosluk;b++)
			printf(" ");
		for(int c=ilk2;c<=son2;c++)
			printf("%d",c);
		printf("\n");
		
		bosluk +=2;
		ilk--;
		ilk2++;
		
	}
	getch();
}
