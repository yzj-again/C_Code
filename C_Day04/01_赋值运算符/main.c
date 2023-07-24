/*
v = e，把表达式e的值赋值给变量v，整个表达式的值为赋值后变量v的值
注意：
1.赋值过程中可能发生隐式类型转换
2.赋值运算符是从右向左结合的，好处是可以连续赋值 i = j = k =3;
-------------------------------------------------------------
复合赋值运算符
+= -= *= /=
*/
#include<stdio.h>
int main(void) {
	int i;
	float f;
	f = i = 3.33f;
	printf("i = %d, f = %f\n", i, f);// i = 3, f = 3.000000
	return 0;
}