/*/
#1.�ַ���������
˫�����������ľ����ַ���������
����������������ڵ��ַ����������ϲ���һ���ַ���������
���ڣ��������ַ������������Կհ��ַ��ָ�ʱ�����Ǿ���Ϊ���������ڵ�
Q����δ洢��
c���Ի����ַ��������洢�ַ���������
printf���ݲ�����һ��char*
#2.�ַ�������
c����û��ר�ŵ��ַ������ͣ�c���Ե��ַ��������ַ��������
�ַ�����"Allen"
�ַ����飺"Allen/0/0/0/0/0"
��ʼ����char name[5] = "Allen" �ⲻ��һ���ַ��������ӡ������
�Ƽ� char name[] = �� char name[10]
ע�⣺�ַ����ĳ�ʼ�����ַ�ָ��ĳ�ʼ��
char name[] = "Allen"
char* name="Allen";
3#��д�ַ���
д printf() %s
puts()��������һ�����з�
��scanf() %s һ�㲻ʹ��
gets
#4.�ַ����Ŀ⺯��
1).size_t strlen(const char* s)// ָ����strlen�в����޸�sָ������ݣ��������
�����ַ����ĳ��ȣ����������ַ�'/0
2).int strcmp(const char* s1, const char* s2)���ֵ�˳��Ƚ�s1��s2
s1 > s2 ��������
s1 = s2 ����0
s1 < s2 ���ظ���
3).char* strcpy(char* s1,const char* s2)s1ָ������ݿ��ܻᱻ�޸� ���봫������
4).char* strcat(char* dest,const char* src)���ַ���src������׷�ӵ��ַ���dest��ĩβ��������dest������������Խ��
*/
#include<stdio.h>
int main(void) {
	printf("I Love You\n");
	printf("I Love"" You\n");
	printf("I Love"
		"You\n");
	char name[] = "Allen";// �������ֵ�ǿ����޸ĵ�
	char* name1 = "Allen";// �������ֵ�ǲ����޸ĵ�
	// name[0] = 'a';
	// name1[0] = 'b';// д�����Ȩ�޳�ͻ��
	printf("%s", name);
	return 0;
}