//write a function which will multiply three numbers and call it by reference
#include<stdio.h>
void product(int *a,int *b,int *c)
{
    int product=*a * *b * *c;
    printf("%d",product);
}
void main()
{
    int a=2;
    int b=2;
    int c=2;
    product(&a,&b,&c);
}