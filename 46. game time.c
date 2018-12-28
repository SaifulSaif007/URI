#include<stdio.h>
int main()
{
    int m,n;
    int time;
    scanf("%d %d",&m,&n);
    if(m<n)
    time = n-m;

    if(m>n)
    time =24-(m-n);

    if(m==n)
        time = 24 -(m-n);
    printf("O JOGO DUROU %d HORA(S)",time);

    return 0;
}
