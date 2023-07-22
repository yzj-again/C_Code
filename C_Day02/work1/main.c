#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int getNum(int a, int b);
int main(void) {
	int z1, m1;
	int z2, m2;
	z1 = z2 = 0;
	m1 = m2 = 0;
	printf("Enter first fraction:\n");
	scanf("%d/ %d", &z1, &m1);
	printf("Enter second fraction:\n");
	scanf("%d/ %d", &z2, &m2);
	// ²»»¯¼ò
	printf("The sum is:%d/%d", z1 * m2 + z2 * m1, m1 * m2);
	// »¯¼ò
	int z3 = z1 * m2 + z2 * m1;
	int m3 = m1 * m2;
	int getNumber = getNum(z3, m3);
	printf("The sum is:%d/%d", z3 / getNumber, m3 / getNumber);
	return 0;
}
int getNum(int a, int b) {
	while (a % b != 0)
	{
		int temp = a % b;
		a = b;
		b = temp;
	}
	return b;
}