/*
#1.指向函数的指针，函数也会有地址，函数名本身就是一个指向函数代码的指针
test:对任意一个函数f，返回值为double，参数类型double，给定两点a，b求(fa+fb)/2
#2.回调函数是指通过函数指针将一个函数作为参数传递给另一个函数，并在另一个函数中调用该函数的过程。
回调函数常用于事件处理、排序、搜索等场景中。
compare函数是回调函数，sort函数是使用回调函数的函数。
sin函数是回调函数，average函数是使用回调函数的函数。
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415
double average(double (*f)(double), double a, double b);
int main(void) {
	double avg = average(sin, 0, PI);
	printf("avg = %f", avg);
	return 0;
}
double average(double (*f)(double), double a, double b) {
	return (*f)((a + b) / 2);
}