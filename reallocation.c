#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int *)malloc(3*sizeof(int));
    p[0]=99;
    p[1]=88;
    p[2]=77;
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=45;
    p[4]=56;
    for(int i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }
    
}