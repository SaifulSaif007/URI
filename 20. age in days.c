#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);

    i=n/365;
    j=(n%365)/30;
    k=((n%365)%30);

    printf("%d ano(s)\n",i);
    printf("%d mes(es)\n",j);
    printf("%d dia(s)\n",k);


    return 0;
}
