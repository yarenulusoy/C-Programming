/* Kullanıcıdan alınan sayının Armstrong olup olmadığını kontrol ediniz. */

#include <stdio.h>
#include <stdlib.h>

int pw(int s, int r) {
  int c, p = 1;
  for (c = 1; c <= r; c++)
    p = p*s;
  return p;
}

void armstrong (int *ptr){
    int sonuc=0,t,taban,basamak=0;
    t = ptr;
 	while (t != 0) {
 		basamak++;
    	t = t/10;
    }
  	t = ptr;

 	while (t != 0) {
   		taban = t%10;
    	sonuc = sonuc + pw(taban, basamak);
    	t = t/10;
  	}
  	if (ptr == sonuc)
    printf("%d sayisi armstrong sayidir.\n", ptr);
  	else
    printf("%d sayisi armstrong sayi degildir.\n", ptr);

  	return 0;
	}
	
int main()
{
    int sayi,*ptr;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    ptr=&sayi;
    armstrong(*ptr);
    return 0;
}
