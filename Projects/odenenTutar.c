/*Bu program ürünün adını,fiyatını ve miktarını okuyacak ve ödenen tutarı hesaplayacak en sonda da ekrana basacak.
fonksiyon prototipi void odenenTutar(float fiyat , int miktar); olacak şekilde soruyu çözünüz.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
void odenenTutar(char urunAdi[20] , float fiyat , int miktar);

int main() {
    // Kullanıcıdan fiyat ve miktar bilgilerini alma
    float fiyat;
    int miktar;
    char urunAdi[20];

    printf("Urunun adini giriniz: ");
    scanf("%s", urunAdi);

    printf("Urunun fiyatini giriniz: ");
    scanf("%f", &fiyat);

    printf("Urunun miktarini giriniz: ");
    scanf("%d", &miktar);

    // Fonksiyonu çağırma
    odenenTutar(urunAdi,fiyat, miktar);

    return 0;
}

// Ürün miktarına göre ödenen tutarı hesaplayan fonksiyon
void odenenTutar(char urunAdi[20] , float  fiyat , int miktar) {
    // Ödenen tutarı hesapla
    float odenenTutar = fiyat * miktar;//implicit type casting yapar.

    // Ödenen tutarı ekrana yazdır
    printf("%s urununun odenen tutari: %.2f", urunAdi, odenenTutar);
}
