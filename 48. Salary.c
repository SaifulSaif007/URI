#include <stdio.h>
int main()
{
    float m;
    int n;

    scanf("%f",&m);


    if(m>=0 && m <=400.00)
       {n = 15;}
    else if(m>=400.01 && m<=800)
        {n=12;}
    else if(m>=800.01 && m<=1200)
        {n=10;}
    else if(m>=1200.01 && m<=2000.00)
        {n=7;}
    else
        {n=4;}
        	printf("Novo salario: %.2f\n",   (m+(m/100)*n));
            printf("Reajuste ganho: %.2f\n", (m/100)*n );
            printf("Em percentual: %d %%\n",   n);
    return 0;

}
