/*Bir diziyi ve uzunluğunu parametre olarak alan fonksiyon yazınız.Fonksiyon eğer gelen dizi palindrom(soldan ve sağdan okunuşu
aynı olan) ise 1 değilse 0 değerini döndürmelidir.

ÖRNEĞİN:
121--->1
987789--->1
124282--->0*/

#include <stdio.h>
#include <stdlib.h>

int palindrom(int *, int);

int main() {

    int dizi[10];//Dinamik bellek ile dizi boyutunu kullanıcıdan da alabilirdik ama o üst seviyeye girer kafaları karıştırmayalım.

    for (int i = 0; i < 10; i++) {

        printf("%d. elemani giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }
    
    if (palindrom(dizi, 10) == 1) 
        printf("\n\nPalindromdur...");
    else 
        printf("\n\nPalindrom degildir...");
    

    return 0;
}


int palindrom(int *dizi, int uzunluk) {

    int palindromMu = 1;

    for (int i = 0; i < uzunluk / 2; i++) {/*uzunluk/2 yazmamızın nedeni tek sayıda elemanlı dizilerde ortadaki mesela 7/2 
int/int olduğu için 3.5 değil de 3 olur ve biz baştan 3 ileri sondan 3 geri gelip polindromluğu kontrol ederiz.Uzunluk çift
sayı olursa da 8/2=4 olur ve biz baştan 4 ileri sondan 4 geri gelip polindromluğu kontrol ederiz.*/

        if (dizi[i] != dizi[uzunluk - i - 1]) {//Dizinin baştan ve sondan gelinilen sayılardan 1 tanesi bile eşit değilse palindrom değildir.
            palindromMu = 0;//palindromMu=0 olur ve döngüden çıkılır.Döngü dışındaki if-else yapısında da palindromMu=0 olduğu için else bloğu çalışır.
            break;
        }
    }

    return palindromMu;//palindromMu=0 ise 0 değerini 1 ise 1 değerini döndürür.
}
