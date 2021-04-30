#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	int sayi1,sayi2,sonuc;
	printf("Birinci sayiyi giriniz = ",sayi1);
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz = ",sayi2);
	scanf("%d",&sayi2); //Kullanýcýya iki sayý girmesini istedik
	
	printf("\nYAPMAK ISTEDIGINIZ ISLEM \n [1]Toplama \n [2]Cikarma \n [3]Carpma \n [4]Bolme \n"); 
	// \n bir alt satýra geçmek için kullanýlýr.MEnüyü hazýrladýk
	
	int secim;
	printf(" Bir secim yapiniz=");
	scanf("%d",&secim); //Kullanýcýya Menüden bir seçim yapmasýný isteyeceðiz
	
	switch(secim) // seçime göre iþlem yapacak
	{
		case 1:
			sonuc=sayi1+sayi2; // [1] toplama olduðu için iki sayýyý topladýk sonuca attýk
			printf("Toplam sonucu =%d",sonuc); //ekrana sonucu yazdýrdýk
		break;
		
		case 2:
			sonuc=sayi1-sayi2; // [2] Çýkarma olduðu için iki sayýyý çýkardýk sonuca attýk
			printf("Cikarma sonucu =%d",sonuc);
		break;
		
		case 3:
			sonuc=sayi1*sayi2; // [3] çarpma olduðu için iki sayýyý çarptýk sonuca attýk
			printf("Carpma sonucu =%d",sonuc);
		break;
		
		case 4:
			sonuc=sayi1/sayi2; // [4] bölme olduðu için iki sayýyý çarptýk sonuca attýk
			printf("Bolme sonucu =%d",sonuc);
		break;
		
		default: // kullanýcý 5 veya meneüde olmayan bir tuþa basarsa ekrana yanlýþ seçim yaptýnýz yazdýracak 
			printf("Yanlis secim yaptiniz");
		break;
			
	}
		
getch();	
}
