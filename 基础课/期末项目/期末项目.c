/*
	���һ�����򣬴Ӽ�������С��30��ѧ���ɼ�
	������Ϊ999ʱ��������Ͽ�ʼ���㡣 
	�����У� 
	��1 ������ƽ���������������С��ƽ���������� 
	��2 �Ӽ���������һ���ɼ����ж��óɼ��Ƿ��������У����������������ţ� 
	��3 ͳ�Ʋ���ʾ �š������С����񼰲����������� 
	��4 ��ʾ���༶����߷ּ���ͷ֡� 
*/

#include <stdio.h>
#include <stdio.h>

void main(){
	int i, x, value, count, score[30];
	float sum=0, average;
	printf("����С��30��ѧ���ɼ�������999ʱ��������ϣ����򽫿�ʼ����\n");
	printf("������ɼ���");
	
	for(i=0;;i++){
		scanf("%d", &value);
		if(value==999) break;			//��value=999ʱ����ѭ�� 
		score[i]=value;
		sum+=score[i];					//���ܷ���
		count++;						//���� 
	} count--;
	
	printf("1   ������ƽ���������������С��ƽ��������\n");
	printf("2   �Ӽ���������һ���ɼ����ж��óɼ��Ƿ��������У�����������������\n");
	printf("3   ͳ�Ʋ���ʾ �š������С����񼰲���������\n");
	printf("4   ��ʾ���༶����߷ּ���ͷ�\n");
	printf("5   �˳�\n");
	printf("\n");
	
	while(1){
		printf("ѡ��Ҫ���еĳ���"); 
		scanf("%d", &x);
		
		if(x==1){						//����һ������ƽ���������ƽ�������µ��� 
			average = sum/count;			//����ƽ���� 
			printf("\nƽ����:%.1f\n",average);
			printf("����ƽ���ֵĳɼ�Ϊ��");
			for(i=0;i<count;i++)
				if(score[i]<average)			//��ƽ���ֽ��бȽ� 
					printf("%d ",score[i]);
			
			printf("\n\n");
		}
		
		else if(x==2){						//��������ж���������Ƿ��������� 
			int m=0; 
			printf("\n������Ҫ���ҵ����ݣ�");
			scanf("%d",&value);			//��ȡ�����ֵ 
			
			for(i=0;i<count;i++){ 
				if(score[i]==value){			//�������и����ݽ��бȽ�
					printf("���Ϊ��%d",i);		//����������֮��ͬ����������ݵ��±� 
					m++;
				}
			}
			
			if(!m) printf("��Ǹ�������ݲ����ڡ�");
			printf("\n\n");
		}
		
		else if(x==3){					//��������ͳ�Ƹ��ȵ����� 
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
			printf("\nѧ���ɼ��ȵڷֲ����£�\n");
			printf("�ţ�90-100��: %d\n����80-89��: %d\n�У�70-79��: %d\n�ϸ�60-69��: %d\n���ϸ�59���£�: %d", 
					grade_A,grade_B,grade_C,grade_D,grade_F);
			
			printf("\n\n");
		}
		
		else if(x==4){						//�����ģ���ʾ��߷ֺ���ͷ� 
			int max=score[0], min=score[0];
			
			for(i=0;i<count;i++){				//�Ƚϲ��滻ֱ���ҳ���ֵ 
				if(score[i]>max)
					max=score[i];
				else if(score[i]<min)
					min=score[i];
			}
			
			printf("\n��߷�%d\n��ͷ�%d", max,min);
			printf("\n\n");
		}
		
		else if(x==5) break;
		
		else {
			printf("�������������롣");
			printf("\n\n");
		}
		
		system("pause");
	}
}

