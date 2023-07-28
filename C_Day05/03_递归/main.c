/*
recursion 电影院的例子
1）.斐波那契数列
递归树太复杂，存在大量重复计算
Q：如何避免重复计算？
调整计算顺序 顺序求值避免计算问题 动态规划
*/
#include<stdio.h>
long long fibi(int n);
long long fibi1(int n);
int main(void) {
	// 1.斐波那契数列
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
		int temp = a + b;// 第i项的值
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
	// 递推公式
	hanoi(n - 1, start, target, middle);
	// 把最大的盘子从start移动到target上
	printf("%c-->%c\n", start, target);
	hanoi(n - 1, middle, start, target);
}