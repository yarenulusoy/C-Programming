#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
main()
{
	int matris[5][5];
	int adet=4;	
	int gecici=0;
	srand(time(NULL));
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		
		 matris[i][j]=10+rand()%90;
	
	}for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		printf("%d\t",matris[i][j]);
	}
		printf("\n");
}
	for(int i=0;i<100;i++)
	printf("*");
	printf("\n");
	
	for(int i=0;i<5;i++)
	{
		gecici=matris[i][i];
		matris[i][i]=matris[i][adet];
		matris[i][adet]=gecici;
		adet--;
	}
	for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		printf("%d\t",matris[i][j]);
	}
		printf("\n");
}	
	getch();	

}
