#include <stdio.h>
#include <windows.h>

//从键盘输入学生的成绩，由计算机对学生的成绩进行分级：如果输入成绩大于100或者小于0，则进行错误处理输出“ERROR”，若输入成绩大于等于90，则为等级’A’，若输入成绩小于90而大于等于80，则为等级’B’，若输入成绩小于80而大于等于70，则为等级’C’，若输入成绩小于70而大于等于60，则为等级’D’，否则为等级’E’.

/**
样例输入 100|50|0|105  |-1
样例输出 A  |E |E|ERROR|ERROR
**/

int main()
{
    int point;
    scanf("%d",&point);
    if(point>=90&&point<=100) printf("A");
     else if(point>=80&&point<=100) printf("B");
      else if(point>=70&&point<=100) printf("C");
       else if(point>=60&&point<=100) printf("D");
        else if(point>=0&&point<=100) printf("E");
         else printf("ERROR");
    system("PAUSE");
    return 0;
}
