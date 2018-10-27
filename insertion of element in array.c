#include<stdio.h>
#include<stdlib.h>
main(){
int n,i,key,loc,arr[40];
printf("Enter the size of array");
scanf("%d",&n);
printf("\nEnter the number you want to insert");
scanf("%d",&key);
printf("\nEnter the location at which number is to be inserted");
scanf("%d",&loc);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=n-1;i>=loc-1;i--){
    arr[i+1]=arr[i];
}
arr[loc-1]=key;
for(i=0;i<n+1;i++){
    printf(" %d",arr[i]);
}
//replace loc-1 by loc for index wise position.











}
