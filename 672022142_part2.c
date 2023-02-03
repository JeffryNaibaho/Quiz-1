#include <stdio.h>
#include <stdlib.h>

int main ()
{
    for (int i=0; i<=100000; i++)
    {
        printf("\r\t\t\t\t\t\tLoading%d%%", i/1000);
    }
    system("cls");
    int angka;
    int a,b,c;
    puts("======================");
    puts("Tugas Quiz ASD");
    puts("======================\n");
    puts("1. Level 1");
    puts("2. Level 2");
    puts("3. Level 3");
    puts("4. Exit");
    printf("\nMasukkan Angka :");
    scanf("%d", &angka);
    system("cls");

    switch(angka)
    {
    case 1://LEVEL 1
        printf("Masukkan Angka :");
        scanf("%d", &a);

          for (int i = 0; i <=a; i++) {
              for (int j = 0; j <= i; j++) {
                  printf("%d ", i + j);
              }
              printf("\n");
      }
  return 0;
        break;

    case 2://LEVEL 2
        printf("Masukkan angka : ");
        scanf("%d", &b);

         for (int i = 1; i <= b; i++) {
             for (int j = 1; j <= i; j++) {
                  printf("%d ", i * j);
             }
             printf("\n");
    }
    return 0;
        break;

    case 3://LEVEL 3
        printf("Masukkan angka(Max 9) : ");
        scanf("%d", &c);

        for (int i = 1; i<=c; i++){
            for (int j=c-i; j>=1; j--){
                printf(" ");
            }
            for (int j = 1; j<=i; j++){
                printf("%d", j);
            }
            for (int j=i-1; j>=1; j--){
                printf("%d", j);
            }
            printf("\n");
        }
        for (int i=c-1; i>=1; i--){
            for(int j=c-i; j>=1; j--){
                printf(" ");
            }
            for (int j=1; j<=i; j++){
                printf("%d", j);
            }
            for (int j=i-1; j>=1; j--){
                printf("%d", j);
            }
            printf("\n");
        }
        return 0;

    default:
        printf("TERIMA KASIH ~ GOOD LUCK");
    }
}
