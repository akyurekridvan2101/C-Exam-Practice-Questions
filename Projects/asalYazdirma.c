/*Fonksiyon prototipi void asalYazdirma(long int *dizi , int dizi_boyutu); olacak şekilde main fonksiyonunda 10 boyutunda bir dizi tanımlayın ve scanf
ile bu dizinin elemanlarını atayın sonra da fonksiyon sayesinde dizi içindeki asal sayıları bulup ekrana yazdırın.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
void asalYazdirma(long int *dizi, int dizi_boyutu);

int main() {

    long int a[10];

    // Diziyi kullanıcıdan al
    for (int i = 0; i < 10; i++) {
        printf("Dizinin %d. elemanini giriniz: ", i + 1);
        scanf("%ldd", &a[i]);
    }

    // Asal sayıları yazdır
    asalYazdirma(a, 10);

    return 0;
}

// Asal sayıları yazdıran fonksiyon
void asalYazdirma(long int *dizi, int dizi_boyutu) {

    printf("\nAsal sayilar: ");

    for (int i = 0; i < dizi_boyutu; i++) {
        int asal = 1; // Varsayılan olarak sayıyı asal kabul et

        // 2'den başlayarak sayının asallığını kontrol et
        for (long int j = 2; j <= dizi[i] / 2; j++) {
            if (dizi[i] % j == 0) {
                asal = 0; // Sayı asal değil
                break;
            }
        }

        // Asal ise yazdır
        if (asal && dizi[i] > 1) {
            printf("%ld, ", dizi[i]);
        }
    }

    printf("\n");
}
