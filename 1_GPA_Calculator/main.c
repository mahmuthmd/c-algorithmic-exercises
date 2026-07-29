#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "orthesap.h"

int main(){
    float ToplamPuan = 0;
    float ToplamKatsayi = 0;
    struct Ders liste[10];
    char DersAdi[30];
    char HarfNotu[5];
    float kredi;
    int sayac = 0;
    char evethayir = 'a';
    
    printf("--Ortalama hesaplama uygulamasina hosgeldiniz--\n");
    do{
        printf("Dersin adini giriniz:");
        fgets(DersAdi, 30, stdin);
        DersAdi[strcspn(DersAdi, "\n")] = '\0';
        printf("Dersin kredisini giriniz:");
        scanf(" %f", &kredi);
        printf("Aldiginiz Harf Notunu giriniz:");
        scanf(" %s", HarfNotu);
        DersEkle(liste, &sayac, DersAdi, HarfNotu, &kredi);
        sayac++;
        printf("Yeni Ders ekleyecek misiniz?(e/h?):");
        scanf(" %c",&evethayir);
        while(getchar() != '\n');
    } while(evethayir == 'e');
    for(int i = 0; i<10 ; i++){
        if(i==sayac) break;
        ToplamKatsayi += liste[i].Kredi;
        ToplamPuan += liste[i].Puan * liste[i].Kredi;
    }
    float OrtalamaSonuc = ToplamPuan / ToplamKatsayi;
    printf("Sene sonu basari ortalamaniz\n%.2f\n",OrtalamaSonuc);
    printf("Ders Bilgilerinizi gormeye ne dersinnn:(e/h?):");
    scanf(" %c",&evethayir);
    if(evethayir == 'e'){
        DersleriYazdir(liste, sayac);
    }
    
}
