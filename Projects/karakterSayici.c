/*fonksiyon prototipi void karakterSayici(char *karakterimiz , char aranacak_karakter) olacak şekilde 
scanf ile girilen "CÜMLEDE" yine scanf ile girilen karakterden kaç tane bulunduğunu ekrana basan c kodunu yazınız.*/

#include <stdio.h>
#include <stdlib.h>

void karakterSayici(char *karakterimiz , char aranacak_karakter , int karakter_uzunlugu);

int main() {

    char karakterimiz[200];
    char aranacak_karakter;

    printf("Karakter dizisini giriniz: ");
    scanf("%200[^\n]*%*s" , karakterimiz);
/*%[^\n]: Bu formatlama kodu, yeni satır karakteri (\n) hariç, herhangi bir karakteri okumak için kullanılır. Yani, 
bir satır boyunca olan tüm karakterleri okur.
*: Bu, eşleşen değeri (okunan karakterleri) bir değişkenin içine atlamadan (ignore ederek) okuma işlemi gerçekleştirir. 
Yani, %[^\n] ile eşleşen değeri okur, ancak bir değişkene atama yapmaz.

%s: Bu, bir kelimeyi (boşluk olmayan bir karakter dizisini) okumak için kullanılır. Ancak bu durumda, * işareti nedeniyle 
gerçekte bu değeri bir değişkene atamaz, sadece okuma işlemi yapar.*/

    printf("Aranacak karakteri giriniz: ");
    scanf(" %c" , &aranacak_karakter);

    karakterSayici(karakterimiz , aranacak_karakter , 200);

}


void karakterSayici(char *karakterimiz , char aranacak_karakter , int karakter_uzunlugu) {

    int sayac = 0;

    for (int i = 0; i < karakter_uzunlugu; i++) {

        if (karakterimiz[i]  == aranacak_karakter)
            sayac++;
        
    }

    printf("%c karakteri %d kere bulundu." , aranacak_karakter , sayac);
    

}