#include <stdio.h>
#include <windows.h>

int add()
{
    //int a,b,sum;
    float a,b,sum;
    //scanf("%d%d:,&a.&b);
    scanf("%f%f",&a,&b);
    sum = a + b;
    //printf("%d+%d=%d",a,b,sum);
    printf("%.2f+%.2f=%.2f\n",a,b,sum);
    system("pause");
    return 0;
}

int pass()
{
    float a,b,sum;
    scanf("%f-%f",&a,&b);
    sum = a - b;
    printf("%.2f-%.2f=%.2f\n",a,b,sum);
    system("pause");
    return 0;
}

int main()
{   
    /*char w;
    scanf("%s",&w);
    if(w=="+"){
               add();
               }
    else if(w=="-"){
         pass();
         }*/
    add();
    return 0;
}
