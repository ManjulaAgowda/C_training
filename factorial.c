#include<stdio.h>
void main()
{
    int result=1;
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("factorial  is%d",result);
}
