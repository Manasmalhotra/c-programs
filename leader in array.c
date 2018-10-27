#include<stdio.h>
main(){
int arr[20],i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[j]>=arr[i]){
            break;
        }
        if(j==n-1){
            printf("\n%d is a leader",arr[i]);
        }

}
}
printf("\n%d is a leader",arr[n-1]);




}
