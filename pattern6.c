#include<stdio.h>
main(){
int i,j;
for(i=1;i<=7;i++){
    for(j=1;j<=7;j++){
        if((j>=5-i && j<=i+3) || (i-3<=j && j<=11-i)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
     printf("\n");
}






}
