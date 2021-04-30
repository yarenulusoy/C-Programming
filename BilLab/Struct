/* Struct kullanarak kullanıcının belirlediği sayıda kişinin bilgilerini ekrana yazdıran ve yaşı en 
büyük olan kişiyi bulan uygulamayı yazınız. */

#include <stdio.h>
#include <string.h>
struct DTarih
{
	int gun,ay,yil;
};
struct sahis_bilgileri
{
	char isim[50];
	struct DTarih tarih;
};int say;
void buyukbul(struct sahis_bilgileri kisi[])
{	for (int i=0;i<say-1;i++)
	{
		for(int j=0;j<say-i-1;j++)
		{
			if(kisi[j].tarih.yil>kisi[j+1].tarih.yil)
			{	
				struct sahis_bilgileri gecici;
				gecici=kisi[j];
				kisi[j]=kisi[j+1];
				kisi[j+1]=gecici;	
			}
		}
	}
}
int main()
{
	printf("kisi sayisi:");
	scanf("%d",&say);
	struct sahis_bilgileri kisi[say];
	for(int i=0;i<say;i++)
	{
		printf("\n%d. Kisinin Adi:",i+1);
		scanf("%s",kisi[i].isim);
		printf("Dogum Gunu:");
		scanf("%d",&kisi[i].tarih.gun);
		printf("Dogum Ayi:");
		scanf("%d",&kisi[i].tarih.ay);
		printf("Dogum Yili:");
		scanf("%d",&kisi[i].tarih.yil);
		
	}
	printf("Kayitlar Yazdiriliyor...\n");
	for(int i=0;i<say;i++)
	{
		printf("\nIsim : %s ",kisi[i].isim);
		printf("Dogum Tarihi : %d.%d.%d\n",kisi[i].tarih.gun,kisi[i].tarih.ay,kisi[i].tarih.yil);
	}
	printf("\n\n\n");
	buyukbul(kisi);
	printf("Yasi En Buyuk Olan Kisi : %s %d.%d.%d",kisi[0].isim,kisi[0].tarih.gun,kisi[0].tarih.ay,kisi[0].tarih.yil);
}
