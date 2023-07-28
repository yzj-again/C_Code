/*/
#1.字符串字面量
双引号括起来的就是字符串字面量
编译器会把两个相邻的字符串字面量合并成一个字符串字面量
相邻：当两个字符串字面量仅以空白字符分割时，我们就认为它们是相邻的
Q：如何存储？
c语言会用字符数组来存储字符串字面量
printf传递参数是一个char*
#2.字符串变量
c语言没有专门的字符串类型，c语言的字符串依赖字符数组存在
字符串："Allen"
字符数组："Allen/0/0/0/0/0"
初始化：char name[5] = "Allen" 这不是一个字符串，会打印出乱码
推荐 char name[] = 或 char name[10]
注意：字符串的初始化和字符指针的初始化
char name[] = "Allen"
char* name="Allen";
3#读写字符串
写 printf() %s
puts()会额外输出一个换行符
读scanf() %s 一般不使用
gets
#4.字符串的库函数
1).size_t strlen(const char* s)// 指明在strlen中不会修改s指向的内容，传入参数
计算字符串的长度，不会计算空字符'/0
2).int strcmp(const char* s1, const char* s2)按字典顺序比较s1与s2
s1 > s2 返回正数
s1 = s2 返回0
s1 < s2 返回负数
3).char* strcpy(char* s1,const char* s2)s1指向的内容可能会被修改 传入传出参数
4).char* strcat(char* dest,const char* src)把字符串src的内容追加到字符串dest的末尾，并返回dest，不会检查数组越界
*/
#include<stdio.h>
int main(void) {
	printf("I Love You\n");
	printf("I Love"" You\n");
	printf("I Love"
		"You\n");
	char name[] = "Allen";// 这里面的值是可以修改的
	char* name1 = "Allen";// 这里面的值是不能修改的
	// name[0] = 'a';
	// name1[0] = 'b';// 写入访问权限冲突。
	printf("%s", name);
	return 0;
}