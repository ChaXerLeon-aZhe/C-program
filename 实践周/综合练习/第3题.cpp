#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
	int suit;  			//花色1-4，分别表示梅花、方块、红桃、黑桃
	int rank;  			//牌点2-14，其中11-14分别表示JQKA
} Poker;

char suits[5][5] = {"", "梅花","方块", "红桃", "黑桃"};

void ShowUp(Poker all[], int n){			//亮牌 
	int i;
	for(i=0; i<n; i++){
		printf("%s-",suits[all[i].suit]);		//打印花色 
		
		switch(all[i].rank){			//打印牌点 
			case 11: printf("J\t"); break;
			case 12: printf("Q\t"); break;
			case 13: printf("K\t"); break;
			case 14: printf("A\t"); break;
			default: printf("%d\t", all[i].rank);
	    }
    	
		if( (i+1)%13 == 0 )
			printf("\n");			//到13张牌换行 
	}
}

void Deal(Poker all[], Poker player[], int n){
	int a[n]={}, i, j;
	
	for(i=0; i<n; ){
		a[i] = rand() % 52;				//生成一个介于0~52之间的随机数 
		
		for(j=0; j<i; j++)
			if( a[j] == a[i] ) break;			//若数字相同，跳出循环 ，重新生成随机数 
			if( j == i )
				i++;				//比较完毕，没有重复数字，i进一位 
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
	Poker all[52];  		//一副牌（52张）
	Poker player[13];  		//一位玩家的13张牌
	int i, j;
	
	srand((unsigned)(time(NULL)));
	
	for(i=0; i<52; i++)
		all[i] = {i/13+1, i%13+2};			//结构体编号 
	
    ShowUp(all, 52);
    printf("\n");
    
    Deal(all, player,13);
    ShowUp(player, 13);
    SortOut(player, 13);
	ShowUp(player, 13);
	
	return 0;
}
