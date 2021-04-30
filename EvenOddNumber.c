#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//1 ile 100 arasýnda üretilen sayýlarýn kaç tanesinin çift kaç tanesinin tek olduðunu yazdýran program
main()
{
	int sayi=0,tek=0,cift=0,sayac=0;
	srand(time(NULL));
	while(sayac<100)  
	{
		sayi=1+rand()%100; 
		if(sayi%2==0)
			cift++; 
		else
			tek++;  
		sayac++; 
	}
	
	printf("Cift adet sayisi = %d \n",cift);
	printf("Tek adet sayisi = %d",tek);
	getch();
}









/*for(int i=0;i<100;i++)
	{
		sayi=1+rand()%100;
		if(sayi%2==0)
			cift++;
		else
			tek++;
	}*/
