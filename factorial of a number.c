#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,i,arr[100],fact=1;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        fact=fact*i;

    }


    printf("The factorial of number is:%d",fact);
}
