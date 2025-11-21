#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)calloc(3,sizeof(float));
    p[0]=99.678;
    p[1]=88.345;
    p[2]=77.123;
    printf("%f %f %f",p[0],p[1],p[2]);
}