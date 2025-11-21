#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p->name,"appu");// call by reference when the pointer is used 
    p->age=18;              // call by value without pointer
    p->marks=99.8;
    printf("%d\n",p->age);
    printf("%f\n",p->marks);
    printf("%s\n",p->name);
}