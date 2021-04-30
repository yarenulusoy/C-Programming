#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	int sayi;
	printf("Bir sayi giriniz = "); //Kullanýcýya sayý girmesini istedik
	scanf("%d",&sayi); 
	/*Kullanýcýnýn hem sayý girmesini saðlýyor hemde string(yazý) den int'e çeviriyor.
	( & ) karakterini kullanmazsak çevirme iþlem yapmýyor*/
	printf("Girdiðiniz sayý = %d",sayi); //Bu satýrdada girdiðimiz sayýyý bize gösteriyor.
	getch();
	
}
