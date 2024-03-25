# Bit Deseni Yazıcı

Bu program, kullanıcının girdiği farklı türlerdeki verilerin bellek üzerindeki bit desenini görselleştirmek amacıyla tasarlanmıştır.

## Nasıl Kullanılır?

Program, kullanıcıya farklı veri türlerini seçme olanağı sunar. Kullanıcıdan bir tür seçtikten sonra, ilgili türde bir değer girmesi istenir. Ardından, bu değerin bellek üzerindeki bit deseni ekrana yazdırılır.

## Desteklenen Veri Tipleri

1. **int (4 byte):** Bellekte 4 byte (32 bit) alan kaplar.
2. **float (4 byte):** 32 bitlik kayan nokta sayısını temsil eder.
3. **double (8 byte):** 64 bitlik kayan nokta sayısını temsil eder.
4. **long (8 byte):** Bellekte 8 byte (64 bit) alan kaplar.
5. **char (1 byte):** 8 bitlik bir karakteri temsil eder.

## Kod Açıklamaları

Programın çalışma mantığı şu adımları içerir:

- Kullanıcıdan veri türü seçimi alınır.
- Kullanıcıdan ilgili türde bir değer alınır.
- Alınan değerin bellek üzerindeki bit deseni ekrana yazdırılır.

# C Programı Çalışma Aşamaları Açıklaması

## Başlangıç

1. `#include <stdio.h>` ifadesi ile standart giriş/çıkış kütüphanesi eklenir.

2. `void printBitPattern(void* data, int byteSize);` ve `void selectType();` fonksiyonlarının prototipleri tanımlanır.

3. Global değişkenler tanımlanır:
    - `int integerType;`
    - `float floatType;`
    - `double doubleType;`
    - `long longType;`
    - `char charType;`

## main Fonksiyonu

4. `main` fonksiyonu başlar.

5. `selectType();` fonksiyonu çağrılarak kullanıcıdan veri türü seçimi alınır.

## selectType Fonksiyonu

6. `selectType` fonksiyonu başlar.

7. Kullanıcıya veri türlerini gösteren bir menü yazdırılır.

8. Kullanıcının seçimini almak için `scanf` kullanılarak bir sayı alınır (`size`).

9. Kullanıcının seçtiği türü işlemek için `switch` ifadesi kullanılır.

    - **Case 1 (int):**
        - Kullanıcıdan bir tamsayı (`integerType`) alınır.
        - `printBitPattern` fonksiyonu çağrılarak tamsayının bit deseni yazdırılır.

    - **Case 2 (float):**
        - Kullanıcıdan bir ondalıklı sayı (`floatType`) alınır.
        - `printBitPattern` fonksiyonu çağrılarak ondalıklı sayının bit deseni yazdırılır.

    - **Case 3 (double):**
        - Kullanıcıdan bir çift hassasiyetli ondalıklı sayı (`doubleType`) alınır.
        - `printBitPattern` fonksiyonu çağrılarak çift hassasiyetli ondalıklı sayının bit deseni yazdırılır.

    - **Case 4 (long):**
        - Kullanıcıdan bir uzun tamsayı (`longType`) alınır.
        - `printBitPattern` fonksiyonu çağrılarak uzun tamsayının bit deseni yazdırılır.

    - **Default Case (char):**
        - Kullanıcıdan bir karakter (`charType`) alınır.
        - `printBitPattern` fonksiyonu çağrılarak karakterin bit deseni yazdırılır.

10. `selectType` fonksiyonu tamamlanır.

## printBitPattern Fonksiyonu

11. `printBitPattern` fonksiyonu başlar.

12. Bir karakter işaretçisi (`bytePointer`) kullanılarak verinin bellekteki byte'larına erişilir.

13. Her bir byte'ın bit deseni için bir dizi (`bits[byteSize][8]`) oluşturulur.

14. Tüm byte'ları işleyen bir döngü başlatılır.

15. İç içe döngülerle her bir bit elde edilir ve `bits` dizisine kaydedilir.

16. Bit desenleri ekrana yazdırılır.

17. `printBitPattern` fonksiyonu tamamlanır.

## Programın Sonu

18. Programın çalışması tamamlanır.
