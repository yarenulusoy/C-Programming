#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main()
{
	//ekrana birden 10 a kadar olan say�lar� 5 defa ekrana yazd�ran kod = �rnek 11111 22222 33333 .... 1010101010
	for(int i=1;i<=10;i++) 
	{
		for(int a=0;a<5;a++)
			{
				printf("%d \n",i);
			}
	}	

}
/* for(int i=1;i<=10;i++) = i'yi 1 den ba�lat�p "i<=10" komutuna gelene kadar d�nderiyor."i++" komutu her d�nmesinde i'yi 1 sefer artt�r�yor.
i=11 olunca komut duruyor fakat ekrana 11 yazm�yor.��nk� yazd�rma i�lemini 2.forun i�inde yap�yoruz */

/* for(int a=0;a<5;a++) = �kinci for d�ng�s�nde a=0 dan ba�l�yor.a=5 olana kadar d�n�yor.a 5 oldu�u zaman fordan ��k�yor.Neden 6 olup ��kmad�? 
��nk� "a<=5" yapmad�k.  "a<5" yapt���m�z i�in a 5 oldu�u zaman for d�ng�s�nden ��kar. Bu arada her d�nmesinde ekrana say�lar� yazd�r�r.Bu sitemi
di�li �ark gibi d���nebiliriz. �lk �nce �stteki i foru 11 e kadar d�n�yor. Her d�nmesinde a komutuda kendi i�inde 5 defa d�n�yor.Bunun sonucundada 
ekrandaki g�r�nt� ortaya ��k�yor. */

