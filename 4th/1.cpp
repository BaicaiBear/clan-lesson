#include <stdio.h>
#include <windows.h>

int main()
{
    char c1,c2,a;
    
    //给两个字符型变量赋值
    c1 = getchar();
    c2 = getchar();
    //输出未交换的两个变量
    printf("c1='%c' c2='%c'\n",c1,c2);
    
    //交换过程
    a = c1;
    c1 = c2;
    c2 = a;
    
    //输出交换后的两个变量
    printf("c1='%c' c2='%c'\n",c1,c2);
    
    //暂停运行
    system("pause");
    return 0;
}               
