#include <stdio.h>           // standard input & output

#include "stdlib.h"            // standard library���������ͷ�ļ��Ϳ�����system()�Ⱥ���

int main()                          //main����,�ֳ�������,�ǳ���ִ�е���㣬�����г������е����

{

         int max=0,x=0,i;       //����3�����ͱ���������ֵ

         printf("Enter your school, student number and name");// �˴�������ѧԺ������

         scanf("%d",&max);   // ͨ�����̶���һ�������ַ�������

         i=1;                           //��i��������ֵ=1

         do                             // do-while��ִ��ѭ���е����,Ȼ�����жϱ��ʽ�Ƿ�Ϊ��, ���Ϊ�������ѭ

                          //�������Ϊ��, ����ֹѭ����

         {

                   scanf("%d",&x);

                   if(x>max)

                            max=x;

                   i++;                     //i++ �������ã�������1

                  

         }while(i<=9);                 // �ܹ�����10����

         printf("max=%d\n",max); // ���10�����е������

         system("pause");    // ��ͣ����˼���ȴ��û��źţ���Ȼ����̨�����һ��������������������ִ�н��

         return 0;                                                 //���������˳�

}


