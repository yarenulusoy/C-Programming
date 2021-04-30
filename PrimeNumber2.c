#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	int baslangic=0 , bitis=0 , sayac=0 , kactane=0 ;
	
	printf("Baslangic giriniz= ");  
	scanf("%d",&baslangic);
	printf("Bitis giriniz= ");  
	scanf("%d",&bitis);
	printf("%d ve %d arasindaki asal sayilar",baslangic,bitis);
	for(baslangic; baslangic<bitis;baslangic++) 
	{
		sayac=0;
		for(int a=2; a<baslangic;a++) 
			{
				if(baslangic%a==0) 
				sayac++; 
			}	
		if(sayac==0)
			{
			printf("\n %d",baslangic);
			kactane++;
			}
	}
	printf("\n %d tane asal sayi vardir",kactane);
	getch();
	
}
