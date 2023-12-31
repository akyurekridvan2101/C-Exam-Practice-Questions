/*kullanıcıdan  alınacak 2*2 matrisin değerleri ile void determinantCalc(int*); prototipli fonksiyon sayesinde determinantını bul ve
ekrana yazdır.*/

#include <stdio.h>

void determinantCalc(int (*matris)[2]);

int main() {
    
    int matris[2][2];
    printf("2x2 matrisin degerlerini giriniz:\n");

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 2; j++) {

            printf("%d. satir - %d. sutun : " , i+1 , j+1);
            scanf("%d" , &matris[i][j]);
        }
    }

    determinantCalc(matris);

    return 0;
}

void determinantCalc(int (*matris)[2]) {

    int det = 0;

    det = (matris[0][0] * matris[1][1]) - (matris[0][1] * matris[1][0]);

    printf("\n\nMatrisin determinanti : %d", det);
}


/*int (*matris)[2] ifadesi, bir işaretçinin iki boyutlu bir diziyi işaret etmesi durumunu tanımlar.
Bu ifadeyi daha iyi anlamak için pointer aritmetiğini ele alalım.

İki boyutlu bir diziyi işaret eden bir işaretçi kullanırken, C dilinde yapılan işaretçi aritmetiği biraz farklıdır.
Bu tür bir işaretçinin, matrisin her satırının başlangıcını işaret etmesi gerekmektedir. (*matris)[2] ifadesindeki parantez kullanımı,
işaretçinin iki boyutlu bir diziyi işaret ettiğini belirtir.

Aşağıda, int (*matris)[2] ifadesi ile kullanılan pointer aritmetiğini açıklayan bir örnek var:


#include <stdio.h>

void determinantCalc(int (*matris)[2]);

int main() {
    int matris[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    determinantCalc(matris);

    return 0;
}

void determinantCalc(int (*matris)[2]) {
    printf("Değerler: %d, %d\n", matris[0][0], matris[0][1]);  // 1, 2
    printf("Değerler: %d, %d\n", matris[1][0], matris[1][1]);  // 3, 4
    printf("Değerler: %d, %d\n", matris[2][0], matris[2][1]);  // 5, 6

    // Pointer aritmetiği kullanarak bir sonraki satıra geçme
    matris++;  // matris[1] adresine geçer

    printf("\nSonraki satır değerleri:\n");
    printf("Değerler: %d, %d\n", matris[0][0], matris[0][1]);  // 3, 4
    printf("Değerler: %d, %d\n", matris[1][0], matris[1][1]);  // 5, 6
}



Bu örnekte, int (*matris)[2] ifadesi ile birinci boyutu 2 olan bir matrisin başlangıcını işaret eden bir 
işaretçi oluşturuluyor. Ardından, pointer aritmetiği kullanılarak matrisin her satırının başlangıcına gidilebiliyor. 
matris++ ifadesi ile pointer, bir sonraki satırın başlangıcına geçer.

3 boyutlu birşey olsaydı parametreyi int (*matris)[2][2] veya int (*matris)[][2] gibi yapmamız gerekirdi çünkü
parametre verirken sadece en sondakini boş bırakma hakkımız var.Tabi dinamik bellek ile 3 boyutlu dizi tanımlarken direk
int ***matris yaparız.*/