#include<stdio.h>//ekranda sayi gir txt dosyas�nda toplam g�ster
#include<conio.h>
#include<locale.h>
main()
{
	FILE *yaz;
	int x,y;
	yaz=fopen("deneme.txt","w"); //dosyay� ac
	printf("1.sayiyi gir:");
	scanf("%d",&x);
	printf("2.sayiyi gir:");
	scanf("%d",&y);
	
	fputs("iki sayinin toplami !!!\n",yaz);
	fprintf(yaz,"%d+%d=%d\n",x,y,x+y);
fclose(yaz); //yaz dosyas�n� kapat
printf("Bilgiler kaydedildi");	
}
