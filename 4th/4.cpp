#include <stdio.h>
#include <windows.h>

int main()
{
    int a,b,c,m1,m2,m3;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&a<=c){
                  m1 = a;
                  if(b<=c){
                           m2 = b;
                           m3 = c;
                           }
                  }
    else if(a<=b||a<=c){
         m2 = a; 
         if(b<=c){
                  m1 = b;
                  m3 = c;
                  }
         
         }
    else{
         m3 = a;
         if(b<=c){
                  m1 = b;
                  m2 = c;
                  }
         }
    printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",c,b,a);
    system("pause");
    return 0;
}
         
                   
                   
