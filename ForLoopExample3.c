#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main()
{
int son=7,bosluk=1;
for(int i=1;i<=4;i++)
{
	for(int a=0;a<bosluk;a++)
	printf(" ");
	for(int b=i;b<=son;b++)
	printf("%d",b);
	printf("\n");
	bosluk++;
	son--;
	
}
int son2=1,bosluk2=1;
for(int i=7;i>=4;i--)
{
	for(int c=0;c<bosluk2;c++)
	printf(" ");
	for(int j=i;j>=son2;j--)
	printf("%d",j);
	son2++;
	bosluk2++;
	printf("\n");
	
}

	
	getch();
}
