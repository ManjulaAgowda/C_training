#include<stdio.h>
void main()
{
    int arr[4]={45,46,78,95};
    int *p=arr;
    printf("%d",*(p+1));
}