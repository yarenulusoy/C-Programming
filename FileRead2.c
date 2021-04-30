#include <conio.h> 
#include <stdio.h>
#include <locale.h> 
#include<string.h>
main()
{
FILE *dosya;
char ad[10],enbuyukad[10];
int notu=0,nosu=0,sayac;
int enbuyuk,enkucuk=100;
float toplam=0,ortalama=0;
dosya=fopen("ogrencinotlar.txt","r");

while(!feof(dosya))
{
	
	fscanf(dosya,"%d\t%s\t%d\n",&nosu,&ad,&notu);
    if(notu>enbuyuk)
	{
		enbuyuk=notu;
		strcpy(enbuyukad,ad);
	}
		
	    if(enkucuk>notu) 
	    	enkucuk=notu;
	sayac++;
	toplam+=notu;
}	
ortalama=toplam/sayac;

printf("en buyuk=%s\t%d\n",enbuyukad,enbuyuk);
printf("en kucuk=%d\n",enkucuk);
printf("ortalama=%f\n",ortalama);
fclose(dosya);
getch();
}
