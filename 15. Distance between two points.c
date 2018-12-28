#include<stdio.h>
int main()
{
    double x1 , y1;
    double x2 , y2;

    scanf("%lf %lf", &x1 ,&y1);
    scanf("%lf %lf" ,&x2 , &y2);

    double Dist = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    Dist = sqrt(Dist);
    printf("%.4lf",Dist);
    printf("\n");
    return 0;

}
