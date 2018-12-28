#include<stdio.h>
int main()
{
    int n=0,j = 0,i;
    scanf("%d",&n);

    for(i=0; ;i++){
     j = n*i + 2;
     if(j>10000){
        break;
     }
        printf("%d\n",j);

    }
    return 0;
}
