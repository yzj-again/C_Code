/*
#1.函数的定义
return_type func_name(parameter_list){
	ststement
}
#2.参数是如何传递的？（值传递）浅拷贝
如何在被调函数中修改调用函数的值？c 指针 c++ 引用
一维数组 退化为指针传递
数组作为参数传递，会丢失类型信息，数组长度；
好处：退化为指向第一个元素的指针
可以避免数据的复制
可以修改原数组的值
函数调用会更加灵活（要传递数组长度）
二维数组 退化为指针传递，只能省略行信息，不能省略列信息
1).为什么二维数组作为参数传递是，只能省略行的信息，不能省略列的信息
地址公式i_j_addr = base_addr + i * columns * siezeof(element_type) + j * sizeof(element_type)
用到了列的信息 columns
2).有没有办法传递一个列数不固定的二维数组？
c语言不行，想一种办法，指针数组 一位数组里的元素是一个指针，这个指针指向不同的一维数组
#3.返回值
注意：
返回值不能是一个数组
#4.程序如何终止
操作系统会调用main函数（程序的开始）-> main函数将状态码返回给操作系统（程序的终止）
如果不想在main函数中终止程序，用exit() 0 正常退出 EXIT_SUCCES 1 异常退出 EXIT_FAILURE
*/
#include<stdio.h>
#define SIZE(a) (sizeof(a)/sizeof(a[0]))
int sum_arr(int a[], int n);
int matrix_arr(int matrix[][4], int n);
int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int matrix[3][4] = { {1,2,3,4},{2,2,3,4},{3,2,3,4} };
	printf("sum = %d", sum_arr(arr, SIZE(arr)));
	printf("sum_matrix = %d", matrix_arr(matrix, 3));
	return 0;
}
int sum_arr(int a[], int n) {
	// 指针类型 a int*
	//
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
int matrix_arr(int matrix[][4], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}