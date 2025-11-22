#include<stdio.h>
enum month
{
    january=1,
    february,march,april,may,june,july,august,september,october,november,december
};
void main()
{
    enum month m;
    int m=march;
    char *season;
    switch(m)
    {
        case december: case january: case february:
        season="WINTER"; break;
        case march: case april: case may:
        season="SUMMER"; break;
        case june: case july: case august:
        season="MANSOON"; break;
        case september: case october: case november:
        season="SPRING"; break;

    }
    printf("%d is %s",m,season);
    
}