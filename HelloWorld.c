#include <stdio.h>  //k�t�phane
#include <conio.h>  //k�t�phane
#include <math.h>   //k�t�phane
#include <locale.h> //T�rk�e karakter k�t�phanesi 

main()
{
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter kullanabilmemiz i�in kullan�lan kod
	
	printf("Merhaba C"); //printf komutu ile ekrana istedi�imizi yazd�rabiliyoruz.
	getch(); //F10 tu�una bast�ktan sonra ekrana gelen ��kt�n�n ekranda kalmas�n� sa�lar 
	return 0;
}


