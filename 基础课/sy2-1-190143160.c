#include <stdio.h>       // 数值计算和算术运算（取出一个整数的某一位数字）

#include <stdlib.h>                                                      

int main()

{                                                                                                   

       int   a, b, c;               //定义三个整型变量

       float  d;                    //定义 d 为浮点型

       a=7/2*2;                  //7/2 = 3 （整数商）, 3*2=6

       b=7.0/2*2;               // 7.0/2=3.5,   3.5*2=7

       d=7.0/2;                  // 7.0/2=3.5

       printf("a=%d\n",a);  // a的值是6不是7

       printf("b=%d\n",b);  // b的值是7

       printf("d=%3.1f\n",d);  // d的值是3.5,输出3位其中小数点后1位的浮点数

       system("pause"); 

       system("cls");             // 清屏

       printf("\a");               // 响铃

       printf("输入一个三位数: ");

       scanf("%d",&c);        // 取余方法：对于整型数a，b, 求整数商： c = a/b；

                                    // 然后计算余数： r = a - c*b

       printf("百位=%d\n",c/100); // 百位   345/100 = 3（相除后取整）

       printf("十位=%d\n",c%100/10);  // 十位   345%100取余为45，45/10 = 4

                                                    //（相除后取整）

       printf("个位=%d\n",c%10);         // 个位 345%10 取余为5

       system("pause");                           // 暂停观看运行结果

       printf("\a");                                   // 响铃

       return 0;                                       //退出main 函数

}
