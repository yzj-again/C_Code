/*
�ڳ�������һЩ����ֻ��ȡһЩ��ɢ��ֵ�������˿��ƻ�ɫ
��ʽ1������һЩ��
��ʽ2������ö������
ö�����͵�ֵ�����϶���һЩ����������һ���0��ʼ����
��Ȼ���ǿ���ָ��ö�ٳ�����ֵ 0 7 8 9
*/
#include<stdio.h>
//#define SUIT int
//#define SPADE 0
//#define HEART 1
//#define CLUB 1
//#define DIAMOND 1
typedef enum suit
{
	SPADE, HEART, CLUB, DIAMOND
}Suit;
int main(void) {
	enum suit s1 = SPADE;
	Suit s2 = CLUB;
	return 0;
}
