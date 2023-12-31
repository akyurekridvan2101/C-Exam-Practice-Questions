/*Küçük bir union alıştırması.*/

#include <stdio.h>
#include <stdlib.h>

// Union tanımı
union degerler {
    int yas;    // 4 byte
    float maas; // 4 byte
};

int main() {
    // Union değişkeni tanımlama
    union degerler bir;

    // Yas alanına bir değer atanır ve ekrana yazdırılır.
    bir.yas = 6544444;
    printf("Yas: %d\n", bir.yas);

    // Maas alanına bir değer atanır. Bu atama, aynı bellek alanını paylaştığı için yas alanındaki değeri etkisiz hale getirir.
    bir.maas = 74747.43;
    printf("Maas: %.2f\n", bir.maas);

    return 0;
}
