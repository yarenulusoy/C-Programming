#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	
	int sayi=0,sonuc=1;
	printf("Bir sayi giriniz = ");
	scanf("%d",&sayi);
	
	for(int i=sayi;i>=1;i--)
		{
			sonuc=sonuc*i;
		}
	printf("%d ! =%d",sayi,sonuc);
	getch();
}


/*  for(int i=sayi;i>=1;i--)
		{
			sonuc=sonuc*i;    = Burdaki mant�k ilk �nce for i�inde i de�i�keni tan�mlad�k. i de�i�keninin i�ine sayi de�i�kenini att�k.
		}                       sonra "i>=1" komutu yani i 1 e e�it olana kadar devam et diyor.i-- komutuda for her d�nd���nde i de�i�kenini
		                        bir azalt�yor."sonuc=sonuc*i;" bu k�s�mdada  for her d�nd���nde sonu�la i de�i�keninin �arp�p tekrar sonuca
		                        at�yor.B�ylece faktoriyelin sonucunu bulmu� oluyor. */	                        
/*	printf("%d ! =%d",sayi,sonuc); = Burdada ekrana yazd���m�z say�y� ilk �nce g�steriyor ard�ndanda onun sonucunu ekrana yazd�r�yor. �rnek 3!=6*/
		                        
