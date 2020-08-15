# include<stdio.h>
# include<math.h>

int find_order(long int n){
    long int digit=0,rem;
    while (n>0)
    {
        rem = n%10;
        digit++;
        n = n/10;
    }
    return digit;
}

int main()
{
    long int n,sum,order,rem;
    
    printf("Enter a number : ");
    scanf("%d",&n);
    long int copy_n = n;
    order = find_order(n);
    // printf("%d\n\n",order);
    sum = 0;
    

    while (n>0)
    {
        rem = n%10;
        sum = sum + pow(rem,order);
        n = n/10;
        // printf("%d\n",sum);
    }
    if (sum == copy_n)
    {
        printf("The number %d is an armstrong",copy_n);
    }
    else
    {
        printf("The number %d is not an armstrong",copy_n);
    }
    
    
    return 0;
}