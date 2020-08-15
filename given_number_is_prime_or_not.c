# include<stdio.h>

int main()
{
    int num;
    printf("Enter the number to check this number id prime or not : ");
    scanf("%d",&num);
    int count = 0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
        

    return 0;
}