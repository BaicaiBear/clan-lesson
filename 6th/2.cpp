#include <stdio.h>
#include <windows.h>

int main()
{
    float money,cost,price;
    scanf("%f",&money);
    if(money>500) cost=0.2;
     else if(money>300) cost=0.15;
      else if(money>100) cost=0.1;
       else if(money>50) cost=0.05;
        else cost=0;
    price = money - money * cost;
    printf("%.0f",price);
    system("PAUSE");
    return 0;
}
