#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	int sayi;
	printf("Bir sayi giriniz = "); //Kullan�c�ya say� girmesini istedik
	scanf("%d",&sayi); 
	/*Kullan�c�n�n hem say� girmesini sa�l�yor hemde string(yaz�) den int'e �eviriyor.
	( & ) karakterini kullanmazsak �evirme i�lem yapm�yor*/
	printf("Girdi�iniz say� = %d",sayi); //Bu sat�rdada girdi�imiz say�y� bize g�steriyor.
	getch();
	
}
