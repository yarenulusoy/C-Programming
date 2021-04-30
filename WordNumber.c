#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
main(){
	
	char cumle[100];
	int sayac=0;
	printf("bir cumle giriniz=");
	gets(cumle);
	for(int i=0;i<strlen(cumle);i++)
	{
	printf("%c",cumle[i]);
	if(cumle[i]==' ')
    
	    {
		printf("\n");
		sayac++;
		
     	}
    }

	printf("\n %d adet kelime vardir",sayac+1);
	
	
	getch();}
