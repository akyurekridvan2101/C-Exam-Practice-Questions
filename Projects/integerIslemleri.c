/*main fonksiyonunda kullanıcıdan 2 integer değer alın ve fonksiyon prototipi void update(int *a,int *b) olacak şekilde bir
fonksiyon yazın.Bu fonksiyon içinde a'yı a+b ile b'yi |a-b| ile değiştirip main fonksiyonunda a+b ve |a-b| yi yazdırın.*/

#include <stdio.h>

/*Dikkat bu soruda yedek_a ve yedek_b değişkenlerini kullanmamızın sebebi
  *a ve *b değişkenlerini değiştirmemek için. Çünkü *a ve *b değişkenleri
  main fonksiyonunda tanımlanmıştır ve bu değişkenlerin değerlerini değiştirirsek
  main fonksiyonunda tanımlanan değişkenlerin değerlerini de değiştirmiş oluruz.
  Bu yüzden yedek_a ve yedek_b değişkenlerini kullanarak *a ve *b değişkenlerinin
  değerlerini değiştirdik.
  
  MESELA
  
  void update(int *a,int *b) {
    
    *a = (*a + *b); mesela burada a'nın değerini a ve b'nin toplamı olarak değiştirdik
    ama alt satırlardaki if bloklarında a'nın ilk değerine ihtiyacımız var bunun için bu kod yanlıştır yedekleme işlemi yapılmalıdır.
    
    if (*a - *b < 0)
        *b = -(*a - *b);
    else
        *b = (*a - *b);
      
}

böyle bir kod yanlıştır çünkü başta *a ve *b değişkenlerinin değerlerini değiştiriyoruz*/

void update(int *a,int *b) {
    
    int yedek_a = *a , yedek_b = *b;
    
    *a = (yedek_a + yedek_b);
    
    if (yedek_a - yedek_b < 0)
        *b = -(yedek_a - yedek_b);
    else
        *b = (yedek_a - yedek_b);
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;//pa ve pb pointerları a ve b değişkenlerinin adreslerini tutuyor.
    
    scanf("%d %d", pa, pb);//a ve b değişkenlerinin değerlerini scanf ile pointerları kullanarak aldık.
    update(&a, &b);//Burada a ve b değişkenlerinin değerlerini değiştirmek için a ve b değişkenlerinin adreslerini gönderdik.
    printf("%d\n%d", a, b);

//Aslında bu örnekte pointer tanımlamaya hiç gerek yok &a ve &b gönderilerek halledilir.

    return 0;
}