#include <stdio.h>
#include <conio.h>

main()
{
	int ilk=1,son=5;
	
	for(int i=0;i<5;i++)
	{
		for(int a=ilk;a<=son;a++)
			printf("%d",a);
		printf("\n");
		son--;
	}
	getch();
}

