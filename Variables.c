#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int notu=85;
	float pi=3.14; //float ondal�k tam say�lalar� tutan fonksiyodur.
	char harf='A'; //Char tek karakterleri tutan fonksiyondur. Tek t�rnak i�ine karakter yaz�l�r.
	printf("Notu = %d , Pi = %f , harf = %c",notu,pi,harf); 
	//�ift t�rnak i�ine de�erleri �ektikten sonra de�i�kenleri s�ras�yla yazmam�z �nemlidir(notu,pi,harf) 
	getch();
}
