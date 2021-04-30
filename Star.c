#include <stdio.h>
#include <conio.h>

main()
{
	int adet=1;
	for (int i=0;i<=7;i++)
	{
		for(int a=0;a<adet;a++)
			printf("*");
		printf("\n");
		adet++;
	}
	getch();
}
