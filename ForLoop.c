#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

main()
{
	//ekrana birden 10 a kadar olan sayýlarý 5 defa ekrana yazdýran kod = örnek 11111 22222 33333 .... 1010101010
	for(int i=1;i<=10;i++) 
	{
		for(int a=0;a<5;a++)
			{
				printf("%d \n",i);
			}
	}	

}
/* for(int i=1;i<=10;i++) = i'yi 1 den baþlatýp "i<=10" komutuna gelene kadar dönderiyor."i++" komutu her dönmesinde i'yi 1 sefer arttýrýyor.
i=11 olunca komut duruyor fakat ekrana 11 yazmýyor.Çünkü yazdýrma iþlemini 2.forun içinde yapýyoruz */

/* for(int a=0;a<5;a++) = Ýkinci for döngüsünde a=0 dan baþlýyor.a=5 olana kadar dönüyor.a 5 olduðu zaman fordan çýkýyor.Neden 6 olup çýkmadý? 
Çünkü "a<=5" yapmadýk.  "a<5" yaptýðýmýz için a 5 olduðu zaman for döngüsünden çýkar. Bu arada her dönmesinde ekrana sayýlarý yazdýrýr.Bu sitemi
diþli çark gibi düþünebiliriz. Ýlk önce üstteki i foru 11 e kadar dönüyor. Her dönmesinde a komutuda kendi içinde 5 defa dönüyor.Bunun sonucundada 
ekrandaki görüntü ortaya çýkýyor. */

