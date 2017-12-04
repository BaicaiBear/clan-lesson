#include <stdio.h>
#include <time.h>

int main(){
    int ans,usr,sum,i=0;
    srand((unsigned)time(NULL));
    ans = rand()%101;
    printf("%d\n",ans);
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
