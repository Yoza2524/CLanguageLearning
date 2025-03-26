// 使用尖括号引用系统的头文件
#include <stdio.h>
// 引用自己定义的头文件时需要使用双引号
#include "student.h"


int main() {
    Student stu1 = {"张三", 20};
    printf("name: %s, age: %d\n", stu1.name, stu1.age);

    // 或者
    struct student stu2 = {"张三", 21};
    printf("name: %s, age: %d\n", stu2.name, stu2.age);
}