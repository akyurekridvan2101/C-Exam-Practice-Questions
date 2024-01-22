/*Main fonksiyonu içinde oluşturulan bir integer diziyi ve uzunluğunu parametre olarak bir fonksiyona veriniz.O fonksiyon dizinin
parametre olarak girilen bir sayının o dizide ardışık iki elemanın toplamına eşitse bulunan indeksi (ilk elemanın indeksi)
döndürür,eşit değilse 0 döndürür.*/

#include <stdlib.h>
#include <stdio.h>

// Verilen bir dizide ardışık iki elemanın toplamının belirli bir sayıya eşit olup olmadığını kontrol eden fonksiyon
// Eğer eşitse, bulunan indeksi (ilk elemanın indeksi) döndürür, eşit değilse 0 döndürür.
int toplamBulucu(int* dizi, int uzunluk, int aranacakSayi) {
    for (int i = 0; i < uzunluk - 1; i++) {
        if (dizi[i] + dizi[i + 1] == aranacakSayi) {
            return i;
        }
    }

    return -1; // Eğer eşit olan bir çift bulunamazsa, -1 döndürülür.
}

int main() {
    int dizi[11] = {0, 1, 3, 7, 2, 5, 9, 7, 5, 1, 6};

    // toplamBulucu fonksiyonunu kullanarak aranan sayının toplamını oluşturan indeksi kontrol etme
    int indeks = toplamBulucu(dizi, 11, 7);

    if (indeks == -1)
        printf("Girilen sayinin toplami yok...\n");
    else
        printf("Girilen sayi, dizi[%d] + dizi[%d] 'nin toplamina eşittir...\n", indeks, indeks + 1);

    return 0;
}
