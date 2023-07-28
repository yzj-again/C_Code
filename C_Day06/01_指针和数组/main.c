/*
#1.数组名作为指针
数组名可以作为指向索引为0的指针p *取值运算符
#2.指针也可以作为数组名使用
对指针使用[]运算符
p[i]=*(p+i)
总结：
1).可以利用指针处理数组
2).数组名可以作为指向该数组索引为0元素的指针
3).指针也可以作为数组名（p[i]=*(p+i)）
*/
#include<stdio.h>
int find_largest(int* p, int n);
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,17,8,9,10 };
	// *arr = 100;// *p++ <==>*(p++)
	// *(arr + 7) = 600;
	// 数组作为指针时，是一个指针常量，只能指向第一个数组元素
	// arr++;// error
	int sum = 0;
	for (int* p = arr; p < arr + 10; p++) {
		sum += *p;
	}
	printf("sum = %d\n", sum);
	printf("fin_max = %d\n", find_largest(arr, 10));
	return 0;
}
int find_largest(int* p, int n) {
	// int max = arr[0];
	// for (int i = 0; i < n; i++) {
	// 	 if (arr[i] > max) {
	//		max = arr[i];
	//	 }
	//	 p += 1;
	// }
	int largest = *p;// p[0]<==>*(p+0)
	// printf("%d", p[6]);
	for (int i = 0; i < n; i++) {
		if (*(p + i) > largest) {
			largest = *(p + i);
		}
	}
	return largest;
}