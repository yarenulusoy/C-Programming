#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
	int sayi=0,b=0;
	printf("Bir sayi giriniz= ");  
	scanf("%d",&sayi);
	
		for(int i=2;i<sayi;i++)   
		{
			if(sayi%i==0)
			b++;
		}
	if(b==0 )
		printf("Girilen sayi asaldir.");
	else
		printf("Girilen sayi asal degildir.");
	getch();		
}
