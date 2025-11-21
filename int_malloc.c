#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int *)malloc(3*sizeof(int));
    p[0]=99;
    p[1]=88;
    p[2]=77;
    printf("%d %d %d",p[0],p[1],p[2]);
    free(p);
}