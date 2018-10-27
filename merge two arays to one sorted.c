#include<stdio.h>
main(){
int i,n,j,arr[10],arr1[10],b[20];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(j=0;j<n;j++){
    scanf("%d",&arr1[j]);
}
int k=0,c=0,e=0;
while(k<n && c<n){
    if(arr[k]<arr1[c]){
        b[e]=arr[k];
        k++; e++;

    }
    else{
        b[e]=arr1[c];
        c++;  e++;

    }
}
while(k<n){
    b[e++]=arr[k++];
}
while(c<n){
    b[e++]=arr1[c++];
}
for(int y=0;y<(2*n);y++){
    printf("\n%d",b[y]);
}

}

