#include<stdio.h>
#include<stdlib.h>
main(){
int i,j;
for(i=5;i>=1;i--){
    for(j=9;j>=1;j--){
        if(5-i<j && j<5+i){
           printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
}

