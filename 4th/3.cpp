#include <stdio.h>
#include <windows.h> 

int main()
{
    int a,b;
    //给两个变量赋值 
    scanf("%d%d",&a,&b);
    
    //判断 
    if(a>b)
           printf("%d\n",b);//当a>b时，输出b 
    else if(a<b)
         printf("%d\n",a);//当a<b时，输出a 
    else
        printf("%d\n",a);//当a=b时，输出a
    
    //暂停运行 
    system("pause");
    return 0;
}
    
