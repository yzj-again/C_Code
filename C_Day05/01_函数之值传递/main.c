/*
#1.�����Ķ���
return_type func_name(parameter_list){
	ststement
}
#2.��������δ��ݵģ���ֵ���ݣ�ǳ����
����ڱ����������޸ĵ��ú�����ֵ��c ָ�� c++ ����
һά���� �˻�Ϊָ�봫��
������Ϊ�������ݣ��ᶪʧ������Ϣ�����鳤�ȣ�
�ô����˻�Ϊָ���һ��Ԫ�ص�ָ��
���Ա������ݵĸ���
�����޸�ԭ�����ֵ
�������û������Ҫ�������鳤�ȣ�
��ά���� �˻�Ϊָ�봫�ݣ�ֻ��ʡ������Ϣ������ʡ������Ϣ
1).Ϊʲô��ά������Ϊ���������ǣ�ֻ��ʡ���е���Ϣ������ʡ���е���Ϣ
��ַ��ʽi_j_addr = base_addr + i * columns * siezeof(element_type) + j * sizeof(element_type)
�õ����е���Ϣ columns
2).��û�а취����һ���������̶��Ķ�ά���飿
c���Բ��У���һ�ְ취��ָ������ һλ�������Ԫ����һ��ָ�룬���ָ��ָ��ͬ��һά����
#3.����ֵ
ע�⣺
����ֵ������һ������
#4.���������ֹ
����ϵͳ�����main����������Ŀ�ʼ��-> main������״̬�뷵�ظ�����ϵͳ���������ֹ��
���������main��������ֹ������exit() 0 �����˳� EXIT_SUCCES 1 �쳣�˳� EXIT_FAILURE
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
	// ָ������ a int*
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