/*
一、计算机最小的寻址单位-字节
但多字节变量，变量的地址是变量的第一个字节的地址
指针，简单来说就是地址
指针变量，简单来说存放地址的变量，有时会把指针变量简称为指针
Q：指针表里只是存放了变量的首地址，那我们是怎么通过指针访问指针指向的对象？有几个字节？如何进行编码？
声明指针时，需要指明基础类型 int* p (int 基础类型)
注意：
1).变量名叫p，不叫*p
2).变量的类型为int*，而非int
int *p,q;
p是int*类型的指针，q是普通int类型
二、两个基本操作
取地址运算符：& int i = 1; int *p = &i;
解引用运算符：* 通过指针访问指针指向的对象
int i = 1; int* p = &i; *p = 2
*p相当于i的别名，修改*p相当于修改i
i->直接访问
*p->间接访问
三、野指针问题
野指针：未初始化或是指向未知区域的指针
int* p;
int*q = 0x7f;
注意：
对野指针进行解引用运算，会导致未定义的行为
四、指针变量的赋值
1).使用取地址运算符 p = &i;
2).通过另一个指针变量q赋值 p = q;
注意：
p = q改变指针的变量
*p = *q改变指针指向的对象
五、好处
值传递->指针方便使用->指针作为参数传递
值传递不能改变实参的值，而通过指针传递实参的地址，我们可以通过指针改变实参的值
*/
#include<stdio.h>
void swap(int* p, int* q);
void find_min_max(int arr[], int n, int* min, int* max);
int main(void) {
	// *int i = 1;
	// int* p = &i;
	// *p = 2;
	// printf("%d\n", i);*/
	// int a = 3, b = 4;
	// int* p = &a;
	// int* q = &b;
	// p = q;
	// printf("a = %d, b = %d\n", a, b);// a = 3, b = 4
	// printf("p = %d, q = %d\n", *p, *q);// p = 4, q = 4
	// *p = *q;
	// printf("a = %d, b = %d\n", a, b);// a = 4, b = 4
	// printf("p = %d, q = %d\n", *p, *q);// p = 4, q = 4
	//int a = 3, b = 4;
	//printf("a = %d, b = %d\n", a, b);
	//int* p = &a, * q = &b;
	//swap(p, q);
	//printf("a = %d, b = %d\n", a, b);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int min, max;
	find_min_max(arr, 10, &min, &max);
	printf("min = %d, max = %d\n", min, max);
	return 0;
}

void swap(int* p, int* q) {
	int temp;
	temp = *p;// temp = 3
	*p = *q;
	*q = temp;
}
void find_min_max(int arr[], int n, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] >= *max) {
			*max = arr[i];
		}
		else if (arr[i] < *min) {
			*min = arr[i];
		}

	}

}