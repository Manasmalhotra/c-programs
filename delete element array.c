#include<stdio.h>
#include<stdlib.h>
main(){
int n,i,arr[40],loc,j,z;
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Please specify the location of element you want delete");
scanf("%d",&loc);
for(i=loc;i<=n-1;i++){
    arr[i]=arr[i+1];
}
for(j=0;j<n-1;j++){
    z=arr[j];
    printf("\n%d",z);
}






}
