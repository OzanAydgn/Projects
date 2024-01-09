/* İstediğiniz kişi sayısının Uzunluk - Ağırlık ortalamasını hesaplama.
   Calculating the average length - Weight of the number of people you want. */
   
#include <stdio.h>

int main()
{
    int i,kisi_sayisi;
    float boy,kg,ortalamaboy,ortalamakg;

    printf("Kac kisinin Uzunluk - Agirlik ortalamasini hesaplamak istiyorsunuz?: ");
    scanf("%d", &kisi_sayisi);
    
       for (i=1;i<=kisi_sayisi;i++){
    printf("%d. Kisinin Boyunu Giriniz: ", i);
    scanf("%f", &boy);
    printf("%d. Kisinin Kilosunu Giriniz: ", i);
    scanf("%f", &kg);
    
    ortalamakg= ortalamakg+kg;
    ortalamaboy= ortalamaboy+boy;
     }
    
    ortalamakg = ortalamakg / kisi_sayisi;
    ortalamaboy =ortalamaboy / kisi_sayisi;
        
    printf("Ortalama Boy: %.1f \n", ortalamaboy);
    printf("Ortalama Kilo: %.1f", ortalamakg);

    return 0;
}