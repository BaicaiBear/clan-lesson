#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    (year%4==0&&year%100!=0)||(year%400==0&&year%4==0)?printf("Y"):printf("N");
    return 0;
}
