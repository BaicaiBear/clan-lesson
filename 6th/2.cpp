#include <stdio.h>
#include <windows.h>

//商场促销，购物500元以上，8折;购物300元以上，85折;购物100元以上，9折;购物50元以上，95折;购物50元以下，不打折。根据消费量，计算优惠率,输入价格，输出实际应付。

/**
样例输入 300
样例输出 270
**/

int main()
{
    float money,cost,price;
    scanf("%f",&money);
    //定义三个字符型变量并给原价(money)输入赋值
    
    if(money>500) cost=0.2;
     else if(money>300) cost=0.15;
      else if(money>100) cost=0.1;
       else if(money>50) cost=0.05;
        else cost=0;
    //判断原价区间，给折扣(cost)赋对应的值
    
    price = money - money * cost;
    printf("%.0f",price);
    //计算价格并输出
    
    return 0;
}
