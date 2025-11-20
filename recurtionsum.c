#include<stdio.h>
int sumdigi_recursion(int n)
{
    if(n==0)
    return 0;
    int digit=n%10;
    return digit+sumdigi_recursion(n/10);
}
void main()
{
    int n=362;
    printf("%d ",sumdigi_recursion(n));
}