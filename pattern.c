#include<stdio.h>
#include<stdlib.h>
main(){
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=9;j++){
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
