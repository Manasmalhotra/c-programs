main()
{
    int a,b,t;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf(" after swapping a=%d, b=%d",a,b);
}
