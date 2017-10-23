#include <stdio.h>

int main()
{ 
    int a,b,c;
    a = 123;
    b = 456;
    c = a;
    a = b;
    b = c;
    printf("%c%d",a,b);
    return 0;
}
