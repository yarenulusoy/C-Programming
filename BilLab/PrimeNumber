/* Kullanıcı tarafından girilecek olan ilk değer ve son değer arasındaki 
asal sayıları bulan programı C dilinde yazınız. 
• İlk değer ve son değer kullanıcıdan alınacaktır.
• Programı for döngüsü kullanarak yazınız. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilk, son, asal;
    printf("Ilk deger:");
    scanf("%d", &ilk);

    printf("Son deger:");
    scanf("%d", &son);

    printf("%d ile %d arasindaki asal sayilar:\n", ilk, son);
    if (ilk < 2)
        ilk = 2;
    for (ilk; ilk <= son; ilk++)
    {
        asal = 1;
        for (int i = 2; i < ilk; i++)
        {
            if (ilk % i == 0)
            {
                asal = 0;
                break;
            }
        }

        if (asal)
            printf("%d, ", ilk);
    }
    return 0;
}
