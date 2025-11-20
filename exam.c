#include<stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=40&&m2>=40&&m3>=40)
    {
        printf("CONGRATULATION! YOU PASSED\n");
    }
    else{
        printf("YOU FAILED\n");
    }
    float a=(float)(m1+m2+m3)/3;
    printf("Average is=%f",a);
}
void main()
{
    int m1,m2,m3;
    printf("Enter the value of m1 and m2 and m3:");
    scanf("%d%d%d",&m1,&m2,&m3);
    exam(m1,m2,m3);

}