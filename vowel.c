#include<stdio.h>
#include<conio.h>
main()
{
char ch;
printf("Enter a character ");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("%c is a vowel",ch);
break;
 default:
        printf("%c is not a vowel",ch);
break;
}
}
