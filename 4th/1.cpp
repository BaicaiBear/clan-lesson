#include <stdio.h>
#include <windows.h>

int main()
{
    char c1,c2,a;
    c1 = getchar();
    c2 = getchar();
    a = c1;
    c1 = c2;
    c2 = a;
    printf("%c%c\n",c1,c2);
    system("pause");
    return 0;
}               
