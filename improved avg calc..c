#include<stdio.h>
#include<stdlib.h>
float main()
{

float a,b,c,d,sum,avg;
printf("Enter the value of a");
scanf("%f",&a);
printf("Enter the value of b");
scanf("%f",&b);
printf("Enter the value of c");
scanf("%f",&c);
printf("Enter the value of d");
scanf("%f",&d);
sum=a+b+c+d;
avg=sum/4;
printf("Average is: %f",avg);
return 0;
}
