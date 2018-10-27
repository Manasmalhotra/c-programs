#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
float p,t,r,si,ci;
printf("Enter principal amount ");
scanf("%f",&p);
printf("Enter the time period ");
scanf("%f",&t);
printf("Enter the rate charged ");
scanf("%f", &r);
si= (p*r*t)/100;
ci=  p*(pow((1+r/100),t)-1);
printf("---------------------------------------\n");
printf("Simple interest is: %f\n",si);
printf("Compound interest is:%f",ci);
getch();
return 0;
}

