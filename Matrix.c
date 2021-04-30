#include<stdio.h> // 3 e 4 lük matris
#include<conio.h>
#include<locale.h>

main()
{
	int sayi[3][4]; //3 satýr 4 sutun
	printf("sayi matrisinin elemanlarini girin:\n");
	for(int i=0;i<3;i++)  //satýr sayýsý(3)
	{
		for(int j=0;j<4;j++) //sutunsayýsý(4)
		{
			printf("sayi(%d.%d)",i,j);
			scanf("%d",&sayi[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			
			printf("%d\t",sayi[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
getch();
}
