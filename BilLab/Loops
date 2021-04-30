/* Klavyeden çift sayı girildikçe (tamsayı) toplama işlemi yapan, tek sayı (tamsayı) 
girildiğinde ise, o ana kadar girilen çift sayıların toplamını gösteren C kodunu 
yazınız.
Not 1: while döngüsü kullanınız.
Not 2: Kodunuz negatif ve pozitif tamsayılar sayılar üzerinden çalışmalıdır.
Not 3: Eğer klavyeden ondalıklı sayı girişi yaparsanız sistem o girişi almayacak 
ve yeni bir giriş isteyecektir. Kodunuz klavyeden girilen sayı ondalıklı sayı diye 
sonsuz döngüye girmeyecektir.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi=0.0,ciftToplam;

    while((int)sayi%2==0){
        ciftToplam += sayi;
        printf("Bir sayi girin: ");
        scanf("%f",&sayi);
        while(sayi-(int)sayi!=0.0){
            printf("Lutfen tam sayi giriniz:");
            scanf("%f",&sayi);
        }
    }
    printf("Dongu sona erdi.");
    printf("Toplam = %.0f",ciftToplam);

    return 0;
}
