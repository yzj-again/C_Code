#include "hashmap.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
HashMap* HashMap_create() {
	return (HashMap*)calloc(1, sizeof(HashMap));
}
void HashMap_destory(HashMap* map) {
	// ÿһ����������
	// �ͷ�ÿһ����
	for (int i = 0; i < N; i++) {
		Entry* curr = map->table[i];
		while (curr != NULL)
		{
			// �����̽ڵ�
			Entry* next = curr->next;
			free(curr);
			curr = next;
		}
	}
	// �ͷ����� <==> �ͷ�HashMap�ṹ��
	free(map);
}
int hash(char* key) {
	int h = 0, g;
	while (*key)
	{
		h = (h << 4) + *key++; g = h & 0xf0000000;
		if (g)
			h ^= g >> 24;
		h &= ~g;
	}
	return h % N;
}
v HashMap_get(HashMap* map, k key) {
	// ����key��ȡ����
	int index = hash(key);
	// ��������
	Entry* curr = map->table[index];
	while (curr != NULL)
	{
		// �ж�key�Ƿ����
		if (strcmp(key, curr->key) == 0) {
			return curr->val;
		}
		curr = curr->next;
	}
	// ������������ key
	return -1;
}
v HashMap_put(HashMap* map, k key, v val) {
	// ����key��ȡ����
	int index = hash(key);
	// ��������
	Entry* curr = map->table[index];
	while (curr != NULL)
	{
		// �ж�key�Ƿ����
		if (strcmp(key, curr->key) == 0) {
			v oldValue = curr->val;
			curr->val = val;
			return oldValue;
		}
		curr = curr->next;
	}
	// �����ھ���ӽڵ�
	// ������ֵ��
	Entry* entry = (Entry*)malloc(sizeof(Entry));
	entry->key = key;
	entry->val = val;
	entry->next = map->table[index];
	map->table[index] = entry;
	return -1;
}
v HashMap_remove(HashMap* map, k key) {
	// ����key��ȡ����
	int index = hash(key);
	// ��������
	Entry* prev = NULL;
	Entry* curr = map->table[index];
	// ������ɾ��
	while (curr != NULL)
	{
		// �ж�key�Ƿ����
		if (strcmp(key, curr->key) == 0) {
			// ɾ���ڵ�
			// �׽ڵ�
			if (prev == NULL) {
				map->table[index] = curr->next;
			}// ���׽ڵ�
			else {
				prev->next = curr->next;
			}
			//�ͷſռ�
			v removeValue = curr->val;
			free(curr);
			return removeValue;
		}
		prev = curr;
		curr = curr->next;
	}
	// ������������ key
	return -1;
}