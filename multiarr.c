#include<stdio.h>
void main()
{
    int a[4][2]={{2,3},{5,6},{6,7},{0,2}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}