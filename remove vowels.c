#include <stdio.h>
main(){
char s[10];
int i;
gets(s);
for(i=0;i<strlen(s);i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
        s[i]="&";
    }
}
puts(s);




}
