#include<stdio.h>
#include<string.h>
main(){
char str[40];
gets(str);
int i,n=strlen(str);
for(i=0;i<n;i++){
    printf("%c",str[n-1-i]);
}

}
