#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	printf("Birinci sayiyi giriniz = ",sayi1);
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz = ",sayi2);
	scanf("%d",&sayi2);
	printf("Ucuncu sayiyi giriniz = ",sayi3);
	scanf("%d",&sayi3);
	printf("Dorduncu sayiyi giriniz = ",sayi4);
	scanf("%d",&sayi4);
	printf("Besinci sayiyi giriniz = ",sayi5);
	scanf("%d",&sayi5);
	//Kullanýcan 5 sayý girdirdik.
	
	int enbuyuk=sayi1; // bir tane en büyük diye deðiþken tanýmladýk  
	
	//Ýf'lerin mantýðý burda eðer sayi1 büyükse en buyuge atýcak ona göre hepsini deneyecek ve en büyüðü bulacak

	if(sayi2>enbuyuk)
		enbuyuk=sayi2;
	if(sayi3>enbuyuk)
		enbuyuk=sayi3;
	if(sayi4>enbuyuk)
		enbuyuk=sayi4;
	if(sayi5>enbuyuk)
		enbuyuk=sayi5;
	
	printf("En buyuk sayi=%d",enbuyuk); //en sondada en buyuk sayýyý yazdýrdýk
	getch();
	
	
	
	
	
}
