/*
#1.ָ������ָ�룬����Ҳ���е�ַ���������������һ��ָ���������ָ��
test:������һ������f������ֵΪdouble����������double����������a��b��(fa+fb)/2
#2.�ص�������ָͨ������ָ�뽫һ��������Ϊ�������ݸ���һ��������������һ�������е��øú����Ĺ��̡�
�ص������������¼��������������ȳ����С�
compare�����ǻص�������sort������ʹ�ûص������ĺ�����
sin�����ǻص�������average������ʹ�ûص������ĺ�����
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415
double average(double (*f)(double), double a, double b);
int main(void) {
	double avg = average(sin, 0, PI);
	printf("avg = %f", avg);
	return 0;
}
double average(double (*f)(double), double a, double b) {
	return (*f)((a + b) / 2);
}