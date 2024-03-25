#include <stdio.h>

// Fonksiyonların prototipleri
void printBitPattern(void* data, int byteSize);
void selectType();

// Global değişkenler
int integerType;
float floatType;
double doubleType;
long longType;
char charType;

int main() {
    // Veri türünü seçme işlevini çağır
    selectType();
    return 0;
}

// Bellek üzerindeki bit desenini yazdırmak için fonksiyon
void printBitPattern(void* data, int byteSize) {
    // Verinin bellekteki byte'larına erişmek için bir karakter işaretçisi kullanılır
    char* bytePointer = (char*)(data);
    
    // Her bir byte'ın bit deseni için bir dizi
    int bits[byteSize][8];

    // Tüm byte'ları işleyen döngü
    for (int i = (byteSize - 1); i >= 0; i--) {
        // Her bir biti elde etmek için iç içe döngü
        for (int j = 7, k = 0; j >= 0; j--, k++) {
            bits[i][k] = ((*(int*)bytePointer >> j) & 1);
        }
        bytePointer++;
    }

    // Bit desenlerini ekrana yazdırmak için döngü
    for (int i = 0; i < byteSize; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d", bits[i][j]);
        }
        printf("  ");
    }
}

// Veri türünü seçme işlevi
void selectType() {
    int size;

    // Kullanıcıya veri türlerini gösteren bir menü
    printf(
        "int --> 1\n"   // 4 bytes
        "float --> 2\n" // 4 bytes
        "double --> 3\n"// 8 bytes
        "long --> 4\n"  // 8 bytes
        "char --> 5\n\n"// 1 byte
        "ENTER A NUMBER: "
    );

    // Kullanıcının seçimini almak
    scanf("%d", &size);

    // Kullanıcının seçtiği türü işlemek için switch case
    switch (size) {
    case 1:
        printf("ENTER INTEGER: ");
        // Kullanıcının girdiği tamsayı değerini al
        scanf(" %d", &integerType);
        // Bit desenini yazdırmak için fonksiyonu çağır
        printBitPattern(&integerType, 4);
        break;

    case 2:
        printf("ENTER FLOAT: ");
        // Kullanıcının girdiği ondalıklı sayı değerini al
        scanf(" %f", &floatType);
        // Bit desenini yazdırmak için fonksiyonu çağır
        printBitPattern(&floatType, 4);
        break;

    case 3:
        printf("ENTER DOUBLE: ");
        // Kullanıcının girdiği çift hassasiyetli ondalıklı sayı değerini al
        scanf(" %lf\n", &doubleType);
        // Bit desenini yazdırmak için fonksiyonu çağır
        printBitPattern(&doubleType, 8);
        break;

    case 4:
        printf("ENTER LONG: ");
        // Kullanıcının girdiği uzun tamsayı değerini al
        scanf(" %ld\n\n", &longType);
        // Bit desenini yazdırmak için fonksiyonu çağır
        printBitPattern(&longType, 8);
        break;

    default:
        printf("ENTER CHAR: ");
        // Kullanıcının girdiği karakter değerini al
        scanf(" %c", &charType);
        // Bit desenini yazdırmak için fonksiyonu çağır
        printBitPattern(&charType, 1);
        break;
    }
}
