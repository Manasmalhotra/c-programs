#include<stdio.h>
main(){
int i,arr[10],a[30]={1,2,3,4,5},n,m,j,c=0,loc;
printf("Enter the size and elements of array you want to insert in given array");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter the location where you want to insert array");
scanf("%d",&loc);
for(i=4;i>=loc-1;i--){
    a[i+n]=a[i];
}
for(j=loc-1;j<(loc-1+n);j++){
    a[j]=arr[c];
    c++;
}
for(i=0;i<(5+n);i++){
    printf("\n%d",a[i]);
}
}
