#include <stdio.h>
#include <conio.h>

void kotakkotak(){
        int pilih,kotak,i=1,a=1,b,c=1;
        printf("masukan panjang kotak : ");
        scanf("%i",&kotak);

        while(i<=kotak){
        printf("*");
        i++;
        }//atas
            while(a<=kotak-2){
            printf("\n*");
            a++;
            b=1;
                while(b<=kotak-2){
                printf(" ");
                b++;
                }//while space

            printf("*");
            }//while kotak tengah
        i=1;
        printf("\n");

        while(i<=kotak){
        printf("*");
        i++;
        }//bawah
     }//void kotak

void segitigasiku(){
int n,i,j,s;
printf("Masukan n: ");
            scanf("%d",&n);

            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("* ");
                }

                printf("\n");
            }
    }

void segitigakaki(){
        int n,i,j,s;
        printf("Masukan n: ");
            scanf("%d",&n);
            for(i = 1; i <= n; i++)
            {

                for(s = i; s < n; s++)
                {
                    printf(" ");
                }

                for(j = 1; j <= (2 * i - 1); j++)
                {
                    printf("*");
                }

                printf("\n");
            }
}

void belahketupat(){
        int n,i,j,s;
        printf("Masukan n: ");
            scanf("%d",&n);
            for(i = 0; i <= n; i++)
            {
                for(s = n; s > i; s--)
                printf(" ");
                for(j=0; j<i; j++)
                printf("* ");
                printf("\n");
            }
            for(i = 1; i < n; i++)
            {
                for(s = 0; s < i; s++)
                printf(" ");
                for(j = n; j > i; j--)
                printf("* ");

            printf("\n");
            }
}




int main(void){
        int pilihan,x;
        x=1;
        while(x == 1){

        printf("masukan pilihan");
        printf("\n1. Perulangan kotak\n2. Perulangan segitiga siku\n3. Perulangan segitiga samakaki\n4. Perulangan Belahkrtupat\n5. Exit\n\n");
        printf("masukan pilihan anda : ");
        scanf("%i",&pilihan);

            if(pilihan==1){

                kotakkotak();
                printf("\nuntuk melanjutkan klik 1 : ");
                scanf("%i",&x);


            }else if(pilihan==2){

                segitigasiku();
                printf("\nuntuk melanjutkan klik 1 : ");
                scanf("%i",&x);


            }else if(pilihan==3){

                segitigakaki();
                printf("\nuntuk melanjutkan klik 1 : ");
                scanf("%i",&x);



            }else if(pilihan==4){

                belahketupat();
                printf("untuk melanjutkan klik 1 : ");
                scanf("%i",&x);


            }else if(pilihan==5){
                printf("exit");
                x=0;

            }


}
}
