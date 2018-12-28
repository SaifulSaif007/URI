#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(b>=a+c)
        printf("NAO FORMA TRIANGULO\n");
    if(c*c == b*b + a*a)
        printf("TRIANGULO RETANGULO\n");
    if(c*c >b*b +a*a)
        printf("TRIANGULO OBTUSANGULO\n");
    if(c*c <b*b +a*a)
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && a==c && c==b)
        printf("TRIANGULO EQUILATERO\n");
    if( (a==b || b==c || a==c ) && ((a!=b)|| (b!=c) || (a!=c)) )
        printf("TRIANGULO ISOSCELES\n");

return 0;
}
