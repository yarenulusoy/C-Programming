#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{

	char kelime[1]; 
	printf("Bir kelime giriniz = "); //kullanýcýdan kelime girmesini istiyoruz
	scanf("%s",kelime); 
	// Çevirme iþlemi yapýyoruz fakat karakter(string) olduðu için & iþareti kullanýlmaz
	printf("Girdiðiniz kelime =%s",kelime); //Girdiðimiz kelimeyi bize gösteriyor
	getch();
}
