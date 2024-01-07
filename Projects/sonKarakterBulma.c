/*char sonKarakterBulma(char *str); fonksiyon prototipini bularak kullanıcı tarafından girilen bir cümle,kelime veya karakter
topluluğunda son karakteri bulan programı yazınız.*/

#include <stdio.h>
#include <stdlib.h>

// Fonksiyon: sonKarakterBulma
// Açıklama: Verilen karakter dizisinin son karakterini bulur.
// Parametreler:
//   - str: Karakter dizisi
// Dönüş değeri: Karakter dizisinin son karakteri
char sonKarakterBulma(char *str) {

    int i = 0;
    while (1) {
        if (str[i] == '\0') {
            // Eğer null karakter bulunduysa, bir önceki karakteri döndür
            return str[i-1];
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Bir string giriniz: ");
    
    // Kullanıcıdan stringi alırken %[^\n] format belirleyicisi kullanıldı,
    // bu şekilde kullanıcı boşluk dahil her türlü karakteri girebilir.
    scanf("%[^\n]", str);

    // sonKarakterBulma fonksiyonu çağrılarak son karakteri bulunur ve ekrana yazdırılır.
    printf("Son karakter: %c", sonKarakterBulma(str));

    return 0;
}
