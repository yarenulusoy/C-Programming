#include <conio.h> //kurum bilgisi adý altýnda calýsanýn adý soyadý yasý birimi pozisyonu
#include <stdio.h>//maasý medeni hali eþinin adý cocuk sayýsý 3 kiþi
#include <locale.h> 


struct  kurum
{
	char birim_adi[20],pozisyon[20];
	int maas;
};
struct  aile
{
	char medenihal[20],esadi[20];
	int cocuk_sayisi;
};
struct personeller
{
	char ad[20],soyad[20];
	int yas;
	struct kurum k_bilgi;
	struct aile a_bilgi;
}calisan[3];

main()
{
	for(int i=0;i<3;i++)//i=1
	{
	printf("[%d]. calisanin bilgileri\n",i+1);
	printf("Calisanin Adi:");
	scanf("%s",&calisan[i].ad);
	
	printf("Calisanin Soyadi:");
	scanf("%s",&calisan[i].soyad);
	
	printf("Calisanin Yasi:");
	scanf("%d",&calisan[i].yas);
	
	printf("Calisanin birimi:");
	scanf("%s",&calisan[i].k_bilgi.birim_adi);
	
	printf("Calisanin pozisyonu:");
	scanf("%s",&calisan[i].k_bilgi.pozisyon);
	
	printf("Calisanin Maasi:");
	scanf("%d",&calisan[i].k_bilgi.maas);
	
	printf("Calisanin medeni hali:");
	scanf("%s",&calisan[i].a_bilgi.medenihal);
	
	printf("Calisanin esinin adi:");
	scanf("%s",&calisan[i].a_bilgi.esadi);
	
	printf("Calisanin cocuk sayisi:");
	scanf("%d",&calisan[i].a_bilgi.cocuk_sayisi);
	printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		printf("\n[%d]. calisanin bilgileri\n",i+1);
		printf("Calisanin adi:%s \n",calisan[i].ad);
		printf("Calisanin soyadi:%s \n",calisan[i].soyad);
		printf("Calisanin yasi:%d \n",calisan[i].yas);
		printf("Calisanin birim adi:%s \n",calisan[i].k_bilgi.birim_adi);
		printf("Calisanin pozisyonu:%s \n",calisan[i].k_bilgi.pozisyon);
		printf("Calisanin maasi:%d \n",calisan[i].k_bilgi.maas);
		printf("Calisanin medeni hali:%s \n",calisan[i].a_bilgi.medenihal);
		printf("Calisanin esinin adi:%s \n",calisan[i].a_bilgi.esadi);
		printf("Calisanin cocuk sayisi:%d \n",calisan[i].a_bilgi.cocuk_sayisi);
	}
	getch();
}
