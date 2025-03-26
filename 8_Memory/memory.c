#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

// 内存操作
int main() {
    // 变量存放在栈内存，栈内存的大小一般是几M到几十M，所以存储的数据过大会导致栈溢出
    int a = 20;
    int b = 10;

    printf("a + b = %d \n", add(a, b));

    // 变量的作用域结束后会释放掉变量对应的栈内存

    // 堆内存，堆内存的分配和释放是通过函数来手动完成的
    // 使用 malloc函数 分配内存，参数为要分配内存的大小，返回值为申请到的内存
    int *p = (int *)malloc(sizeof(int));
    printf("p = %p\n", p);
    // 使用free函数释放内存，最好同时将变量赋值为空，来避免野指针问题
    free(p); 
    p = NULL;

    // 如果使用完的内存不释放，会导致使用的内存越来越多(内存泄露)
}