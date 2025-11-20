//write a c function which will accept an array arr,its size as n, and returns the difference bw first and last element
#include<stdio.h>
int difference(int arr[],int n)
{
int sub=arr[0]-arr[n-1];
return sub;

}
void main()
{
    int arr[2]={80,40};
    int n=2;
    printf("difference=%d",difference(arr,n));

}
// #include<stdlib.h> abs=absolute(gives result is positive sign)
//ex-return abs sub;