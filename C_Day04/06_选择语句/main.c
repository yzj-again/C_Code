/*
1.if���
��ʽ1��if(���ʽ) { statement }
��ʽ2��if(���ʽ) { statement1 } else { statement2 }
��ʽ3��������if-else����Ƕ��
if(boolean_expression 1)
{
   statement1
}
else if (boolean_expression 2)
{
	statement2
}
else if (boolean_expression 3)
{
	statement3
}
else
{
	statement4
}
2.switch���
ע�⣺
1.switch�жϱ��ʽ��������������
2.case����������������͵ĳ������ʽ
3.�������ظ���ǩ
4.�����֧���Թ���һ�����
5.���ʡ��break��䣬����ܳ���case��͸����
3.���������
��Ŀ����� ����������
��ʽ:expr1?expr2:exper3 ����expr1������0�������expr2������expr2�Ľ�������������ʽ��ֵ��
��Ϊ0�������expr3������expr3�Ľ�������������ʽ��ֵ��
*/
#include<stdio.h>
int main(void) {
	int i, j, k;
	i = 1;
	j = 2;
	k = i > j ? i : j;// 1 2 2
	k = i > j ? i++ : j++;// 1 3 2
	k = (i >= 0 ? i : 0) + j;// 1 3 4
	return 0;
}