#include<stdio.h>
void swap(float *b1,float *b2)
{
    printf("Before hacking: A has%f B has %f\n",*b1,*b2);
    float temp=0;
    temp=*b1;
    *b1=*b2;
    *b2=temp;
    printf("After hacking: A hsa%f B has %f\n",*b1,*b2);

}
void main()
{
    float *b1,*b2;
    printf("Enter the value for b1 and b2:\n");
    scanf("%f%f",&*b1,&*b2);
    swap(b1,b2);

}