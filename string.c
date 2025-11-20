#include<stdio.h>
#include<string.h>
void main()
{
    char name[7]="MANJULA";
    char new[6]="HELLO";
    printf("%c",name[7]);
    printf("length of string is %d\n",strlen (name));
    strcat(new,name);//string concotination
    printf("%s",new);
}//strstr used to search a character in string