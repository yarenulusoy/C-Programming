#include <stdio.h>  //kütüphane
#include <conio.h>  //kütüphane
#include <math.h>   //kütüphane
#include <locale.h> //Türkçe karakter kütüphanesi 

main()
{
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter kullanabilmemiz için kullanýlan kod
	
	printf("Merhaba C"); //printf komutu ile ekrana istediðimizi yazdýrabiliyoruz.
	getch(); //F10 tuþuna bastýktan sonra ekrana gelen çýktýnýn ekranda kalmasýný saðlar 
	return 0;
}


