/*
Q：统计每个小写字母出现的次数
('a',2),('b',3) -> (key,value) 键值对
void get(key)
void put(key,value)
bool remove(key)
键：1.范围不大 2.键可以转换成数组的索引 key-'a'
哈希函数：打散键值对，让键值对尽量平均分布
两个问题：哈希函数；解决冲突（拉链法）指针数组
*/
#include"hashmap.h"
#include<stdio.h>
int main() {
	HashMap* map = HashMap_create();
	HashMap_put(map, "liuqiangdong", 1);
	HashMap_put(map, "zhangqiandong", 2);
	HashMap_put(map, "wangqidong", 3);
	printf("val = %d", HashMap_get(map, "liuqiangdong"));
	printf("val = %d", HashMap_get(map, "zhangqiandong"));
	printf("val = %d", HashMap_get(map, "wangqidong"));
	return 0;
}