/*
#include<stdio.h>
#define N 5
#define FOO(x) (1 + (x) + (x) * (x))
#define TOO() do { printf("Hello "); \
printf("World\n");} while(0)
void foo();
int main(void) {
	int i = 1, j = 2;
	int k = FOO(2);// 1 + 2 + 2 * 2
	// ע��꺯����ʹ��
	// ������Ӧ�ý����꺯��������
	// �������꺯�����ʽ����������������������˳��������
	// Ϊ�꺯���Ĳ����������
	// ����꺯�����µĶ�θ�����
	// �����걸�Ķ����꺯�����Ѽ�����䵱��һ������ do-whileѭ��
	int l = 3 * FOO(2);
	// l = 3 * 1 +2 +2 * 2 = 9
	int m = FOO(1 + 2);
	// m = ( 1 + 1 + 2 +1 + 2 * 1 + 2)
	int n = FOO(++i);
	// n = (1 + (++i) + (++i) * (++i))
	foo();
	printf("HelloWorld.i / j = %d\n", i / j);
	printf("N * N = %d\n", N * N);
	printf("k = %d\n", k);
	printf("l = %d\n", l);// 9
	printf("m = %d\n", m);// 13
	printf("n = %d\n", n);// 21
	TOO();// Hello World
	if (0)
		TOO();
	// ��������ʹ�ò����;
	return 0;
}
void foo() {
	int i, j;
	i = 10;
	j = 20;
	printf("Hello Kitty.\n");
}
*/
