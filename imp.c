#include<stdio.h>
#include<conio.h>
main()
{
    float d=1,s=0,fact=1,sum=0;
     int n,x,arr[40],i;
     printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Calculation options\n");
printf("1) Addition \n");
printf("2) Multiplication\n");
printf("3) Subtraction\n");
printf("4) Division\n");
printf("Please enter your choice\n");
scanf("%d",&x);
switch(x)
{
case 1:
    for(i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    printf("-------------------\n");
    printf("The sum is:%f",sum);
    break;
case 2:
    for(i=0;i<n;i++)
    {
        fact=fact*arr[i];
    }
     printf("-------------------\n");
    printf("The product is:%f",fact);
    break;

case 3:
    for(i=0;i<n;i++)
    {
        s=  (arr[i]-s);
    }
     printf("-------------------\n");
    printf("The subtraction:%f",s);
    break;

case 4:
    for(i=0;i<n;i++)
    {
        d= arr[i]/d;
    }
     printf("-------------------\n");
    printf("The division is:%f",d);
    break;
default:
    printf("wrong input");

}





}
