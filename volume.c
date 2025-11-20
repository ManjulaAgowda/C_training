//write a c function which will accept three parameters l,b,h and returns volume of the cube
#include<stdio.h>
int volume(int l,int b,int h)
{
int v=l*b*h;
return v;
}
void main()
{
    int l=4;
    int b=4;
    int h=4;
    printf("%d\n",volume(l,b,h));
}