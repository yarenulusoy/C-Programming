#include<stdio.h>  
#include<conio.h>  
void main()  
{  

int num, rem, sum = 0, i;  

printf("Sayi giriniz:\n");  
scanf("%d", &num);      

for(i = 1; i < num; i++){
	rem = num % i;
 	if (rem == 0)
   {  
	sum = sum + i;  
	}  
}  
if (sum == num)  
	printf(" %d mukemmel sayidir");  
else  
	printf("\n %d mukemmel sayi degildir.");  
getch();  
}  
