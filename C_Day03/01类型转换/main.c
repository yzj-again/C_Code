/*
1.Ϊʲô��Ҫ����ת����
Ӳ��ֻ�ܶԾ�����ͬ���͵����ݽ��м���
2.��ʱ�ᷢ������ת����
������������������Ҫ���������Ͳ�ƥ��
3.��ʽ����ת��
char + char = int
short + short = int (short��charֻҪ�������㣬����ת����int���Ͳ�������) ��������
int + int = int
int + long = long
int + long long = long long
long + long = long
long + long long = long long
--------------------------------------
float + float = float
float + double = double
double + double = double
float + �κ����Ͷ��� = float
--------------------------------------
signed->unsigned����Ҫ���з����������޷��������������㣩
4.��ʾ����ת����ǿ������ת����
�����ó���Ա����ȷ�Ŀ�������ת��
��ʽ (type_name)expression;
*/
#include<stdio.h>
int main(void) {
	//char ch = 'A';
	//short s = 1;
	//int i = 10;
	//long l = 100l;
	//long long ll = 10000ll;
	//float f = 3.14f;
	//double d = 2.67;
	//int i1 = -1;// ->0xffffffff
	//unsigned int u = 100;// ->ox00000064
	//if (i < u) {
	//	printf("i1 is less than u\n");
	//}
	//else
	//{
	//	printf("i1 is greater than u\n");// 1
	//}
	// 1.���㸡������С������
	double d = 3.1415926535, fraction;
	fraction = d - (int)d;
	printf("fraction = %lf", fraction);// fraction = 0.140000 fraction = 0.141593
	// 2.����϶��ᷢ����ת������ߴ���Ŀɶ���
	float f = 3.14f;
	// ...
	int i = (int)f;
	// 3.������ת�����и���ȷ�ؿ���
	int a = 4, b = 3;
	double q;
	// q = a / b;
	q = (double)a / b;
	printf("q = %lf", q);// q = 1.333333
	// 4.���Ա������
	long long mll = 24 * 60 * 60 * 1000;
	long long nll = (long long)24 * 60 * 60 * 1000 * 1000 * 1000;
	// ��������Ĭ����int���ͣ�������int���͵ķ�Χ
	printf("nll/mll = %lld", nll / mll);// nll/mll = 1000000
	return 0;
}