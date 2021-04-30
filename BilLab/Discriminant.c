/*ax2 + bx +c = 0 şeklinde verilmiş olan 2. dereceden denklemin a, b,
c değerlerini kullanıcıdan alarak, denklemin diskriminantını (Δ) hesaplayıp denklemin kökü 
olup olmadığını eğer varsa kaç adet olduğunu bulan programı yazınız */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 int a,b,c,dis;
 printf("ax2 + bx +c = 0 seklinde verilmis olan 2. dereceden denklemin a, b, c degerlerini giriniz:\n");
 printf("a degerini giriniz: ");
 scanf("%d",&a);
 printf("b degerini giriniz: ");
 scanf("%d",&b);
 printf("c degerini giriniz: ");
 scanf("%d",&c);
 printf("\n %dx2 + %dx + %d \n\n", a,b,c);

 dis=(b*b)-(4*a*c);

  if (dis > 0){
    printf("Denklemin iki farkli reel koku vardir");}
    
  else if(dis < 0){
    printf("Denklemin reel koku bulunmamaktadir!");}
    
  else{
    printf("Denklemin bir tane reel koku vardir!"); }

    return 0;
}
