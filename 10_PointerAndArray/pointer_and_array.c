#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    // 定义数组指针时，指向数组中的第一个值
    int *p = a;
    printf("*p = %d\n", *p); // *p = 1

    // 使用 *p = xxx 为指针指向的变量赋值
    *p = 10;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p); // *p = 2

    // 使用 p = p + 1 将指针指向第二个值
    p += 1; // p++
    printf("p = %p\n", p);
    printf("*p = %d\n", *p); // *p = 2
    // 同样的 p = p - 1 可以使指针再次指向第一个值
}