/*
�ṹ��
#1.C���ԵĽṹ��Լ�����������Ե���
ֻ����ֻ���ڽṹ���ж������ݣ��޷����巽��
Q������һ��ѧ������
���ԣ�ѧ�š����������䡢�༶...
�ڴ沼�֣�һƬ�����Ŀռ䣬�ֱ�洢����
�ᷢ����������
#2.��ʼ��
����������
#3.�Խṹ��Ĳ���
1).��ȡ��Ա��s1.name
2).��ֵ��s3=s1;����ռ����copy����
ע�⣺���ṹ����Ϊ�������߷���ֵʱ���´�������ṹ���е����� ֵ����
#4.�ṹ��ָ��
Ϊ�˱��⿽�����ݣ����������ᴫ��һ���ṹ��ָ��
(*s).name ��Ϊ s->name
#5.ȡ����
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
	// ��������ѧ������
	struct student_s s1 = { 1,"Allen",true,100,100,200 };
	Student s2 = { 2,"Bllen",false };// δ��ʼ���ĳ�Ա�ᱻ��ֵΪ0

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