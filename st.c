//create a structure with three variables name of the car,max speed,price
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float speed;
    float price;
};
 void main()
 {
    int n;
    printf("enter the number of cars:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the car:");
        scanf("%f",&c[i].speed);                               
                
        printf("Enter the maximum speed of the car");      //for int and float & is compulsary
        scanf("%f",&c[i].speed);                               //for char & is not require

        printf("Enter the total price of the array");
        scanf("%f",&c[i].price);
    }
 }