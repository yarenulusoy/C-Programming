#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{	
	char harf;
	printf("Bir harf giriniz =");
	scanf("%c",&harf); //Kullanýcýdan bir harf girmesini istedik ve çevirme iþlemini yaptýk
	
	switch(harf) //Switch mantýðý içine yazýlana göre arama yapar yani harfe göre iþlem yapacak 
	{
		case 'a': // a ya basarsak alttaki komutu çalýþtýracak
			printf("a harfine bastýnýz.");
		break; //break komutu sonlandýrýr.ve switchten cýkar.
		case 'b':
			printf("b harfine bastýnýz.");
		break;
		case 'c':
			printf("c harfine bastýnýz.");
		break;	
		default: // else gibi çalýþýr en son kalan komutu default komutuyla yönetebiliriz.
			printf("Biþeye basmadýnýz.");
		break;
	}
	getch();
}

