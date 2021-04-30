#include<stdio.h> //ogrenci nosu adý sýnýfý girilip ekrana yazdýran
#include<conio.h>
#include<locale.h>
struct kayit
{
char ad[10];
int no;
int sinif;
};
main()
{
struct kayit ogrenci;
printf("ogrenci nosu= ");
scanf("%d",&ogrenci.no);
printf("ogrenci adi= ");
scanf("%s",&ogrenci.ad);
printf("ogrenci sinifi= ");
scanf("%d",&ogrenci.sinif);

printf("\n***Girilen Bilgiler***");
printf("\n no:%d",ogrenci.no);
printf("\n Adi:%s",ogrenci.ad);
printf("\n Sinifi :%d",ogrenci.sinif);
getch();
}
