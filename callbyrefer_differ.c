#include<stdio.h>
struct score
{
    float marks;
    int rank;
};
void edit(struct score *s1)
{
   printf("before change in funcion:%f\n",s1->marks);
   s1->marks=98.8;
   printf("After change in function:%f\n",s1->marks);
}
void main()
{
    struct score s1={45.5,9};
    edit(&s1);
    printf("After change in main function:%f\n",s1.marks);

}