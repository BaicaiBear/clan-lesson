#include <stdio.h>
#include <windows.h> 

int main()
{
    float a11,a12,b1,a21,a22,b2,x,y;
    scanf("%f%f%f%f%f%f",&a11,&a12,&b1,&a21,&a22,&b2);
    y = (b2-a21/a11*b1)/(a22-a21/a11*a12);
    x = (b1-a12*y)/a11;
    printf("x=%fy=%f\n",x,y);
    system("pause");
    return 0;
}
