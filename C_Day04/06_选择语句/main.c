/*
1.if语句
格式1：if(表达式) { statement }
格式2：if(表达式) { statement1 } else { statement2 }
格式3：本质是if-else语句的嵌套
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
2.switch语句
注意：
1.switch判断表达式必须是整数类型
2.case后面必须是整数类型的常量表达式
3.不能有重复标签
4.多个分支可以共用一条语句
5.如果省略break语句，则可能出现case穿透现象
3.条件运算符
三目运算符 从右向左结合
格式:expr1?expr2:exper3 计算expr1，若非0，则计算expr2，并将expr2的结果当作整个表达式的值；
若为0，则计算expr3，并将expr3的结果当作整个表达式的值；
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