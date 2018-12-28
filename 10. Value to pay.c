#include<stdio.h>
int main()
{
    int m,n,m1,n1;
    float j ,j1;


    scanf("%d %d %f",&m,&n,&j);

    scanf("%d %d %f",&m1,&n1,&j1);


    printf("VALOR A PAGAR: R$ %.2lf",  ((n*j) + (n1*j1)) );
    printf("\n");
    return 0;

}
