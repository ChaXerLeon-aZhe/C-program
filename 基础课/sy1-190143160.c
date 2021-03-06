#include <stdio.h>           // standard input & output

#include "stdlib.h"            // standard library，包含这个头文件就可以用system()等函数

int main()                          //main函数,又称主函数,是程序执行的起点，是所有程序运行的入口

{

         int max=0,x=0,i;       //定义3个整型变量并赋初值

         printf("Enter your school, student number and name");// 此处输入你学院及姓名

         scanf("%d",&max);   // 通过键盘读入一个或多个字符或整数

         i=1;                           //给i变量赋初值=1

         do                             // do-while先执行循环中的语句,然后再判断表达式是否为真, 如果为真则继续循

                          //环；如果为假, 则终止循环。

         {

                   scanf("%d",&x);

                   if(x>max)

                            max=x;

                   i++;                     //i++ ：先引用，后增加1

                  

         }while(i<=9);                 // 总共输入10个数

         printf("max=%d\n",max); // 输出10个数中的最大数

         system("pause");    // 暂停的意思，等待用户信号；不然控制台程序会一闪即过，你来不及看到执行结果

         return 0;                                                 //程序正常退出

}


