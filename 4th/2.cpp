#include <stdio.h>
#include <windows.h>

int main()
{
    char c;
    c = getchar();
    if(c=='y'||c=='Y')
                      printf("yes");
    else
        printf("no");
    system("pause");
    return 0;
}
