/*
程序的开始：操作系统调用main函数
程序的结束：main返回、exit()
程序结束--状态码-->操作系统
操作系统--参数-->程序开始
默认：argc = 1 E:\File\C-Program\C\C_Code\C_Day07\x64\Debug\02_命令行参数.exe
右键项目->属性->调试->命令参数 参数以空格分割
argc = 3
E:\File\C-Program\C\C_Code\C_Day07\x64\Debug\02_命令行参数.exe 可执行程序的路径（固定）
Hello
World
我们也可以通过命令行启动程序

*/
#include<stdio.h>
int main(int argc, char* argv[]) {
	printf("argc = %d", argc);
	for (int i = 0; i < argc; i++) {
		puts(argv[i]);
	}
	return 0;
}