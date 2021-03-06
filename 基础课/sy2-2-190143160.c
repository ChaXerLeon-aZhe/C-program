#include <stdio.h>      // 数值计算或算术运算（取出一个整数的某一位数字）

#include <stdlib.h>                                                      

int main()

{                                                                                                   

       int a, b, c, i=1;        // 定义4个整型变量, 并给 i 赋初值=1

       float d;                   // 定义 d 为浮点型

       while (1)

       {

              printf("1  数值计算\n");     

              printf("2  取出一个整数的某一位数字\n");      

              printf("3  Exit\n");

              scanf("%d",&i);                // 选择上述1、2、3

              printf("\a");                     // 响铃

              if (i==1)                          // 注意：“=”（赋值运算符）和“==”  的区别

                                            //（关系运算符，判断是否相等）

              {

                     a=7/2*2;                   //7/2 = 3 , 3*2=6

                     b=7.0/2*2;            // 7.0/2=3.5,   3.5*2=7

                     d=7.0/2;               // 7.0/2=3.5

                     printf("a=%d\n", a); // a的值是6不是7

                     printf("b=%d\n",b); // b的值是7

                     printf("d=%3.1f\n",d); // d的值是3.5,输出3位其中小数点后1位的浮点数

                     system("pause");         // 暂停

                     system("cls");              // 清屏

            }

            else if (i==2)            // 取余方法：对于整型数a，b, 求整数商： c = a/b；

                                     //   然后计算余数： r = a - c*b

            {

                            printf("输入一个三位数:"); 

                            scanf("%d",&c);

                            printf("百位=%d\n", c/100); // 百位 345/100 = 3（相除后取整）

                            printf("十位=%d\n",c%100/10); //十位   345%100取余为

                                                                                                                   //45，45/10 = 4（相除后取整）

                            printf("个位=%d\n", c%10);      // 个位 345%10 取余为5

                            system("pause");                       // 暂停观看运行结果

                            system("cls");

            }

            else if (i==3)

            {

                 return 0;    //退出while（1）函数，转向main 函数，它提供了终止函数执行的一种方式

            }

            else

            { 

                            printf("Error,Please Input 1-3Number\n");

                            system("pause");

                            system("cls");

               }

        }

        return 0;                       // 退出main函数

}


