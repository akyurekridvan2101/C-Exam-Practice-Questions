/*
*Uzunluk bilgisini parametre olarak alan bir fonksiyon yazınız.
*Eğer uzunluk değeri 10'dan küçük ise 1'den o sayıya kadar olan tüm sayıları yanyana yazdırmalıdır.
*Eğer 10'dan büyük veya eşit ise ekranda uzunluk değeri adetince 8 değeri göstermelidir.
*Fonksiyonun büyük sayılar için de çözüm üretmesi gerekmektedir.

ÖRNEĞİN:
3--->123
5--->12345
12--->888888888888 => 12 TANE 8*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon prototipi
void uzunlukHesapla(int);

int main() {
    // Kullanıcıdan uzunluk değerini alma
    int uzunluk;
    printf("Uzunluk degerini giriniz: ");
    scanf("%d", &uzunluk);

    // Fonksiyonu çağırma
    uzunlukHesapla(uzunluk);

    return 0;
}

// Uzunluğa göre işlem yapan fonksiyon
void uzunlukHesapla(int uzunluk) {
    // Uzunluk 10'dan küçükse
    if (uzunluk < 10) {
        // Uzunluğa kadar olan sayıları yazdırma
        for (int i = 1; i <= uzunluk; i++) {
            printf("%d", i);
        }
    }
    // Uzunluk 10 veya daha büyükse
    else {
        // Uzunluğa kadar 8 sayısını yazdırma
        for (int i = 1; i <= uzunluk; i++) {
            printf("8");
        }
    }
}
