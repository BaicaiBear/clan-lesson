#include <stdio.h>

//编程序，输出四层倒三角

/**
样例输入 无
样例输出  *******
           *****
            ***
             * 
**/ 
              
int main(){
    //freopen("output.txt","w",stdout);
    int a,b;
    for(a=1;a<=4;a++){
     for(b=1;b<=a-1;b++){
      printf(" ");
     }
     for(b=9-2*a;b>=1;b--){
      printf("*");
     }
    printf("\n");
    }
    return 0;
}
