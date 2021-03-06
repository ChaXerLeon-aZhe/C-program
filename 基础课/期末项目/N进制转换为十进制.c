#include <stdio.h>
#include <string.h>
main(){
	long t1;
	int i,n,t,t3;
	char a[100];
	
	printf ("please input a number string:\n");
	gets(a);      //输入N进制数存到数组a中
	strupr(a);    //将a中的小写字母转换成大写字母
	
	t3=strlen(a);
	t1=0;
	
	printf ("please input n(2or8or16):\n");
	scanf("%d",&n);
	
	for (i=0; i<t3; i++){
	    if (a[i]-'0'>=n&&a[i]<'A'||a[i]-'A'+10>=n){//判断输入的数据和进制数是否相等
			printf ("data error!!");
			printf ("\n");
			exit(0);        //退出程序
		}
		
	    if (a[i] >= '0'&&a[i] <= '9')    //判断是否为数字
			t=a[i]-'0';
	    else if(n>=11&&(a[i]>='A'&&a[i]<='A'+n-10))  //判断是否为字母o
			t=a[i]-'A'+10;
	    
		t1=t1*n+t;      //求出最终转换成十进制的值
    }
    
	printf ("the decimal is %ld\n",t1);
	printf ("\n");
	return 0;
}
