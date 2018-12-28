#include<stdio.h>
int main()
{
    int H1,M1,H2,M2;
    int sec,i=0;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)){
    if((H1==0) && (M1 ==0) && (H2==0) && (M2==0)){
        break;
    }
/*
    if((H1 < H2 ) && (M1 <= M2)){

    i = (H2-H1)*60 + (M2-M1);

    }
    else if((H1<H2)&& (M1>=M2)){
       i = (H2-H1)*60 + (M2-M1);
    }

else if((H1==H2)&& (M1<M2)){
    i =  M2-M1;
}
else if((H1==H2) && (M1>M2)){
    i = 24*60 + 60-(M2-M1);
}
else if((H1>H2) && (M1>M2)){
    i =((24-H1)+H2)*60 + (M2-M1);
}
else if((H1==H2)&& (M1<M2)){
    i = ((24-H1)+H2)*60 + (M2-M1);  ///dekhte hobe
}
*/

    printf("%d",i);

    }
    return 0;

}
