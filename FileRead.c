#include <conio.h> 
#include <stdio.h>
#include <locale.h> 
main()
{
FILE *dosya;
char ad[10];
int notu,nosu;
dosya=fopen("ogrencinotlar.txt","r");


while(!feof(dosya))
{
	fscanf(dosya,"%d\t %s\t%d\n",&nosu,&ad,&notu);
    printf("%d\t%s\t%d\n",nosu,ad,notu);

}
fclose(dosya);
	
getch();
}

