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
	// *p++��ָ��'\0'����һ��λ��
	// *p��ָ��'\0'
}
// -----------------------------------------------
char* my_strcat(char* s1, char* s2) {
	// 1.����s1��ĩβ
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
	// 3.����ĩβ
	// *p = '\0';
	// ����д��'\0'Ҳ����ֵ��ȥ
	return s1;
}
