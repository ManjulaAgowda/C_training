//write a function which will accept two input parameter x,y and returns x*x+y*y
#include<stdio.h>
int square(int x,int y)
{
    int sqr=x*x+y*y;
    return sqr;
}
void main()
{
    int x=3;
    int y=4;
    print("%d\n",square(x,y));
}