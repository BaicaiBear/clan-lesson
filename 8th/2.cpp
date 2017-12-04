#include <stdio.h>
#include <windows.h>

int main(){
    int i=1,sum=0;
    do{
     sum = sum + i;
     i++;
     }
    while(i<=300);
    printf("%d",sum);
    system("PAUSE");
    return 0;
}
 
