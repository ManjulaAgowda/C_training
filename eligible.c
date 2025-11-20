#include<stdio.h>
void main()
{
    int age;
    float height;
    printf("Enter the age:");
    scanf("%d",&age);
    printf("Enter the height:");
    scanf("%f",&height);
    if(age>=12&&height>4.5)
    {
        printf("Eligible ");

    }
    else
    {
        printf("NOT eligible");

    
    }

}