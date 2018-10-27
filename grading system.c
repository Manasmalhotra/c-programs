#include<stdio.h>
#include<conio.h>
#include<math.h>
float main()
{
    float s1,s2,s3,s4,s5,total,per;
    printf("Enter the marks of s1,s2,s3,s4,s5 ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total= s1+s2+s3+s4+s5 ;
    per= (total*0.20);
    printf("------------------------------------------------------------\n");
    printf("Percentage is: %f\n",per);
    if (per>90) {
        printf("CONGRATULATIONS!!!! Grade obtained by the student is: A\n");
    }
    else  if (per>80 && per<90){
        printf("Grade obtained by the student is B");
     }
      else if(per>60 && per<80){
        printf("Grade obtained by the student is C");
      }

      else
        printf("Grade obtained by the student is D");






}








