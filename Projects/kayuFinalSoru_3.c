/*Aşağıda belirtilen gereksinimlere uygun olarak, C programını yazınız.

a) struct Tarih adında bir veri yapısı tanımlayınız. Bu yapı, bir yıl (yil), bir ay (ay) ve bir gün (gun) bilgisini içermelidir.
b) Kullanıcıdan yıl, ay ve gün bilgilerini alan bir main fonksiyonu yazınız. Alınan bilgileri, struct Tarih türündeki bir
değişkene atayınız.

c) tarihArttir adında bir fonksiyon yazınız. Bu fonksiyon, parametre olarak aldığı bir struct Tarih değişkenini bir gün ileri
taşımalıdır. Fonksiyonun işleyişi aşağıdaki gibidir:

    Günü bir arttırın.
    Eğer gün, ayın uzunluğunu aşıyorsa, günü sıfırlayın ve bir sonraki aya geçin.
    Eğer ay 12'yi aşıyorsa, ayı sıfırlayın ve bir sonraki yıla geçin.
    Artık yılı kontrol edin ve şubat ayını güncelleyin.

d) main fonksiyonunda, kullanıcının girdiği tarihi bir gün ileri taşımak için tarihArttir fonksiyonunu kullanın.
Sonucu ekrana yazdırın.*/

#include <stdio.h>
#include <stdlib.h>

struct Tarih {
    int yil;
    int ay;
    int gun;
};

void tarihArttir(struct Tarih* ornek) {
    int ayUzunluk[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    ornek->gun += 1;

    if (ornek->gun > ayUzunluk[ornek->ay]) {
        ornek->gun = 1;
        ornek->ay += 1;
        if (ornek->ay > 12) {
            ornek->ay = 1;
            ornek->yil += 1;
        }

        if ((ornek->yil % 4 == 0 && ornek->yil % 100 != 0) || (ornek->yil % 400 == 0)) {
            ayUzunluk[2] = 29;
        } else {
            ayUzunluk[2] = 28;
        }
    }
}

int main() {
    struct Tarih ornek;

    printf("Yil: ");
    scanf("%d", &ornek.yil);

    printf("Ay: ");
    scanf("%d", &ornek.ay);

    printf("Gun: ");
    scanf("%d", &ornek.gun);

    tarihArttir(&ornek);

    printf("Girilen Tarih: %d-%02d-%02d\n", ornek.yil, ornek.ay, ornek.gun);

    return 0;
}
