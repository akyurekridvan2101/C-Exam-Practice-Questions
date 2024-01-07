/*void cumleUzunluguBulma(char *cumle, int uzunluk); prototipini kullanarak girilen bir cümleyi tersine çeviren programı yazınız.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon: cumleUzunluguBulma
// Açıklama: Verilen bir karakter dizisinin ters çevrilmiş halini hesaplar.
// Parametreler:
//   - cumle: Karakter dizisi
//   - uzunluk: Dizinin uzunluğu
// Dönüş değeri: Yok (void)
void cumleUzunluguBulma(char *cumle, int uzunluk) {

    char yedekleme;

    // Diziyi baştan ve sondan ortaya kadar iterleyerek karakterleri değiştirir.
    for (int i = 0; i < uzunluk / 2; i++) {
        
        yedekleme = cumle[i];
        cumle[i] = cumle[uzunluk - i - 1];
        cumle[uzunluk - i - 1] = yedekleme;
    }
}

int main() {

    char cumle[100];
    int uzunluk = 0;

    // Kullanıcıdan bir cümle alınır (%[^\n] format belirleyicisi ile boşluk dahil her türlü karakter alınabilir)
    printf("Cumle giriniz: ");
    scanf("%[^\n]", cumle);

    // Dizinin uzunluğu hesaplanır
    while (cumle[uzunluk] != '\0') {
        uzunluk++;
    }

    // cumleUzunluguBulma fonksiyonu çağrılarak cümlenin ters çevrilmiş hali elde edilir.
    cumleUzunluguBulma(cumle, uzunluk);

    // Ters çevrilmiş cümleyi ekrana yazdırır.
    printf("\n\nCumlenin tersi: %s", cumle);

    return 0;
}
