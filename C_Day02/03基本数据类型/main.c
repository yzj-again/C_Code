#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	// �ڼ����������sizeof()�鿴�������͵Ĵ�С �����
	// long 64λ8�ֽ� gcc -m32�����32λ
	// short 2 long 4 int 4 long long 8
	// �޷��ŵ�����ռλ����%u
	// %o�޷��Ű˽������� %x�޷���ʮ����������
	unsigned n;
	scanf("%u", &n);
	printf("�˽���n = %o", n);
	printf("ʮ����n = %u", n);
	printf("ʮ������n = %x", n);
	// �˽���n = 173ʮ����n = 123ʮ������n = 7b
	// �������η�
	short s;
	scanf("%hd");
	printf("%hd", s);
	float a;
	double b;
	scanf("%f");
	scanf("%lf");
	printf("%f\n", a);
	printf("%lf\n", b);
	return 0;
}