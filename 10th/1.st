#include <stdio.h>

//判断一个数是不是质数，如果是，输出Yes；如果不是，输出No 

/**
样例输入 123 | 17
样例输出  No | Yes 
**/

int main(){
    int a,i;
    scanf("%d",&a);
    for(i=2;i<a;i++){
     if(a%i==0){
      printf("No");
      return 0;
      }
     }
    printf("Yes");
    return 0;
}
