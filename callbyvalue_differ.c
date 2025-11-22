#include<stdio.h>
struct score
{
    float marks;
    int rank;
};
 void edit(struct score s1)
 {
    printf("Before change in function:%f\n",s1.marks);
    s1.marks=98.9;
    printf("After change in function:%f\n",s1.marks);
 }
 void main()
 {
    struct score s1={65.87,3};
    edit(s1);
    printf("After change in main:%f\n",s1.marks);
 }