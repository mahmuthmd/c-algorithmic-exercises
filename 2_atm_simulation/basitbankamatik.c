#include <stdio.h>
int main(){
    int Bakiye = 1000;
    int islem = 8;
    int ekleme = 0;
    int cikarma = 0;
    do{
        printf("Bakiyenizi goruntulemek icin 1'e\nPara yatirmak icin 2'ye\nPara cekmek icin 3'e\nUygulamadan cikmak icin 4'e basiniz:");
        scanf("%d", &islem);
        if(islem==1){
            printf("Bakiyeniz %d TL'dir. Baska hangi islemi yapmak istersiniz:\n",Bakiye);
        }
        else if(islem==2){
            printf("Yatirmak istediginiz miktari giriniz:\n");
            scanf("%d", &ekleme);
            Bakiye = Bakiye + ekleme;
            printf("Yeni Bakiyeniz %d TL. Baska hangi islemi yapmak istersiniz:\n",Bakiye);
        }
        else if(islem==3){
            printf("Cekmek istediginiz miktari giriniz:\n");
            scanf("%d", &cikarma);
            if(cikarma>Bakiye){
                printf("Hesabinizda bu kadar para bulunmamaktadir! Baska hangi islemi yapmak istersiniz:\n");
            }
            else{
            Bakiye = Bakiye - cikarma;
            printf("Yeni Bakiyeniz %d TL. Baska hangi islemi yapmak istersiniz:\n",Bakiye);
            }
        }
    
    }
    while(islem != 4);

}