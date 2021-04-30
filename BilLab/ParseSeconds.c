/* Saniye bilgisini alıp xParseSeconds () fonksiyonuna gönderiniz. 
xParseSeconds fonksiyonuna parametre olarak gelen saniye değerini; saat, dakika ve saniye olarak gösteriniz. */

#include <stdio.h>
#include <stdlib.h>

void xParseSeconds(int seconds);

int main()
{
	int seconds;
	printf("Saniye bilgisi giriniz:");
	scanf("\t%d",&seconds);
	xParseSeconds(seconds);

    return 0;
}

void xParseSeconds (int seconds){
	int saniye,dakika,saat;
	saat = (seconds/3600);
	dakika = (seconds -(3600*saat))/60;
	saniye = (seconds -(3600*saat)-(dakika*60));
	printf("%d saat %d dakika %d saniye",saat,dakika,saniye);
}
