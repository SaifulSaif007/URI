#include <stdio.h>

int main() {

    float a;
    scanf("%f",&a);

    if(a==0 || a==25)
       printf("Intervalo [0,25]");

    if(a>0 && a<25)
        printf("Intervalo(0,25]");
    if(a==50)
       printf("Intervalo [25,50]");
     if(a>25 && a<50)
        printf("Intervalo (25,50]");
    if(a==75)
        printf("Intervalo [50,75]");
     if (a>50 && a<75)
        printf("Intervalo (50,75]");

    //if(a==75)
      //  printf("Intervlao [75,100]");
    if(a>75 && a<=100)
        printf("Intervalo (75,100]");

    if(a<0 || a>100)
            printf("Fora de intervalo");

    printf("\n");
    return 0;
}
