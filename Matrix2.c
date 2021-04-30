#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h> //5 e 5 lik matris 50-250 arasý rastgele... 5.sutun toplamý verir
main()
{
	
	int dizi[10];
	srand(time(NULL));
	for(int i=0;i<10;i++) 
	{
      	dizi[i]=rand()%101;
		printf("%d ",dizi[i]);
	  }
	 
	}



