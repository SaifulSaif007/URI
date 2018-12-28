#include<stdio.h>
int main()
{
    int n,s;
    float h;
    scanf("%d",&n);

    scanf("%d",&s);
    scanf("%f",&h);
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2f",s*h);
    printf("\n");
    return 0;
}
