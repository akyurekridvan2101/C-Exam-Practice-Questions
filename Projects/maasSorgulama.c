/*personel adında bir struct oluşturun içinde ad , soyad , görevi , tcsi , maaşı ve yaşı bulunsun.Sonra main fonksiyonu içinde
2 personel içinde maaşı 50.000 tlden fazla olan kişi veya kişilerin tüm bilgilerini yazdır.50.000 tlden fazla alan yoksa ekrana
personel yok yazdır.*/

#include <stdio.h>
#include <stdlib.h>

struct personel {

    char adi[50];
    char soyadi[50];
    char gorevi[50];
    int tc;
    float maas;
    int yasi;
};


int main() {

    struct personel personeller[2];

    for (int i = 0; i < 2; i++) {

        printf("\n**********************%d. personel**********************\n\n" , i + 1);

        printf("personel adi : ");
        scanf(" %s" , personeller[i].adi);

        printf("\npersonel soyadi : ");
        scanf(" %s" , personeller[i].soyadi);

        printf("\npersonel gorevi : ");
        scanf(" %s" , personeller[i].gorevi);

        printf("\npersonel TC si : ");
        scanf(" %d" , &personeller[i].tc);

        printf("\npersonel maas : ");
        scanf(" %f" , &personeller[i].maas);

        printf("\npersonel yasi : ");
        scanf(" %d" , &personeller[i].yasi);
        
    }

    int kontrol = 0;

    //maaşları 50k dan yuksek olanların adı tcsi ve maaşını yazdır...
    for (int i = 0; i < 2; i++) {

        if (personeller[i].maas > 50000) {
            
            printf("\n\n********************50.000 TL'den yuksek alan personel listesi********************n");
            printf("\n\n\nAD : %s\nTC : %d\nMAAS : %.2f" , personeller[i].adi , personeller[i].tc , personeller[i].maas);
            kontrol = 1;//personel varsa kontrol 1 olacak ve artık personel yok yazdırmayacak.
        }
    }

    if (kontrol == 0) {//Personel yoksa kontrol 0 kalacak ve bu if bloğu çalışacak.
        
        printf("\n\nPERSONEL YOK...");
    }
    
    
    return 0;
}
