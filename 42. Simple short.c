#include<stdio.h>
int main()
{
    int i,j,temp;
     int array1[3];
     int array2[3];
     for(i=0;i<3;i++){
        scanf("%d",&array1[i]);
     }
    for(i=0;i<3;i++){
        array2[i] = array1[i];
    }

     for(i=0;i<2;i++){
        for(j=1;j<3;j++){
            if(array2[j]<array2[i]){
                temp = array2[j];
                array2[j] =array2[i];
                array2[i] = temp;
        }
 }
     }
 for(i=0;i<3;i++){
    printf("%d\n",array2[i]);
 }

printf("\n");

for(j=0;j<3;j++){
    printf("%d\n",array1[j]);
}

 return 0;
}

