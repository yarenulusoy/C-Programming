#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int notu=85;
	float pi=3.14; //float ondalýk tam sayýlalarý tutan fonksiyodur.
	char harf='A'; //Char tek karakterleri tutan fonksiyondur. Tek týrnak içine karakter yazýlýr.
	printf("Notu = %d , Pi = %f , harf = %c",notu,pi,harf); 
	//çift týrnak içine deðerleri çektikten sonra deðiþkenleri sýrasýyla yazmamýz önemlidir(notu,pi,harf) 
	getch();
}
