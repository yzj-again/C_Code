/*
Q��ͳ��ÿ��Сд��ĸ���ֵĴ���
('a',2),('b',3) -> (key,value) ��ֵ��
void get(key)
void put(key,value)
bool remove(key)
����1.��Χ���� 2.������ת������������� key-'a'
��ϣ��������ɢ��ֵ�ԣ��ü�ֵ�Ծ���ƽ���ֲ�
�������⣺��ϣ�����������ͻ����������ָ������
*/
#include"hashmap.h"
#include<stdio.h>
int main() {
	HashMap* map = HashMap_create();
	HashMap_put(map, "liuqiangdong", 1);
	HashMap_put(map, "zhangqiandong", 2);
	HashMap_put(map, "wangqidong", 3);
	printf("val = %d", HashMap_get(map, "liuqiangdong"));
	printf("val = %d", HashMap_get(map, "zhangqiandong"));
	printf("val = %d", HashMap_get(map, "wangqidong"));
	return 0;
}