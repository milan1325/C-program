# include<stdio.h>

int main()
{
    int basic_salary,service_tax;
    float da,hra,net_salary,gross_salary,pf;
    printf("Enter the basic salary of an employee : ");
    scanf("%d",&basic_salary);
    //  DA = 110% of basic salary
    da = (basic_salary*110)/100;
    //  HRA = 20% of basic salary
    hra = (basic_salary*20)/100;
    // net salary = sum of basic salary,da and hra
    net_salary = basic_salary + da + hra;
    // PF = 12.5% of basic salary
    pf = (basic_salary*12.5)/100;
    service_tax = 200; // fixed
    gross_salary = net_salary - pf - service_tax;
    printf("Employee gross salary is : %.3f",gross_salary);
    return 0;
}