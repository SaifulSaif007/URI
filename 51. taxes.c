#include<stdio.h>
int main()
{
    float salary;
    scanf("%f",&salary);

    if(salary>0 && salary<=2000){
        printf("Isento");
        }

     else if(salary>2000 && salary<=3000){
            printf("R$ %.2f", ((salary-2000)*.08));
        }
    else if(salary>3000 && salary<=4500){
            printf("R$ %.2f",((salary-2000)*.18));
        }
   else {
            printf("R$ %.2f",((salary-2000)*.28));
        }
return 0;
}
