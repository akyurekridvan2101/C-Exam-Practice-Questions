/*Main fonksiyonu içinde oluşturulan integer bir dizinin elemanlarını bir fonksiyon yardımıyla tersten yazdırınız.*/

#include <stdio.h>
#include <stdlib.h>

// Dizi elemanlarını tersten sırasıyla yazdıran fonksiyon
void siraylaYazdir(int* dizi, int uzunluk) {
    for (int i = (uzunluk - 1); i >= 0; i--) {
        printf("%d  ", dizi[i]);
    }
}

int main() {
    // 11 elemanlı bir dizi oluşturuluyor
    int dizi[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Oluşturulan diziyi tersten siraylaYazdir fonksiyonu ile ekrana yazdırma
    siraylaYazdir(dizi, 11);

    // main fonksiyonu başarıyla tamamlandı
    return 0;
}

