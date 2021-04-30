/* 0’dan 100’e kadar 10 rastgele sayıyı bir diziye atayınız. Dizinin elemanlarını küçükten büyüğe doğru sıralayınız.
Dizinin elemanlarını önce tek sayılar (küçükten büyüğe) daha sonra da çift sayılar (küçükten büyüğe) gelecek şekilde tek bir dizide sıralayınız.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int dizi[10],ciftsayi[10],teksayi[10];
	int gecici=0,cifts,teks;
	srand(time(NULL));
	
	printf("Rastgele Sayilar:\n");
	for(int i=0;i<10;i++) 
	{
      	dizi[i]=rand()%101;
		printf("%d ",dizi[i]);
	  }
	
	printf("\nSirali Dizi:\n");
		for(int i=0;i<10;i++)
	{
			for(int j=i+1;j<10;j++)
				if(dizi[j]<dizi[i])
				{
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
	}
	for(int i=0;i<10;i++)
		printf("%d ",dizi[i]);
	
	printf("\nOnce tek sayilar,sonra cift sayilar sirali dizi:\n");	
	
 	for(int i=0; i<10 ; i++){
	 if(dizi[i]%2!=0){
            printf("%d ",dizi[i]);
            }
    }
    for(int i=0 ; i<10; i++){
        if(dizi[i]%2==0){
            printf("%d ",dizi[i]);
            }
    }
    return 0;
}
