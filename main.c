#include <stdio.h>
#include <stdlib.h>



int satirHesapla(int* p, int dizi[]) {
    int i;
    for(i=1; i<*p; i++){
            if(*p==(i*(i+1))/2){
                dizi[0]=*p;
                dizi[1]=i;
                return 1;
            }


    }

    return 0;
}
void ucgenciz(int dizi[]){

    int i,j;


     for(i=1; i<=dizi[1] ;i++)
        {
            for(j=1; j<=dizi[1]-i ;j++)
            {
                printf(" ");
            }
            for(;j<=dizi[1];j++)
            {
                printf("X ");
            }
            printf("\n");
        }
}

int main() {
    int dizi[2];
    int kontrol;
    char devam = 'Y';
    int t_degeri;
    while (devam == 'Y' || devam == 'y') {
        printf("Lutfen bir T degeriniz:");
        scanf("%d", &t_degeri);
        kontrol = satirHesapla(&t_degeri, dizi);
        if(kontrol==1){
            printf("T degeri pascal ucgeni cizmek icin uygundur.\n Satir sayisi %d oalrak hesaplanmistir!\n", dizi[1]);
            ucgenciz(dizi);

        }else {
         printf("T degeri pascal ucgeni cizmek icin uygun degildir.\n");

        }

        printf("Devam etmek istiyor musunuz? (Y/N): ");
        scanf(" %c", &devam);
        if(devam == 'n' || devam == 'N'){

            printf("Cikis yapildi...");
            break;
            }
    }
    return 0;
}
