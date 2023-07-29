/*
结构体
#1.C语言的结构体约等于其他语言的类
只不过只能在结构体中定义数据，无法定义方法
Q：定义一个学生对象？
属性：学号、姓名、年龄、班级...
内存布局：一片连续的空间，分别存储属性
会发生对齐现象！
#2.初始化
和数组类似
#3.对结构体的操作
1).获取成员：s1.name
2).赋值：s3=s1;分配空间进行copy数据
注意：当结构体作为参数或者返回值时，会拷贝整个结构体中的数据 值传递
#4.结构体指针
为了避免拷贝数据，我们往往会传递一个结构体指针
(*s).name 简化为 s->name
#5.取别名
typedef xxx xxx;
*/
#include<stdio.h>
#include<stdbool.h>
typedef struct student_s
{
	int number;
	char name[25];
	bool gender;// true -> male false -> femela
	int chinese;
	int math;
	int english;
} Student;
void print_student1(struct student_s s);
void print_student2(Student* s);
int main(void) {
	// 创建两个学生对象
	struct student_s s1 = { 1,"Allen",true,100,100,200 };
	Student s2 = { 2,"Bllen",false };// 未初始化的成员会被赋值为0

	printf("%zu\n", sizeof(s1));// 44
	print_student1(s1);
	print_student2(&s2);
	return 0;
}
void print_student1(struct student_s s) {
	printf("name = %s", s.name);
	s.math = 300;
}
void print_student2(Student* s) {
	printf("name = %s", (*s).name);
	(*s).math = 400;
}