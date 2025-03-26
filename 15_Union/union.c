#include <stdio.h>


/* 定义共用体的语法
    union 结构体名称 {
        类型 结构体成员;
        类型 结构体成员;
        ...
    };
*/ 

union student
{
    char name[20];
    int age;
};

// 共用体
int main() {
    // 共用体的所有内容共享一块内存空间
    union student stu1;
    
    // stu1.name = "lihua";
    stu1.age = 18;

    printf("stu1: name: %s, age: %d", stu1.name, stu1.age); // stu1: name: , age: 18

    // 早期因为内存紧张，所以共用体的使用频率高，现在共用体了解即可
}
