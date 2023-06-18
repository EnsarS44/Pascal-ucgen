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
        printf("Please enter a T value:");
        scanf("%d", &t_degeri);
        kontrol = satirHesapla(&t_degeri, dizi);
        if(kontrol==1){
            printf("c\n Number of lines calculated as %d!\n", dizi[1]);
            ucgenciz(dizi);

        }else {
         printf("T value is not suitable for drawing pascal's triangle.\n");

        }

        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &devam);
        if(devam == 'n' || devam == 'N'){

            printf("Checked out...");
            break;
            }
    }
    return 0;
}
