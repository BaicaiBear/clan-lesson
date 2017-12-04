#include <stdio.h>

//求1+2+3+….+300的和

/**
样例输入   无    无
样例输出 45150 45150
**/

int main(){
    int i=1,sum=0;
    do{
     sum = sum + i;
     i++;
     }
    while(i<=300);
    printf("%d",sum);
    return 0;
}
 
