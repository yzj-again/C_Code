/*
#1.动态内存分配
在堆上分配内存空间
1.void* 通用指针类型，可以转换成任意类型的指针
它是一个"指向无类型(void)"的指针，意味着它可以指向任何类型的数据。
void* malloc(size_t size)分配sieze个字节的内存，不会内存块清零；若分配不成功，返回空指针
2.void* calloc(size_t num, size_t size)
往往给数组分配内存空间，为num个元素分配内存空间，每个元素的大小为size个字节，并对内存块清零；若分配不成功，返回空指针
3.void* realloc(void* ptr, size_t new_size)
调整先前分配内存块的大小，如果分配成功，返回指向新内存的指针；若分配不成功，返回空指针
注意：ptr应该指向先前动态内存分配函数分配的内存块进行调整
#2.空指针：不指向任何对象的指针（用宏NULL表示，其值为0）统一指向0（未初始化或指向不明的指针是野指针）
#3.释放内存空间
不释放，可能会造成内存泄露现象，不能再被访问的内存称为垃圾 有垃圾=内存泄露
void free(void* ptr)ptr必须是先前调用malloc、calloc、relloc返回的指针
Q：ptr只是指向申请内存块的首地址，那free如何知道该释放多大的内存？
会多申请一些内存空间，包括size
使用free虽然可以避免内存泄露，但会引入一个新的问题：悬空指针
悬空指针是指一个指针变量指向无效的内存地址，该地址可能已经释放或未分配给该指针。
当程序试图访问一个悬空指针时，它可能会导致未定义的行为，例如崩溃、数据损坏或其他错误。
悬空指针是非常难以发现的，释放指针p，会导致所有指向相同内存块的指针都悬空
*/

#include<stdio.h>
#include<stdlib.h>
char* my_strcat(const char* s1, const char* s2);
int main(void) {
	char* s1 = "Hello";
	char* s2 = " World";
	char* s = my_strcat(s1, s2);
	puts(s1);
	puts(s2);
	puts(s);
	return 0;
}
char* my_strcat(const char* s1, const char* s2) {
	char* s = (char*)malloc(strlen(s1) + strlen(s2) + 1);// 指明强转
	// 然而，由于 void* 是一个通用指针类型，在使用之前你需要明确地将其转换为适当的指针类型。
	if (s == NULL) {
		// 错误处理 goto
		return NULL;
	}
	strcpy(s, s1);
	strcat(s, s2);
	return s;
}
