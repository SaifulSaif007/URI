#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X==1)
        printf("Total: R$ %.2f",4.00*Y);
    if(X==2)
        printf("Total: R$ %.2f",4.50*Y);
    if(X==3)
        printf("Total: R$ %.2f", 5.00*Y);
    if(X==4)
        printf("Total: R$ %.2f",2.00*Y);
    if(X==5)
        printf("Total: R$ %.2f",1.50*Y);

    return 0;
}
