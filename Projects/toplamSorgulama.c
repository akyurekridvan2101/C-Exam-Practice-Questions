/*Küçükten büyüğe sıralı bir diziyi ve bir değeri parametre olarak alan fonksiyonu yazınız.Fonksiyon bu dizide herhangi iki elemanın
toplamı parametre olarak gelen değere eşit ise geriye 1 değerini döndürmeli ve elemanların indekslerini parametre olarak geçmelidir.
Diğer durumlarda,0 değerini döndürmeli ve indeks değeri olarak 0 değerini parametre olarak geçmelidir.

fonksiyon prototipi => int fonk(int* dizi , int size , int deger , int* indeks1 , int* indeks2)*/

#include <stdio.h>
#include <stdlib.h>

int fonk(int* dizi , int size , int deger , int* indeks1 , int* indeks2);


int main() {

    int dizi[10] = {1,2,3,4,5,6,7,8,9,10};
    int indeks1;
    int indeks2;
    int sorgulanacak;

    printf("Sorgulanacak sayiyi giriniz: ");
    scanf("%d",&sorgulanacak);

    if (fonk(dizi,10,sorgulanacak,&indeks1,&indeks2) == 1)
        printf("Dizideki %d sayisinin toplami %d ve %d indekslerindeki sayilarin toplamidir.",sorgulanacak,indeks1,indeks2);
    else
        printf("Dizideki %d sayisinin toplami hicbir sayinin toplamina esit degildir.",sorgulanacak);

}



int fonk(int* dizi , int size , int deger , int* indeks1 , int* indeks2) {

    for (int i = 0; i < size; i++) {

        for (int j = i+1; j < size; j++) {

            if (dizi[i] + dizi[j] == deger) {

                *indeks1 = i;
                *indeks2 = j;
                return 1;
            }
        }
    }

    return 0;
}
