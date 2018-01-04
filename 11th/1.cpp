#include <stdio.h>

//打印出100到200之间所有的素数

/**
样例输入  无
样例输出  101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
**/

int main(){
    //freopen("output.txt","w",stdout);
    int a,i,s;
    for(a=100;a<=200;a++){
     s = 0;
     for(i=2;i<a;i++)if(a%i==0){s++;break;}
     if(s==0)printf("%d ",a);
     }
    return 0;
}
