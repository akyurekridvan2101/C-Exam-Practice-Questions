/*void guncelleme(struct person *p , int boyut); ve void personel_ekleme(struct person *p , int boyut); prototipinde 2 tane 
fonksiyon oluştur ve ad , soyad ve telefon bilgilerini içeren bir struct oluştur.Bunları kullanarak küçük bir rehber uygulaması yap.*/

#include <stdio.h>
#include <stdlib.h>

struct person {

    char ad[20];
    char soyad[20];
    char telefon[20];
};

void personel_ekleme(struct person *p , int boyut);
void yazdirma(struct person *p , int boyut);
void guncelleme(struct person *p , int boyut);


int main() {

    struct person p[5];

    personel_ekleme(p , 5);

    while (1) {

        int sec;

        printf("\nyazdirma ---> 1 , guncelleme ---> 2 , cikis ---> 3 : ");
        scanf("%d",&sec);

        if (sec == 1) {
            yazdirma(p , 5);
            continue;
        }

        else if (sec == 2) {
            guncelleme(p , 5);
            continue;
        }

        else if (sec == 3)
            break;

        printf("\nyanlis sayi girdiniz...");   
        
    }

    return 0;
}



//burada struct person* türünden bir struct person dizisini return edecek bir fonksiyon oluşturduk.
void personel_ekleme(struct person *p , int boyut) {

    for(int i = 0;i < boyut;i++) {

        printf("\n%d. kisinin adini giriniz : ",i+1);
        scanf("%s",p[i].ad);
        printf("\n%d. kisinin soyadini giriniz : ",i+1);
        scanf("%s",p[i].soyad);
        printf("\n%d. kisinin telefonunu giriniz : ",i+1);
        scanf("%s",p[i].telefon);
    }

}



void yazdirma(struct person *p , int boyut) {

    int a;

    while (1) {

        printf("\n\nKacinci kisinin bilgilerini ogrenmek istiyorsunuz ? : ");
        scanf("%d",&a);

        if (a<=boyut && a>=1)
            break;
        printf("\n%d. kisi bulunmuyor",a);
    }
    
    printf("\n\n****************%d. kisinin bilgileri****************",a);
    printf("\nAD = %s\nSOYAD = %s\nTEL NO = %s\n\n" , p[a - 1].ad , p[a - 1].soyad , p[a - 1].telefon);

}

void guncelleme(struct person *p , int boyut) {

    int kacinciKisi;

    while (1) {

        printf("\n\nKacinci kisinin bilgilerini guncellemek istiyorsunuz ? : ");
        scanf("%d",&kacinciKisi);

        if (kacinciKisi<=boyut && kacinciKisi>=1)
            break;
        printf("\n%d. kisi bulunmuyor",kacinciKisi);
    }

    int secenek;
    int cikis;

    do {
        
        printf("\n\nDEGISTIRMEK ISTEDIGINIZ SEYI YAZINIZ 1 ---> AD , 2 ---> SOYAD , 3 ---> TEL NO : ");
        scanf("%d",&secenek);

        switch (secenek) {
            
            case 1:
                printf("AD : ");
                scanf("%s",p[kacinciKisi - 1].ad);//string olduğu için & kullanmadık
                break;

            case 2:
                printf("SOYAD : ");
                scanf("%s",p[kacinciKisi - 1].soyad);
                break;

            case 3:
                printf("TEL NO : ");
                scanf("%s",p[kacinciKisi - 1].telefon);
                break;

            default:
                printf("\nYanlis tuslama yaptiniz...\n");
                break;
        }

        printf("\ncikis yapmak ---> 1 , bu kullanicinin bilgilerini duzenlemeye devam etmek ---> 2 : ");
        scanf("%d",&cikis);

        if (cikis == 1)
            break;
        

    } while (1);


}
