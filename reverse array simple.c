#include<stdio.h>
#include<stdlib.h>
main(){
int n,arr[40],i;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    printf(" %d",arr[n-1-i]);
}



}
