/*Bir diziyi,dizinin boyutunu,dizideki en küçük elemanı ve en büyük elemanı temsil eden iki değişkeni parametre olarak alan
bir fonksiyon yazınız.Fonksiyon diziyi ve min. max. elemanları pointer olarak almalı ve geriye herhangi bir değer döndürmemelidir.
main fonksiyonunda fonksiyon çağrısı yapılarak en küçük ve en büyük değerler ekranda gösterilmelidir.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
void fonksiyon(int *dizi, int size, int *minimum, int *maximum);

int main() {

    int minimum, maximum;
    int dizi[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, -15, 16, 17, 18, 19, 20};

    // Fonksiyonu çağırma
    fonksiyon(dizi, 20, &minimum, &maximum);

    return 0;
}

// Dizideki minimum ve maximum değerleri hesaplayan fonksiyon
void fonksiyon(int *dizi, int size, int *minimum, int *maximum) {
    // İlk elemanı minimum ve maximum olarak başlangıç değeri olarak atama
    *minimum = dizi[0];
    *maximum = dizi[0];

    // Dizi üzerinde dolaşarak minimum ve maximum değerleri bulma
    for (int i = 0; i < size; i++) {
        if (dizi[i] < *minimum) {
            *minimum = dizi[i];
        }

        if (dizi[i] > *maximum) {
            *maximum = dizi[i];
        }
    }

    // Bulunan minimum ve maximum değerleri ekrana yazdırma
    printf("Minimum: %d\nMaximum: %d", *minimum, *maximum);
}
