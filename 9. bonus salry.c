#include<stdio.h>
#include<string.h>

int main()
{
    char str;
    scanf("%s",&str);

    double salary;
    scanf("%lf", &salary);

    double sold;
    scanf("%lf", &sold);

    double total;
    total = sold * .15;

    printf("TOTAL = R$ %.2lf" , total+salary);
    printf("\n");
    return 0;

}
