# include<stdio.h>

int main()
{
    double num;
    printf("Enter number you want to print the last number : ");
    scanf("%d", &num);
    double sum = (num*num+num)/2;
    printf("first %d natural number sum is : %d",num,sum);
    return 0;
}