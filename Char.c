#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{

	char kelime[1]; 
	printf("Bir kelime giriniz = "); //kullan�c�dan kelime girmesini istiyoruz
	scanf("%s",kelime); 
	// �evirme i�lemi yap�yoruz fakat karakter(string) oldu�u i�in & i�areti kullan�lmaz
	printf("Girdi�iniz kelime =%s",kelime); //Girdi�imiz kelimeyi bize g�steriyor
	getch();
}
