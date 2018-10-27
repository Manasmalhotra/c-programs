main()
{
    int a,b,c,D;
    float x1,x2;
    printf("Enter coeffcient of x^2, x and constant term ");
    scanf("%d %d %d" ,&a,&b,&c);
    D=b*b-4*a*c;
    if(-1000>a || a>1000 || a==0 ||-1000>b || b>1000 ||-1000>c || c>1000)
                 exit(1);
    if(D<0)
        printf("Both roots are imaginary");
    if(D==0){
        printf("Both roots are equal");
        x1= -b/(2.0*a) ;
        printf("root is %f",x1);
    }
    if(D>0) {
         printf("Roots are real and distinct") ;
         x1=(-b+sqrt(D))/(2*a);
         x2= (-b-sqrt(D))/(2*a);
         printf("\nRoots are: %f,%f",x1,x2);
    }
}





