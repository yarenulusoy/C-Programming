#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	int sayi1,sayi2,sonuc;
	printf("Birinci sayiyi giriniz = ",sayi1);
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz = ",sayi2);
	scanf("%d",&sayi2); //Kullan�c�ya iki say� girmesini istedik
	
	printf("\nYAPMAK ISTEDIGINIZ ISLEM \n [1]Toplama \n [2]Cikarma \n [3]Carpma \n [4]Bolme \n"); 
	// \n bir alt sat�ra ge�mek i�in kullan�l�r.MEn�y� haz�rlad�k
	
	int secim;
	printf(" Bir secim yapiniz=");
	scanf("%d",&secim); //Kullan�c�ya Men�den bir se�im yapmas�n� isteyece�iz
	
	switch(secim) // se�ime g�re i�lem yapacak
	{
		case 1:
			sonuc=sayi1+sayi2; // [1] toplama oldu�u i�in iki say�y� toplad�k sonuca att�k
			printf("Toplam sonucu =%d",sonuc); //ekrana sonucu yazd�rd�k
		break;
		
		case 2:
			sonuc=sayi1-sayi2; // [2] ��karma oldu�u i�in iki say�y� ��kard�k sonuca att�k
			printf("Cikarma sonucu =%d",sonuc);
		break;
		
		case 3:
			sonuc=sayi1*sayi2; // [3] �arpma oldu�u i�in iki say�y� �arpt�k sonuca att�k
			printf("Carpma sonucu =%d",sonuc);
		break;
		
		case 4:
			sonuc=sayi1/sayi2; // [4] b�lme oldu�u i�in iki say�y� �arpt�k sonuca att�k
			printf("Bolme sonucu =%d",sonuc);
		break;
		
		default: // kullan�c� 5 veya mene�de olmayan bir tu�a basarsa ekrana yanl�� se�im yapt�n�z yazd�racak 
			printf("Yanlis secim yaptiniz");
		break;
			
	}
		
getch();	
}
