/*
#1.��������Ϊָ��
������������Ϊָ������Ϊ0��ָ��p *ȡֵ�����
#2.ָ��Ҳ������Ϊ������ʹ��
��ָ��ʹ��[]�����
p[i]=*(p+i)
�ܽ᣺
1).��������ָ�봦������
2).������������Ϊָ�����������Ϊ0Ԫ�ص�ָ��
3).ָ��Ҳ������Ϊ��������p[i]=*(p+i)��
*/
#include<stdio.h>
int find_largest(int* p, int n);
int main(void) {
	int arr[10] = { 1,2,3,4,5,6,17,8,9,10 };
	// *arr = 100;// *p++ <==>*(p++)
	// *(arr + 7) = 600;
	// ������Ϊָ��ʱ����һ��ָ�볣����ֻ��ָ���һ������Ԫ��
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