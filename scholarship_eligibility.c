#include<stdio.h>

int main()
{
    int per, income;

    printf("Enter percentage\n");
    scanf("%d",&per);

    printf("Enter income\n");
    scanf("%d",&income);

    if(per>=90 && income<200000)
    {
        printf("Full Scholarship");
    }
    else if(per>=75)
    {
        printf("Half Scholarship");
    }
    else
    {
        printf("No Scholarship");
    }

    return 0;
}
