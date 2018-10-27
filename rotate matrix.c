#include<stdio.h>
main(){
int i,j,n,temp,arr[10][10];
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        temp=arr[i][j];
        arr[i][j]=arr[n-1-j][i];
        arr[n-1-j][i]=arr[n-1-i][n-1-j];
        arr[n-1-i][n-1-j]=arr[j][n-1-i];
        arr[j][n-1-i]=temp;
    }

}
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
 printf("%d",arr[i][j]);
}
printf("\n");
}
}








