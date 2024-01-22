/*Main fonksiyonu içinde oluşturulan integer bir dizinin elemanlarını bir fonksiyon yardımıyla sırasıyla yazdırınız.*/

#include <stdio.h>
#include <stdlib.h>

// Dizi elemanlarını sırasıyla yazdıran fonksiyon
void siraylaYazdir(int* dizi, int uzunluk) {
    for (int i = 0; i < uzunluk; i++) {
        printf("%d  ", dizi[i]);
    }
}

int main() {
    // 11 elemanlı bir dizi oluşturuluyor
    int dizi[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Oluşturulan diziyi siraylaYazdir fonksiyonu ile ekrana yazdırma
    siraylaYazdir(dizi, 11);

    // main fonksiyonu başarıyla tamamlandı
    return 0;
}
