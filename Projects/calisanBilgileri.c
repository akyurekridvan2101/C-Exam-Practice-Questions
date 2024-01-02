/*Çalışanın ayrıntılarını kabul eden ve bunları struct kullanarak görüntüleyen C programını yazınız.
Çalışana ait bilgiler: Çalışan kimliği , Adı , Unvanı , Departmanı ve Maaşından oluşur.*/

#include <stdio.h>
#include <stdlib.h>


struct calisanBilgileri {

    int calisanKimligi;//0 ile başlayan bir TC kimliği olmadığı için int olarak tanımladım.Yoksa char olarak da tanımlayabilirdik.
    char adi[20];
    char unvani[20];
    char departmani[20];
    int maasi;
};


int main() {


    struct calisanBilgileri calisan1 = {123456789, "Ahmet", "Muhendis", "Yazilim", 5000};

    printf("Calisan kimligi: %d\n", calisan1.calisanKimligi);
    printf("Calisan adi: %s\n", calisan1.adi);
    printf("Calisan unvani: %s\n", calisan1.unvani);
    printf("Calisan departmani: %s\n", calisan1.departmani);
    printf("Calisan maasi: %d\n", calisan1.maasi);
    

    return 0;
}