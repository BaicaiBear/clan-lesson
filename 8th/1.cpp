#include <stdio.h>

//用while语句实现  求1+2+3+….+200的和并输出

/**
样例输入   无    无
样例输出 20100 20100
**/

int main(){
    int i=1,sum=0;
    while(i<=200){
     sum = sum + i;
     i++;
     }
    printf("%d",sum);
    return 0;
} 
