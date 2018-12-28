#include<stdio.h>
int main()
{
   int i,j,k,n;
   scanf("%d",&n);

     i = n/3600;
     j = (n%3600) /60;
     k = ((n%3600) %60);

     printf("%d:%d:%d",i,j,k);
     return 0;


}
