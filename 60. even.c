#include<stdio.h>
int main()
{
float array[6];
int i,n=0;
float m=0;
for(i=0;i<6;i++){
    scanf("%f",&array[i]);
}
for(i=0;i<6;i++){
   if (array[i]>=0){n=n+1;m=m+array[i];}
}
printf("%d valores positivos\n",n);
printf("%.2f valores positivos",m/n);
printf("\n");
return 0;

}
