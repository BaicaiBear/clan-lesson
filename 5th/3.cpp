#include <stdio.h>
#include <windows.h>

int main()
{
    char a,b;
    scanf("%c%c",&a,&b);
    if(a>b) printf("%c",a);
    else printf("%c",b);
    system("pause");
    return 0;
}
