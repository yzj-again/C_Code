#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	// 0 null 32 space 48 ����0 65 A 97 a
	// char Լ����int ���Խ�������
	int i = 'a';
	char c = 'A';
	c = c + 1;
	c++;
	printf("i = %c, c = %c", i, c);// i = %c i = a;i = %d i = 97
	// ת������ 
	// 1.�ַ�ת������ \a \b \f \n \r \t \v \\ \? \' \"
	// 2.����ת������(�����ַ�) �����˽��ƣ�ʮ������ \0 \101 'A' \x0 \x41 'A'
	// �ַ�������
	// ��д�ַ�����
	// 1.scanf���printf %c
	char c1;
	// scanf(" %c", &c1);
	// ע��%c�������ǰ��Ŀհ��ַ�
	// ��κ���ǰ��Ŀո�scanf(" %c", &c1);
	// printf("%c\n", c1);
	// 2.getchar��putchar
	// ���ܺ�������Ŀհ��ַ�
	c1 = getchar();
	putchar(c1);
	// �����÷�
	char ch1, ch2;
	ch1 = getchar();
	while (getchar() != '\n') {

	}// ��ȡ��һ��ʣ����ַ�
	ch2 = getchar();
	return 0;
}