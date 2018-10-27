#include<stdio.h>
#include<conio.h>
main(){
int n,i,a=-1,b=1,c;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++){
  c=a+b;
  printf("\n%d%",c);
  a=b;
  b=c;
}

}
