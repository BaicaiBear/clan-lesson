#include <stdio.h>
#include <time.h>

//猜数的趣味程序：程序运行后，由计算机随机产生一个100以内的整数，用户有十次猜数的机会，并且计算机会根据你猜的数给相应的提示（偏大或者偏小或者正确）。如果十次还没有猜中则提示（失败）

/**
样例输入/输出 2
            偏小
            100
            偏大
            60
            偏小
            70
            偏大
            50
            偏小
            65
            正确
**/

int main(){
    int ans,usr,sum,i=0;
    srand((unsigned)time(NULL));
    ans = rand()%101;
    do{
     scanf("%d",&usr);
     sum = usr - ans;
     if(sum>0) printf("偏大\n");
     else if(sum<0) printf("偏小\n");
     else{
      printf("正确\n"); 
      return 0;
     }
    i++;
    }
    while(i<10); 
    return 0;
}
