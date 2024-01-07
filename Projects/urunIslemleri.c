#include <stdio.h>
#include <stdlib.h>

struct urunIslemleri {

    char urunAdi[30];
    int urunFiyati;
    int miktari;
    int toplamFiyat;

};



void urunEkle(struct urunIslemleri* urunler, int urunSayisi) {

    for (int i = 0; i < urunSayisi; i++) {

        printf("\n%d. urunun adini giriniz: ", i + 1);
        scanf("%s", urunler[i].urunAdi);

        printf("\n%d. urunun fiyatini giriniz: ", i + 1);
        scanf("%d", &urunler[i].urunFiyati);

        printf("\n%d. urunun miktarini giriniz: ", i + 1);
        scanf("%d", &urunler[i].miktari);

        urunler[i].toplamFiyat = urunler[i].urunFiyati * urunler[i].miktari;

        printf("\n\n");
    }
}



void urunListele(struct urunIslemleri* urunler, int urunSayisi) {

    for (int i = 0; i < urunSayisi; i++) {

        printf("\n%d. urunun adi: %s\n", i + 1, urunler[i].urunAdi);
        printf("\n%d. urunun fiyati: %d\n", i + 1, urunler[i].urunFiyati);
        printf("\n%d. urunun miktari: %d\n", i + 1, urunler[i].miktari);
        printf("\n%d. urunun toplam fiyati: %d\n", i + 1, urunler[i].toplamFiyat);

        printf("\n\n");
    }
}

int main() {

    struct urunIslemleri urunler[5];

    urunEkle(urunler, 5);
    printf("\n*******************URUNLER*******************\n");
    urunListele(urunler, 5);

}
