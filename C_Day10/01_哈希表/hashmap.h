#pragma once
// ½Ó¿Ú
#define N 20
typedef char* k;
typedef int v;
typedef struct entry_s {
	k key;
	v val;
	struct entry_s* next;
}Entry;
typedef struct {
	Entry* table[N];
}HashMap;

HashMap* HashMap_create();
void HashMap_destory(HashMap* map);

v HashMap_get(HashMap* map, k key);
v HashMap_put(HashMap* map, k key, v val);
v HashMap_remove(HashMap* map, k key);