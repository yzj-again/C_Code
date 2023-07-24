/*
while语句 while(expr) {statement 循环体}
do-while语句 do{statement 循环体} while(expr)
两者在初始条件为假时，do-while会至少执行一次，while不会执行
for(expr1;expr2;expr3) statement
expr1:初始化表达式，只会执行一次
expr2：条件控制语句，若expr2的值非0，则执行循环体；为0，则推出循环体
expr3：执行完statement后要执行的步骤
注意：expr1，expr2和expr3都可以省略
若省略expr2，其默认值是非零 -> 死循环 for( ; ;){} = while(1){}
*/
#include<stdio.h>
int main(void) {
	for (int i = 10; i > 0; i--) {
		printf("i = %d\n", i);
	}
	return 0;
}