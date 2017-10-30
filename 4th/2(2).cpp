#include <stdio.h>
#include <windows.h>

int main()
{
    char c;
    //给两个变量赋值 
    c = getchar();
    
    //判断 
    c=='y'||c=='Y'?printf("yes\n")/*当满足条件时，输出yes*/:printf("no\n")/*当不满足条件时，输出no*/;
    
    //暂停运行 
    system("pause");
    return 0;
}
