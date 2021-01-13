#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int a[]) {
	int tepm, i, j;
	for (i = 0; i < 10; ++i) {
		for (j = i + 1; j < 10; ++j) {//a[i]依次和a[i]之后的元素作比较
			if (a[i] > a[j]) {//碰见比a[i]小的则与之交换
				tepm = a[i];
				a[i] = a[j];
				a[j] = tepm;
			}
		}
	}
	for (i = 0; i < 10; ++i) {
		printf("%d  ", a[i]);
	}
	printf("\n");
}
void main() {
	int arr[10], i;
	for (i = 0; i < 10; ++i) {
		printf("请输入数组arr的第%d个数\n", i + 1);
		scanf("%d", &arr[i]);
		system("cls");
	}
	printf("数组arr为：\n");
	for (i = 0; i < 10; ++i) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	sort(arr);
	system("pause");
}

