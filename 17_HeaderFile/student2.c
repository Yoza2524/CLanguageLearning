#include <stdio.h>
#include "student.h"

// 使用头文件可以在两个文件中直接引用类型，而不用定义两次
int main() {
    Student stu1 = {"张三", 20};
    printf("name: %s, age: %d\n", stu1.name, stu1.age);
}