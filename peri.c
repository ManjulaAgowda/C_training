//write a c function which will accept one input parameter or and returns the perimeter of the circle,declare pi as a constaNT
//perimeter=2pir
#include<stdio.h>
float perimeter(float r)
{
    const float pi=3.142;
    float perimeter=2*pi*r;
    return perimeter;
}
void main()
{
    
   float r=6.5;
    printf("%f\n",perimeter(r));
}

