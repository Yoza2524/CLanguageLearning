#include <stdio.h>

// 使用宏定义标识一个常量
// 宏定义是c语言中的一种预处理指令
#define MAX_VALUE 100

// 常量: 
// c语言中定义的常量 下不允许后续修改
int main() {
    const double PI = 3.14;
    printf("PI = %f\n", PI);

    printf("MAX_VALUE= %d\n", MAX_VALUE);
    return 0;
}