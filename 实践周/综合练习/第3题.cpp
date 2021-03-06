#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	int suit;  			//��ɫ1-4���ֱ��ʾ÷�������顢���ҡ�����
	int rank;  			//�Ƶ�2-14������11-14�ֱ��ʾJQKA
} Poker;

char suits[5][5] = {"", "÷��","����", "����", "����"};

void ShowUp(Poker all[], int n){			//���� 
	int i;
	for(i=0; i<n; i++){
		printf("%s-",suits[all[i].suit]);		//��ӡ��ɫ 
		
		switch(all[i].rank){			//��ӡ�Ƶ� 
			case 11: printf("J\t"); break;
			case 12: printf("Q\t"); break;
			case 13: printf("K\t"); break;
			case 14: printf("A\t"); break;
			default: printf("%d\t", all[i].rank);
	    }
    	
		if( (i+1)%13 == 0 )
			printf("\n");			//��13���ƻ��� 
	}
}

void Deal(Poker all[], Poker player[], int n){
	int a[n]={}, i, j;
	
	for(i=0; i<n; ){
		a[i] = rand() % 52;				//����һ������0~52֮�������� 
		
		for(j=0; j<i; j++)
			if( a[j] == a[i] ) break;			//��������ͬ������ѭ�� ��������������� 
			if( j == i )
				i++;				//�Ƚ���ϣ�û���ظ����֣�i��һλ 
	}
	
	for(i=0; i<n; i++)
		player[i] = all[a[i]];
}

void SortOut(Poker player[], int n){
	int i,j;
	Poker temp;
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if( (player[i].suit*13+player[i].rank) > (player[j].suit*13+player[j].rank) ){
				temp = player[i];
				player[i] = player[j];
				player[j] = temp;
			}
		}
	}
}

int main(){
	Poker all[52];  		//һ���ƣ�52�ţ�
	Poker player[13];  		//һλ��ҵ�13����
	int i, j;
	
	srand((unsigned)(time(NULL)));
	
	for(i=0; i<52; i++)
		all[i] = {i/13+1, i%13+2};			//�ṹ���� 
	
    ShowUp(all, 52);
    printf("\n");
    
    Deal(all, player,13);
    ShowUp(player, 13);
    SortOut(player, 13);
	ShowUp(player, 13);
	
	return 0;
}
