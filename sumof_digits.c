#include<stdio.h>
int digits_sum(int n)
{
    int result=0,digit;
    while(n!=0)
    {
        digit=n%10;
        result=result+digit;
        n=n/10;

    }
    return result;

}
void main()
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    printf("%d ",digits_sum(n));
}