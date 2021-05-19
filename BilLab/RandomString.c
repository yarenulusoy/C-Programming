/*Liste[100][70] isimli karakter dizisi tanımlayınız. Tanımlanan bu dizinin her elemanına 
rastgele olarak Ad, Soyad ve mail adresi üretilerek sanal kişi yaratılacaktır. 
• Ad: rastgele küçük harflerden oluşacaktır. Uzunluğu minimum 5 maksimum 20 
karakter olacaktır.
• Soyad: rastgele büyük harflerden oluşacaktır. Uzunluğu minimum 5 maksimum 20 
karakter olacaktır.
• Mail: rastgele küçük harflerden oluşacaktır. Uzunluğu minimum 5 maksimum 10 
karakter olacaktır. Mail adresinin sonuna “@hotmail.com” kelimesi eklenecektir*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void SanalUret(char liste[100][70], int kisi)
{
    char kucukHarfler[] = "abcdefghijklmnopqrstuvwxyz";
    char buyukHarfler[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(NULL));

    char ek[] = "@hotmail.com";
    
    for(int i=0;i<kisi*3;i+=3){
        int length = 0;
        int index = 0;
        char isim[30] = "";
        char soyIsim[30] = "";
        char mailAsil[50] = "";

        length = rand() % 16 + 5;
        for(int x = 0;x < length;x++){
            index = rand() % 26;
            isim[x] = kucukHarfler[index];
        }

        length = rand() % 16 + 5;
        for(int x = 0;x < length;x++){
            index = rand() % 26;
            soyIsim[x] = buyukHarfler[index];
        }

        length = rand() % 6 + 5;
        for(int x = 0;x < length;x++){
            index = rand() % 26;
            mailAsil[x] = kucukHarfler[index];
        }

        strcat(mailAsil, ek);

        strcpy(liste[i], isim);
        strcpy(liste[i + 1], soyIsim);
        strcpy(liste[i + 2], mailAsil);
    }

}
void Yazdir(char liste[100][70], int kisi)
{
    char ad[] = "Ad";
    char soyad[] = "Soyad";
    char mail[] = "Mail";
    printf("%-30s%-30s%-30s\n", ad,soyad,mail);
    for(int i = 0;i < 90;i++){
        printf("-");
    }
    printf("\n");
    for(int x = 0; x < kisi* 3;x+=3){
        printf("%-30s%-30s%-30s\n", liste[x], liste[x+1], liste[x+2]);
    }
}

int main()
{
    char liste[100][70];
    int kisi;

    printf("Kac adet sanal kisi uretilecektir:");
    scanf("%d",&kisi);

    SanalUret(liste,kisi);
    Yazdir(liste,kisi);

    return 0;
}
