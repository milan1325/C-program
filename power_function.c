# include<stdio.h>

// int power(int m)
// {
//     int result = m*m;
//     return result;
    
// }

int power2(int m,int n)
{
    int p=1;
    for (int i = 1; i <=n; i++)
    {
        p = p*m;
    }
    return p;
    
}

int main()
{
    int m,n;
    printf("Enter the value of m and n to calculate m to the power n : ");
    scanf("%d %d",&m,&n);
    // if (n==2)
    // {
    //     printf("%d",power(m));
    // }
    // else
    // {
    printf("%d",power2(m,n));
    // }
    
    
    
    return 0;
}