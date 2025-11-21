#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    float*a;
    float product=10;
    a=(float*)malloc(5*sizeof(float));
    if(a==NULL)
    {
        printf("memory not allocated\n");
        return 1;

    }
    printf("enter 5 float values:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    a=(float*)realloc(a,7*sizeof(float));
    if(a==NULL)
    {
        printf("memory not allocated\n");
        return 1;
    }
    printf("enter 2 more values:\n");
    for(i=5;i<7;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        product*=a[i];
    }
    printf("product of all float values+%.2f\n",product);
    free(a);
    return 0;

}