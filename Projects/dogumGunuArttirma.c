/*İçinde kullanıcının doğum gününü , ayını sayı olarak mesela 1. ay ve doğum yılını saklayan bir struct oluşturun ve main fonksiyonu
içinde kullanıcıdan bu bilgileri scanf ile alın.Sonra da yılı , ayı , günü 1 arttırarak ama bu sefer ayı string şeklinde
ekrana yazdırın.*/

#include <stdio.h>
#include <stdlib.h>

struct dogumGunu {
    
    int gun;
    int ay;
    int yil;

};


int main() {

    struct dogumGunu bir;

    char aylar[12][20] = {"ocak" , "subat" , "mart" , "nisan" , "mayis" , "haziran" , "temmuz" , "agustos" , "eylul" , "ekim" , "kasim" , "aralik"};

    printf("Gunu giriniz : ");
    scanf("%d",&bir.gun);

    printf("\nAyi giriniz(Sayiyla) : ");
    scanf("%d",&bir.ay);

    printf("\nyili giriniz : ");
    scanf("%d",&bir.yil);

    printf("\n\ngun = %d",bir.gun + 1);

    if (bir.ay == 12)//kullanıcı 12 girerse 1. aya yani ocak ayına gider.Bu bir istisna olduğu için if bloğuna aldık
        printf("\n\nay = %s",aylar[0]);
    else
        printf("\n\nay = %s",aylar[bir.ay]);

    printf("\n\nyil = %d",bir.yil + 1);

}