/*
һ���������С��Ѱַ��λ-�ֽ�
�����ֽڱ����������ĵ�ַ�Ǳ����ĵ�һ���ֽڵĵ�ַ
ָ�룬����˵���ǵ�ַ
ָ�����������˵��ŵ�ַ�ı�������ʱ���ָ��������Ϊָ��
Q��ָ�����ֻ�Ǵ���˱������׵�ַ������������ôͨ��ָ�����ָ��ָ��Ķ����м����ֽڣ���ν��б��룿
����ָ��ʱ����Ҫָ���������� int* p (int ��������)
ע�⣺
1).��������p������*p
2).����������Ϊint*������int
int *p,q;
p��int*���͵�ָ�룬q����ͨint����
����������������
ȡ��ַ�������& int i = 1; int *p = &i;
�������������* ͨ��ָ�����ָ��ָ��Ķ���
int i = 1; int* p = &i; *p = 2
*p�൱��i�ı������޸�*p�൱���޸�i
i->ֱ�ӷ���
*p->��ӷ���
����Ұָ������
Ұָ�룺δ��ʼ������ָ��δ֪�����ָ��
int* p;
int*q = 0x7f;
ע�⣺
��Ұָ����н��������㣬�ᵼ��δ�������Ϊ
�ġ�ָ������ĸ�ֵ
1).ʹ��ȡ��ַ����� p = &i;
2).ͨ����һ��ָ�����q��ֵ p = q;
ע�⣺
p = q�ı�ָ��ı���
*p = *q�ı�ָ��ָ��Ķ���
�塢�ô�
ֵ����->ָ�뷽��ʹ��->ָ����Ϊ��������
ֵ���ݲ��ܸı�ʵ�ε�ֵ����ͨ��ָ�봫��ʵ�εĵ�ַ�����ǿ���ͨ��ָ��ı�ʵ�ε�ֵ
*/
#include<stdio.h>
void swap(int* p, int* q);
void find_min_max(int arr[], int n, int* min, int* max);
int main(void) {
	// *int i = 1;
	// int* p = &i;
	// *p = 2;
	// printf("%d\n", i);*/
	// int a = 3, b = 4;
	// int* p = &a;
	// int* q = &b;
	// p = q;
	// printf("a = %d, b = %d\n", a, b);// a = 3, b = 4
	// printf("p = %d, q = %d\n", *p, *q);// p = 4, q = 4
	// *p = *q;
	// printf("a = %d, b = %d\n", a, b);// a = 4, b = 4
	// printf("p = %d, q = %d\n", *p, *q);// p = 4, q = 4
	//int a = 3, b = 4;
	//printf("a = %d, b = %d\n", a, b);
	//int* p = &a, * q = &b;
	//swap(p, q);
	//printf("a = %d, b = %d\n", a, b);
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int min, max;
	find_min_max(arr, 10, &min, &max);
	printf("min = %d, max = %d\n", min, max);
	return 0;
}

void swap(int* p, int* q) {
	int temp;
	temp = *p;// temp = 3
	*p = *q;
	*q = temp;
}
void find_min_max(int arr[], int n, int* min, int* max) {
	*min = arr[0];
	*max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] >= *max) {
			*max = arr[i];
		}
		else if (arr[i] < *min) {
			*min = arr[i];
		}

	}

}