#include <stdio.h>
#include <windows.h>

int main()
{
    char c1,c2;
    c1 = getchar();
    c2 = getchar();
    printf("%c %c\n",c1,c2);
    printf("%d %d\n",c1,c2);
    system("pause");
    return 0;
}
