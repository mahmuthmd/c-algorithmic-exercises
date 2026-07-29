#include <stdio.h> 


int main(){
    int mainsayi = 0;
    int toplam, kalan, final, sonucfinal = 0;
    printf("En fazla 8 basamak olmak uzere ikili sayi sisteminde decimale donusmesini istediginiz sayiyi giriniz:\n");
    scanf("%d", &mainsayi);
    int carpan = 1;
    for(int i=0; i<8; i++){
        kalan= mainsayi % 10;
        if(kalan == 1){
            final=kalan*carpan;
            sonucfinal= sonucfinal + final;
        }
        carpan=carpan*2;
        mainsayi=mainsayi/10;
    }
    printf("Girdiginiz sayinin decimal karsiligi:%d",sonucfinal);
    
    
//Bu program binary sisteminde girdiğiniz sayıyı decimal cinsine çevirir.
}