#include<stdio.h>
main(){
int i,j,r,c,arr[10][10],N=0,temp,b[100],sum=0,s=0;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
        if(i==j){
            s=arr[i][j]+s;
        }
        b[N]=arr[i][j];
        N++;
    }
}
for(int round=1;round<=N-1;round++){
    for(i=0;i<=N-1-round;i++){
    if (b[i]>b[i+1]){

    temp=b[i];
    b[i]=b[i+1];
    b[i+1]=temp;
    }
    }
}
for(i=0;i<N;i++){
    printf("\n%d",b[i]);
}
for(i=N-1;i>N-6;i--){
    sum=sum+b[i];
}
printf("\n The sum of 5 largest elements of matrix is %d",sum);
printf("\n%d",s);
}
