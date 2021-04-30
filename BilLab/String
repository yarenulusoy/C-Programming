/*  Klavyeden girilen bir stringin uzunluğunu, sesli 
harf sayısını ve sessiz harf sayısını bulan programı pointer ile yaziniz. */

#include <stdio.h>
#include <stdlib.h>

int karakterSayisi(const char *s) {
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
            j++;
    }

    return j-1;
}
int harfSayma(char *s){
     char sesli[]="aeiouAEIOU";
     int i=0,a,sayac=0;

       while(s[i]!='\0'){
           for(a=0;a<10;a++)
               if(s[i]==sesli[a]){
                   sayac++;
                   break;
               }
          i++;
       }
       return sayac;

    }

int main()
{
    char str[50];
    printf("String giriniz:");
    fgets(str,50,stdin);
    char *pnt;
    pnt=str;
    int kSayisi=karakterSayisi(pnt);
    int sesli=harfSayma(pnt);
    int sessiz=kSayisi-sesli;
    printf("Uzunlugu=%d\n",kSayisi);
    printf("Sesli Harf Sayisi=%d\n",sesli);
    printf("Sessiz Harf Sayisi=%d\n",sessiz);

    return 0;
}
