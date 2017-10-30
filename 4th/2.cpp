#include <stdio.h>
#include <windows.h>

int main()
{
    char c;
    //给变量赋值
    c = getchar();
    
    //判断
    if(c=='y'||c=='Y')
                      printf("yes");
    else
        printf("no");
        
    //暂停运行
    system("pause");
    return 0;
}
