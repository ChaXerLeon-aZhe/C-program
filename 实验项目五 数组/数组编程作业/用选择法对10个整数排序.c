#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int a[]) {
	int tepm, i, j;
	for (i = 0; i < 10; ++i) {
		for (j = i + 1; j < 10; ++j) {//a[i]���κ�a[i]֮���Ԫ�����Ƚ�
			if (a[i] > a[j]) {//������a[i]С������֮����
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
		printf("����������arr�ĵ�%d����\n", i + 1);
		scanf("%d", &arr[i]);
		system("cls");
	}
	printf("����arrΪ��\n");
	for (i = 0; i < 10; ++i) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	sort(arr);
	system("pause");
}

