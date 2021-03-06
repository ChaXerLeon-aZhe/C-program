/*
	设计一个程序，从键盘输入小于30个学生成绩
	当输入为999时，输入完毕开始计算。 
	功能有： 
	按1 计算其平均数，并输出所有小于平均数的数； 
	按2 从键盘上输入一个成绩，判定该成绩是否在数组中，若在则输出所在序号； 
	按3 统计并显示 优、良、中、及格及不及格人数； 
	按4 显示本班级的最高分及最低分。 
*/

#include <stdio.h>
#include <stdio.h>

void main(){
	int i, x, value, count, score[30];
	float sum=0, average;
	printf("输入小于30个学生成绩，输入999时，输入完毕，程序将开始计算\n");
	printf("请输入成绩：");
	
	for(i=0;;i++){
		scanf("%d", &value);
		if(value==999) break;			//当value=999时跳出循环 
		score[i]=value;
		sum+=score[i];					//加总分数
		count++;						//计数 
	} count--;
	
	printf("1   计算其平均数，并输出所有小于平均数的数\n");
	printf("2   从键盘上输入一个成绩，判定该成绩是否在数组中，若在则输出所在序号\n");
	printf("3   统计并显示 优、良、中、及格及不及格人数\n");
	printf("4   显示本班级的最高分及最低分\n");
	printf("5   退出\n");
	printf("\n");
	
	while(1){
		printf("选择要运行的程序："); 
		scanf("%d", &x);
		
		if(x==1){						//程序一：计算平均数并输出平均分以下的数 
			average = sum/count;			//计算平均分 
			printf("\n平均分:%.1f\n",average);
			printf("低于平均分的成绩为：");
			for(i=0;i<count;i++)
				if(score[i]<average)			//与平均分进行比较 
					printf("%d ",score[i]);
			
			printf("\n\n");
		}
		
		else if(x==2){						//程序二：判断输入的数是否在数组中 
			int m=0; 
			printf("\n请输入要查找的数据：");
			scanf("%d",&value);			//读取输入的值 
			
			for(i=0;i<count;i++){ 
				if(score[i]==value){			//与数组中各数据进行比较
					printf("序号为：%d",i);		//若有数据与之相同则输出该数据的下标 
					m++;
				}
			}
			
			if(!m) printf("抱歉，该数据不存在。");
			printf("\n\n");
		}
		
		else if(x==3){					//程序三：统计各等第人数 
			int num, grade_A=0, grade_B=0, grade_C=0, grade_D=0, grade_F=0;
			
			for(i=0;i<count;i++){
				num = score[i]/10;
				switch(num){
					case 10: grade_A++; break;
					case 9: grade_A++; break;
					case 8: grade_B++; break;
					case 7: grade_C++; break;
					case 6: grade_D++; break;
					default: grade_F++;
				}
			}
			printf("\n学生成绩等第分布如下：\n");
			printf("优（90-100）: %d\n良（80-89）: %d\n中（70-79）: %d\n合格（60-69）: %d\n不合格（59以下）: %d", 
					grade_A,grade_B,grade_C,grade_D,grade_F);
			
			printf("\n\n");
		}
		
		else if(x==4){						//程序四：显示最高分和最低分 
			int max=score[0], min=score[0];
			
			for(i=0;i<count;i++){				//比较并替换直到找出最值 
				if(score[i]>max)
					max=score[i];
				else if(score[i]<min)
					min=score[i];
			}
			
			printf("\n最高分%d\n最低分%d", max,min);
			printf("\n\n");
		}
		
		else if(x==5) break;
		
		else {
			printf("错误！请重新输入。");
			printf("\n\n");
		}
		
		system("pause");
	}
}

