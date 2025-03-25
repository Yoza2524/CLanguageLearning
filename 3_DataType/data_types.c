#include <stdio.h>

// C语言是一种静态类型语言
// > 静态类型是指在编译时确定变量类型
//   特点: 编译时类型检查、类型安全、性能优化
//   代表语言: C C++ Java Rust
// > 动态类型是指在运行是确定变量类型
//   特点: 运行时类型检查、灵活性、易于原型开发
//   代表语言: Python JavaScript Ruby PHP

// C语言中的数据类型
// > 基本数据类型
//      整形 int、short、long、long long
//      字符型 char、
//      浮点型 float、double
// > 派生数据类型: 数组、指针、结构体、共用体、枚举、void(没有类型)

int main() {
    char c = 'A';
    // C语言中的char类型使用Ascii码存储
    printf("c = %c\n", c); // c = A
    printf("c = %d\n", c); // c = 65

    int i = 66;
    printf("i = %c\n", i); // i = B

    // 长整形的定义方式:
    // 在32位系统中 int 和 long int的大小都是4个字节， 64位系统中long int为8个字节
    long int l = 65;
    long long int ll = 65;

    // 单精度浮点类型 和 双精度浮点类型
    float f = 3.1415926535;  // 4个字节
    printf("f = %.10f\n", f); // f = 3.1415927410
    double d = 3.1415926535; // 8个字节
    printf("d = %.10f\n", d); // f = 3.1415926535
    return 0;
}

// 字节(Byte) 和 位(Bit)
// > Byte 形如: 01010101
//             其中的^为一个Bit