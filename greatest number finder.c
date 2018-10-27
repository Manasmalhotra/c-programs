#include<stdio.h>
#include<conio.h>
#include<math.h>
float main()
{

float a,b,c;
printf("Enter the value of a ");
scanf("%f",&a);
printf("Enter value of b ");
scanf("%f",&b);
printf("Enter value of c ");
scanf("%f",&c);
if (a>b & a>c)
printf("a is the greatest number") ;
if (b>c & b>a)
printf("b is the gratest number");
if(c>b & c>a)
printf("c is the greatest numbeer");
}
