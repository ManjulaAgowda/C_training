#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2,y1,y2,d;
    printf("Enter the value of first coordinate\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of second coordinate\n");
    scanf("%d%d",&x2,&y2);
    d=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    printf("THe distance=%d",d);

}