#include<stdio.h>
#include<string.h>
void main()
{
    char des[100]="WE ARE SUPER KIDS";
    char se[100]="SUPER";
    if(((strstr(des,se))!=NULL))
    {
    printf("found");
    }
    else
    {
        printf("not found");

    }

}// output is found
//becouse super is their in we are super kids 