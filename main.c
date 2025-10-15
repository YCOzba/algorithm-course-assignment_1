#include <stdio.h> // Standart kütüphane

int main() {
    // Toplama işleminde kullanılacak matematiksel sayıları tutmak için integer değişkenler.
    int sayi1, sayi2, toplam;
    // Kullanıcıdan alınacak girdileri ASCII karakterleri olarak saklamak için char değişkenler.
    char girilen1, girilen2;

    //  Birinci Girdiyi Alma ve Doğrulama
    printf("İlk rakamı giriniz: ");
    // scanf formatı, önceki girdiden kalabilecek Enter gibi
    // boşluk karakterlerini temizler ve sadece tek bir karakter okur.
    scanf(" %c", &girilen1);

    // Girilen karakterin '0' ile '9' arasında bir rakam olup olmadığını kontrol ediyoruz.
    // Bu kontrol, ASCII tablosundaki karakterlerin sıralı yapısından faydalanır.
    // Harfler, semboller veya negatif işareti bu kontrole takılır.
    if (girilen1 < '0' || girilen1 > '9') {
        printf("Girdiginiz '%c' karakteri bir rakam degildir!\n", girilen1);
        return 1; // Hata durumunda programı sonlandırır (Başarısızlık kodu).
    }

    // İkinci Girdiyi Alma ve Doğrulama
    printf("İkinci rakamı giriniz: ");
    scanf(" %c", &girilen2);

    // ikinci girdi kontrolü.
    if (girilen2 < '0' || girilen2 > '9') {
        printf("Girdiginiz '%c' karakteri bir rakam degildir!\n", girilen2);
        return 1; // Hata durumunda programı sonlandırır.
    }

    // Hesaplama Bölümü
    // Karakterleri matematiksel sayılara dönüştürüyoruz.
    sayi1 = girilen1 - '0';
    sayi2 = girilen2 - '0';


    toplam = sayi1 + sayi2;

    
    //  sonucun tek haneli olup olmadığını kontrol ediyoruz.
    if (toplam > 9) {
        printf("HATA: Sonuc (%d) tek haneli olmalidir! Sistem siniri asildi.\n", toplam);
    } else {
        printf("Sonucunuz: %d\n", toplam);
    }

    return 0; // Program bitişi.
}