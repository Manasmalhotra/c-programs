#include<stdio.h>
#include<string.h>
main(){
char s[40];
int i,c=0,j;
gets(s);
for(i=0;s[i];i++){
    if(s[i]!=' '){
        s[c]=s[i];
        c++;
    }
}
s[c]='\0';
printf("\n%s",s);

}
