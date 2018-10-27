#include<stdio.h>
main(){
int A[40],n,i;
printf("Enter the size of array");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    scanf("%d",&A[i]);
}
bubble_sort(A,n);
for(i=0;i<=n-1;i++)
{
    printf("\n%d", A[i]);
}
getch();

}
void bubble_sort(int A[],int N){
int round,i,temp;
for(round=1;round<=N-1;round++){
    for(i=0;i<=N-1-round;i++){
    if (A[i]>A[i+1]){

    temp=A[i];
    A[i]=A[i+1];
    A[i+1]=temp;





    }
}

}
}

