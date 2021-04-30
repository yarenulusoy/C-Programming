/*Kullanıcının belirlediği boyutta kare matrisin elemanlarını rastgele 
atayan ve bu matrisin köşegenlerinin yerlerini değiştiren uygulama */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    srand(time(NULL));
    printf("Kare matris boyutunu giriniz: ");
    scanf("%d", &N);
    int matris[N][N];
    printf("\nRastgele Matris\n");
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            matris[i][j] = rand() % 10;
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    printf("Degisen Matris\n");
    int temp;
    for (int i = 0; i < N; i++){
        temp = matris[i][i];
        matris[i][i] = matris[i][N - 1 - i];
        matris[i][N - 1 - i] = temp;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}
