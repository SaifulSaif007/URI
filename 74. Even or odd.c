#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&j);
    for(i=0;i<j;i++){
    scanf("%d",&n);

     if(n>0) {
            if((n%2)==0){
        printf("EVEN POSITIVE\n");
    }
    else {
        printf("ODD POSITIVE\n");
    }
     }
    else if(n<0){
             if((n%2)==0){
        printf("EVEN NEGATIVE\n");
    }
    else {
        printf("ODD NEGATIVE\n");
    }
    }
    else{
        printf("NULL\n");
}
    }
    printf("\n");
    return 0;
}
