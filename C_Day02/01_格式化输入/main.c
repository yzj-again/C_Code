#include<stdio.h>
int main(void) {
	int i = 123;
	// i =  123 ��������ǰ�油�ո�
	printf("i = %4d\n", i);
	// i = 123  ��������룬�����Ҷ��룬Ĭ���Ҷ���
	printf("i = %-4d\n", i);
	int j = 1234;
	// i = 1234 ��ȣ��������
	printf("i = %4d\n", j);
	int k = 12345;
	// i = 12345 �������Զ���չ
	printf("i = %4d\n", k);
	printf("-------------------\n");
	// %m.px m �� p ���ȿ��� 
	int m = 40;
	float f = 3.1415f;
	printf("|%d|%5d|%-5d|%5.3d|\n", m, m, m, m);
	// |40|   40|40   |  040|
	printf("|%f|%10f|%10.2f|%-10.2f|\n", f, f, f, f);
	// |3.141500|  3.141500|      3.14|3.14      |
	printf("-------------------\n");
	int n = printf("HelloWorld.");
	printf("n = %d\n", n);// printf ���ظ�ʽ��������ĳ���
	return 0;
}