/*
在程序中有一些变量只能取一些离散的值，比如扑克牌花色
方式1；定义一些宏
方式2：定义枚举类型
枚举类型的值本质上都是一些整数常量，一般从0开始排列
当然我们可以指定枚举常量的值 0 7 8 9
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
