/*
#1.break������switch��while��for���
�������while(1){ ... }ѭ��
ע�⣺
��switch do-while whileǶ��ʱ��breakֻ����������break�����ڲ�Ƕ��
ex:whileǶ��switch��ֻ������switch���
��Ҫ����while��ʹ��goto���
#2.continue:������ǰѭ��������ѭ�����ĩβ
��������
break��������ѭ������switch��䣬��continueֻ������ѭ�����
break�������������ѭ����䣬continue�������ת��ѭ�����ĩβ
#3.goto���û����Щ���ƣ�Ψһ�����ƾ���ֻ����ͬһ������������ת
����goto��ԭ��
����ɶ���
goto̫�������׳���bug
��������goto��䣬ֻ�е���������ʵ�ֲ���ʱ���ſ���ʹ��goto���
��ʽ��goto ��ǩ
ʹ�ó�����
1.�������Ƕ��
2.ʹ��goto���д�����
if(...){
	goto error_handle;
}
...
error_handle:
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int sum = 0, count = 0, n;
	while (count < 10)
	{
		scanf("%d", &n);
		if (n == 0) {
			continue;
		}
		sum += n;
		count++;
	}
	printf("sum = %d", sum);
	return 0;
}