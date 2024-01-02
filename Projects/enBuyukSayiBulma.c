/*int enBuyuk(int * , int boyut); fonksiyona parametre olarak girilen dizinin en büyük elemanını şu prototip sayesinde bulup main
fonksiyonunda yazdırınız.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
int enBuyuk(int *, int);

int main() {
    // Bir dizi tanımlama ve başlangıç değerleri atama
    int a[10] = {10, 2, 21, 4, 2, 6, 7, 20, 1, 5};

    // En büyük elemanı ekrana yazdırma
    printf("En buyuk eleman: %d", enBuyuk(a, 10));

    return 0;
}

// Dizideki en büyük elemanı bulan fonksiyon
int enBuyuk(int *a, int boyut) {
    // İlk elemanı geçici olarak en büyük olarak kabul etme
    int yedek = a[0];

    // Dizi üzerinde dolaşarak en büyük elemanı bulma
    for (int i = 1; i < boyut; i++) {
        if (yedek < a[i])
            yedek = a[i];
    }

    // En büyük elemanı döndürme
    return yedek;
}
