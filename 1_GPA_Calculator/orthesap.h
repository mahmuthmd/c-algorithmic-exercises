#ifndef ORTHESAP
#define ORTHESAP
struct Ders{
    char Name[30];
    float Kredi;
    char HarfNotu[5];
    float Puan;

};
float harfinota(char harfnotu[5]);
void DersEkle(struct Ders liste[],int *sayac,char* isim,char *harfnotu,float *kredi);
void DersleriYazdir(struct Ders liste[],int sayac);

#endif