/*
recursion ��ӰԺ������
1��.쳲���������
�ݹ���̫���ӣ����ڴ����ظ�����
Q����α����ظ����㣿
��������˳�� ˳����ֵ����������� ��̬�滮
*/
#include<stdio.h>
long long fibi(int n);
long long fibi1(int n);
int main(void) {
	// 1.쳲���������
	printf("fibi = %lld", fibi(7));
	printf("fibi = %lld", fibi1(60));
	return 0;
}

long long fibi(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibi(n - 1) + fibi(n - 2);
}

long long fibi1(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	int a = 0, b = 1;
	for (int i = 2; i <= n; i++) {
		int temp = a + b;// ��i���ֵ
		a = b;
		b = temp;
	}
	return b;
}
void hanoi(int n, char start, char middle, char target) {
	// base case
	if (n == 1) {
		printf("%c-->%c\n", start, target);
	}
	// ���ƹ�ʽ
	hanoi(n - 1, start, target, middle);
	// ���������Ӵ�start�ƶ���target��
	printf("%c-->%c\n", start, target);
	hanoi(n - 1, middle, start, target);
}