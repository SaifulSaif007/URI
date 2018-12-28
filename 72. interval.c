#include<stdio.h>
int main()
{
    int n,num;
    int in = 0, out = 0;
    int i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&num);

        if(num >= 10 && num <=20){
            in = in + 1;
        }
        else
            {
            out = out + 1;}
    }
    printf("%d in\n",in);
    printf("%d out",out);

    return 0;
}
