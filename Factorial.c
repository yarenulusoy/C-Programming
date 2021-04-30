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
			sonuc=sonuc*i;    = Burdaki mantýk ilk önce for içinde i deðiþkeni tanýmladýk. i deðiþkeninin içine sayi deðiþkenini attýk.
		}                       sonra "i>=1" komutu yani i 1 e eþit olana kadar devam et diyor.i-- komutuda for her döndüðünde i deðiþkenini
		                        bir azaltýyor."sonuc=sonuc*i;" bu kýsýmdada  for her döndüðünde sonuçla i deðiþkeninin çarpýp tekrar sonuca
		                        atýyor.Böylece faktoriyelin sonucunu bulmuþ oluyor. */	                        
/*	printf("%d ! =%d",sayi,sonuc); = Burdada ekrana yazdýðýmýz sayýyý ilk önce gösteriyor ardýndanda onun sonucunu ekrana yazdýrýyor. Örnek 3!=6*/
		                        
