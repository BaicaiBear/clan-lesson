#include <stdio.h>
#include <windows.h>
#define PI 3.1415926

int main(){
    float r,s;
    //float PI = 3.1415926
    scanf("%f",&r);
    s = r * r * PI;
    printf("area=%.2f\n",s);
    system("pause");
    return 0;
}
