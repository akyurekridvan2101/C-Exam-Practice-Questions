/*void cumleUzunluguBulma(char *cumle , int *uzunluk);   fonksiyon prototipini kullanarak girilen cümlenin uzunluğunu bulunuz.*/


#include <stdio.h>
#include <stdlib.h>

// Fonksiyon: cumleUzunluguBulma
// Açıklama: Verilen bir karakter dizisinin uzunluğunu hesaplar ve sonucu referans olarak verilen bir değişkene atar.
// Parametreler:
//   - cumle: Karakter dizisi
//   - uzunluk: Uzunluk değerini saklamak için referans alınan bir değişken
// Dönüş değeri: Yok (void)
void cumleUzunluguBulma(char *cumle, int *uzunluk) {

    int i = 0;

    // '\0' (null karakter) bulunana kadar karakter dizisini tarar
    while (cumle[i] != '\0') {
        i++;
    }

    // Hesaplanan uzunluğu referans alınan değişkene atar
    *uzunluk = i;
}

int main() {

    char cumle[100];
    int uzunluk;

    // Kullanıcıdan bir cümle alınır (%[^\n] format belirleyicisi ile boşluk dahil her türlü karakter alınabilir)
    printf("Cumle giriniz: ");
    scanf("%[^\n]", cumle);

    // cumleUzunluguBulma fonksiyonu çağrılarak cümlenin uzunluğu hesaplanır
    // ve sonuç uzunluk değişkenine atılır.
    cumleUzunluguBulma(cumle, &uzunluk);

    // Hesaplanan uzunluğu ekrana yazdırır.
    printf("\n\nCumlenin uzunlugu: %d", uzunluk);

    return 0;
}
