#include<stdio.h>
#include<string.h>
main(){
char s[40];
gets(s);
int j=strlen(s),i=0;
for(i=0;i<j;i++){
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
}
puts(s);






}
