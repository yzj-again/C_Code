/*
����Ŀ�ʼ������ϵͳ����main����
����Ľ�����main���ء�exit()
�������--״̬��-->����ϵͳ
����ϵͳ--����-->����ʼ
Ĭ�ϣ�argc = 1 E:\File\C-Program\C\C_Code\C_Day07\x64\Debug\02_�����в���.exe
�Ҽ���Ŀ->����->����->������� �����Կո�ָ�
argc = 3
E:\File\C-Program\C\C_Code\C_Day07\x64\Debug\02_�����в���.exe ��ִ�г����·�����̶���
Hello
World
����Ҳ����ͨ����������������

*/
#include<stdio.h>
int main(int argc, char* argv[]) {
	printf("argc = %d", argc);
	for (int i = 0; i < argc; i++) {
		puts(argv[i]);
	}
	return 0;
}