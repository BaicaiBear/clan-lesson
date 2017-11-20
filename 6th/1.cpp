#include <stdio.h>
#include <windows.h>

//输入三个数，按由小到大次序排列并输出。 

/**
样例输入 3,7,1
样例输出 1.00, 3.00, 7.00
**/

int main()
{
  float a,b,c,t;
  scanf("%f,%f,%f", &a,&b,&c);
  //定义三个浮点型变量，并输入赋值
  
  if(a>b){t=a;a=b;b=t;}
  if(a>c){t=a;a=c;c=t;}
  if(b>c){t=b;b=c;c=t;}
  //交换三个变量，使之按顺序
  
  printf("%.2f,%.2f,%.2f",a,b,c);
  //输出

  return 0;
}
