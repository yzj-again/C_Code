/*
while��� while(expr) {statement ѭ����}
do-while��� do{statement ѭ����} while(expr)
�����ڳ�ʼ����Ϊ��ʱ��do-while������ִ��һ�Σ�while����ִ��
for(expr1;expr2;expr3) statement
expr1:��ʼ�����ʽ��ֻ��ִ��һ��
expr2������������䣬��expr2��ֵ��0����ִ��ѭ���壻Ϊ0�����Ƴ�ѭ����
expr3��ִ����statement��Ҫִ�еĲ���
ע�⣺expr1��expr2��expr3������ʡ��
��ʡ��expr2����Ĭ��ֵ�Ƿ��� -> ��ѭ�� for( ; ;){} = while(1){}
*/
#include<stdio.h>
int main(void) {
	for (int i = 10; i > 0; i--) {
		printf("i = %d\n", i);
	}
	return 0;
}