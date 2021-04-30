#include<stdio.h> // 5 adet sayi girilip küçükten büyüðe alt alta sýralama
#include<conio.h>

main()
{
int sayi[5];
int gecici=0;
printf("5 adet sayi girin\n");
for(int i=0;i<5;i++)
{
	printf("%d.indeksli sayi girin:",i);
	scanf("%d",&sayi[i]);
}
for(int i=0;i<4;i++)
for(int j=i+1;j<5;j++)
	if(sayi[j]<sayi[i]) //i=0  j=1  // 0.70   1.30   2.i 50  3.45  4.8
	{
		gecici=sayi[i];
		sayi[i]=sayi[j];
		sayi[j]=gecici;
	}

for(int i=0;i<5;i++)
printf("\n%d",sayi[i]);
getch();
}
