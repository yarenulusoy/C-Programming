#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	
	char harf;
	printf("Bir harf giriniz =");
	scanf("%c",&harf); //Kullan�c�dan bir harf girmesini istedik ve �evirme i�lemini yapt�k
	
	switch(harf) //Switch mant��� i�ine yaz�lana g�re arama yapar yani harfe g�re i�lem yapacak 
	{
		case 'a': // a ya basarsak alttaki komutu �al��t�racak
			printf("a harfine bast�n�z.");
		break; //break komutu sonland�r�r.ve switchten c�kar.
		case 'b':
			printf("b harfine bast�n�z.");
		break;
		case 'c':
			printf("c harfine bast�n�z.");
		break;	
		default: // else gibi �al���r en son kalan komutu default komutuyla y�netebiliriz.
			printf("Bi�eye basmad�n�z.");
		break;
	}
	getch();
}

