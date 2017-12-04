#include <stdio.h>

//求1000以内偶数的和

/**
样例输入   无     无
样例输出 250500 250500
**/

int main(){
    int i=0,sum=0;
    do{
     sum = sum + i;
     i++;i++;
     }
    while(i<=1000);
    printf("%d",sum);
    return 0;
} 
