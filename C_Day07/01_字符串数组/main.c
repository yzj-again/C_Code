/*
Q：如何表示字符串数组？
用二维数组去表示，浪费内存空间
更好的，字符指针数组
*/

#include<stdio.h>
int main(void) {
	// 二维数组 "Mecury" 字符串数组
	/*char plants[][8] = { "Mecury","Venus","Earth","Mars","Jupitor","Saturn","Uranus","Neptune","Pluto" };*/
	// 字符指针数组
	// []的优先级 > * 一维数组里存放char* 指针 "Mecury"字符串字面量
	char* plants[] = { "Mecury","Venus","Earth","Mars","Jupitor","Saturn","Uranus","Neptune","Pluto" };
	return 0;
}