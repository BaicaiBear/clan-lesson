#include <stdio.h>
#include <windows.h>
int main(){
    int a,b;
    a = 123;
    b = 456;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d%d",a,b);
    system("pause");
    return 0;
}


