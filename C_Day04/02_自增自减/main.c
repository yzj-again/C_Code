/*
���� i += 1 i = i + 1
ǰ�úͺ���
i++ �������ʽ��ֵΪi,��������i����
++i �������ʽ��ֵΪi+1,��������i����
ע�⣺�����δ�������Ϊ
i = i++
����i++�������ʱֵ��c�������Ƿ�����ʱֵ��������
j = (i++) + (i++)
a[i]=b[i++]
*/
#include<stdio.h>
int main(void) {
	/*
	int i = 1;
	i = i++;
	printf("%d", i);
	printf("i = %d\n", i++);
	printf("i = %d\n", i);
	printf("i = %d\n", ++i);
	printf("i = %d\n", i);
	*/
	// 1 2 3 3 
	int i, j, k;
	i = 1;
	j = 2;
	k = ++i + j++;
	printf("i = %d, j = %d, k = %d\n", i, j, k);// 2 3 4
	return 0;
}