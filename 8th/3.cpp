#include <stdio.h>
#include <windows.h>

int main(){
    int i=0,sum=0;
    do{
     sum = sum + i;
     i++;i++;
     }
    while(i<=1000);
    printf("%d",sum);
    system("PAUSE");
    return 0;
} 
