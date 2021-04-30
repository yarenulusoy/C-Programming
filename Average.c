#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

 //10 tane 1 ile 100 (100 de dahil)  arasýnda rastgele seçilen sayýlarýn ortalamasýný bulan program
main()
{
	int sayi=0,toplam=0;
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		sayi=1+rand()%100;
		printf("%d \n",sayi);
		toplam+=sayi; //toplam=toplam+sayi; 
		
	}
	printf("Ortalamaniz = %d",toplam/10);
	getch();
	
	
}

