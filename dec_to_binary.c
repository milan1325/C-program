# include<stdio.h>

int main()
{
    int n,rem;
    int a[20];
    int i=0;

    printf("Enter number you want to convert the decimal to binary : ");
    scanf("%d",&n);
    if (n==0)
        {
            printf("0");
        }
    while (n)
    {
        rem = n%2;
        n = n/2;
        a[i] = rem;
        i++;
        // printf("%d",a[i]);
    }
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }
    
    return 0;
}