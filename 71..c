#include <stdio.h>

int main() {
 int i,j=0;
 int m,n;
 scanf("%d %d",&m,&n);

 for(i=m-1;i>n;i--){
     if((i%2) !=0)
        {j=j+i;}
 }
printf("%d",j);
    return 0;
}
