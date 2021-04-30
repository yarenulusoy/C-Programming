#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>
main(){
	
int sayac=0;
char cumle[100];
printf("Bir cumle girin=");
gets(cumle);
for(int i=0;i<strlen(cumle);i++)
{
	if(cumle[i]=='a' || cumle[i]=='A')
	sayac++;
}

	printf("%d tane a harfi var",sayac);
getch();}
