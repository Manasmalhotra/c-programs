#include<stdio.h>
main(){
int i,n,j,arr[10],temp,b[10],v=0;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(j=1;j<n;j++){
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
}

