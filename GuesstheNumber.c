#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//bilgisayarýn ürettiði sayýyý tahmin etmek
main()
{
	
	int sayi=0,sayi1=0,sayac=0;
	srand(time(NULL));
	sayi1=1+rand()%100; //50
	do{
		printf("Bir sayi giriniz= "); 
		scanf("%d",&sayi);
		if(sayi>sayi1)
			printf("Tahmini kucult\n");
		if(sayi<sayi1)
			printf("Tahmini buyult\n");
		sayac++;
		
	} while(sayi!=sayi1);
	printf("Bilgisayarin urettigi sayiyi %d adet tahminde buldunuz",sayac);
	getch();
}
