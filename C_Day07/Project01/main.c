#include<stdio.h>
size_t my_strlen1(const char* s);
size_t my_strlen2(const char* s);
size_t my_strlen3(const char* s);
int main(void) {

	return 0;
}
size_t my_strlen1(const char* s) {
	size_t n = 0;
	while (*s != '\0') {
		s++;
		n++;
	}
	return n;
}
size_t my_strlen2(const char* s) {
	size_t n;
	while (*s++) {
		n++;
	}
	return n;
}
size_t my_strlen3(const char* s) {
	char* p = s;
	while (*p) {
		p++;
	}
	return p - s;
	// *p++会指向'\0'的下一个位置
	// *p会指向'\0'
}
// -----------------------------------------------
char* my_strcat(char* s1, char* s2) {
	// 1.搜索s1的末尾
	char* p = s1;
	while (*p) {
		p++;
	}
	// 2.copy
	// while (*s2) {
	//	 *p++w = *s2++;
	// }
	while (*p++ = *s2++)
		;
	// 3.处理末尾
	// *p = '\0';
	// 以上写法'\0'也被赋值过去
	return s1;
}
