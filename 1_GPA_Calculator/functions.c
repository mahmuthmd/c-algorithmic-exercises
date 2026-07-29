#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "orthesap.h"

float harfinota(char harfnotu[5]){
    char kucukharfnotu[5];
    float sonuc = 0;
    for(int i = 0; i<3 ; i++){
        kucukharfnotu[i] = tolower(harfnotu[i]);
    }
    if(!strcmp("aa",kucukharfnotu)){sonuc = 4;}
    else if(!strcmp("ba",kucukharfnotu)){sonuc = 3.5;}
    else if(!strcmp("bb",kucukharfnotu)){sonuc = 3;}
    else if(!strcmp("cb",kucukharfnotu)){sonuc = 2.5;}
    else if(!strcmp("cc",kucukharfnotu)){sonuc = 2;}
    else{sonuc = 0;}
    return sonuc;
};
void DersEkle(struct Ders liste[],int *sayac,char* isim,char *harfnotu,float *kredi){
    strcpy(liste[*sayac].Name,isim);
    strcpy(liste[*sayac].HarfNotu,harfnotu);
    liste[*sayac].Kredi = *kredi;
    float puan = harfinota(harfnotu);
    liste[*sayac].Puan = puan;
}
void DersleriYazdir(struct Ders liste[],int sayac){
    for(int i = 0; i<sayac;i++){
        printf("--%s--\n",liste[i].Name);
        printf("Harf Notu: %s\n",liste[i].HarfNotu);
        printf("Dersin Etki Katsayisi %.2f ve Etki Puani %.2f\n",liste[i].Kredi,liste[i].Puan);
    }
}