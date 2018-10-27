#include<stdio.h>
#include<string.h>
main(){
char s[10];
int i,w,j,count=0;
gets(s);
for(i=0;i<strlen(s);i++){
     if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
        count=count+1;
        for(j=i;j<strlen(s)-1;j++){
            s[j]=s[j+1];
        }
     }
}
for(i=0;i<(strlen(s)-count);i++){
    printf("%c",s[i]);
}


}
