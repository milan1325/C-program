# include<stdio.h>

int main()
{
    
    float value,foot,meter;
    printf("Enter the Value in inch to convet to feet and meter : ");
    scanf("%f",&value);
    // 1 feet = 12 inch
    foot = value/12;
    //  1 meter = 39.37 inch
    meter = value/39.37;
    printf("%f inch = %f foot\n",value,foot);
    printf("%f inch = %f meter",value,meter);
    return 0;
}