#include<stdio.h>
int main()
{
    int time , velocity;
    scanf("%d%d", &time ,&velocity);

    float way = (time*velocity) / 12.0 ;
     printf("%.3f", way);
     printf("\n");
     return 0;


}
