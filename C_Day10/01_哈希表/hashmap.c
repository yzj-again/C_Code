#include "hashmap.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
HashMap* HashMap_create() {
	return (HashMap*)calloc(1, sizeof(HashMap));
}
void HashMap_destory(HashMap* map) {
	// 每一条链加数组
	// 释放每一条链
	for (int i = 0; i < N; i++) {
		Entry* curr = map->table[i];
		while (curr != NULL)
		{
			// 保存后继节点
			Entry* next = curr->next;
			free(curr);
			curr = next;
		}
	}
	// 释放数组 <==> 释放HashMap结构体
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
	// 根据key获取索引
	int index = hash(key);
	// 遍历链表
	Entry* curr = map->table[index];
	while (curr != NULL)
	{
		// 判断key是否存在
		if (strcmp(key, curr->key) == 0) {
			return curr->val;
		}
		curr = curr->next;
	}
	// 不存在这样的 key
	return -1;
}
v HashMap_put(HashMap* map, k key, v val) {
	// 根据key获取索引
	int index = hash(key);
	// 遍历链表
	Entry* curr = map->table[index];
	while (curr != NULL)
	{
		// 判断key是否存在
		if (strcmp(key, curr->key) == 0) {
			v oldValue = curr->val;
			curr->val = val;
			return oldValue;
		}
		curr = curr->next;
	}
	// 不存在就添加节点
	// 创建键值对
	Entry* entry = (Entry*)malloc(sizeof(Entry));
	entry->key = key;
	entry->val = val;
	entry->next = map->table[index];
	map->table[index] = entry;
	return -1;
}
v HashMap_remove(HashMap* map, k key) {
	// 根据key获取索引
	int index = hash(key);
	// 遍历链表
	Entry* prev = NULL;
	Entry* curr = map->table[index];
	// 单链表删除
	while (curr != NULL)
	{
		// 判断key是否存在
		if (strcmp(key, curr->key) == 0) {
			// 删除节点
			// 首节点
			if (prev == NULL) {
				map->table[index] = curr->next;
			}// 非首节点
			else {
				prev->next = curr->next;
			}
			//释放空间
			v removeValue = curr->val;
			free(curr);
			return removeValue;
		}
		prev = curr;
		curr = curr->next;
	}
	// 不存在这样的 key
	return -1;
}