/*
注意：
1.+ - * / 可以用于浮点数，但%必须要求两个操作数都是整数
2.两个整数相除，其结果为整数 向0取整
3.i % j 的结果可能是负，符号与i的符号相同 取模必须满足：i%j = i - (i/j)*j
ex: 4 % 3 = 1  4 % -3 = 1  -4 % 3 = -1  -4 % -3 = -1
判断奇偶:n & 1    0 偶数 1 奇数
*/