#include <stdio.h>
#include <string.h>

/* 定义结构体的语法
    struct 结构体名称 {
        类型 结构体成员;
        类型 结构体成员;
        ...
    };
*/ 

struct student {
    char name[20];
    int age;
    float score;
};

// 结构体
int main() {
    // 定义结构体类型的变量
    struct student stu1 = {"xiaoming", 18, 59.9};

    // 后赋值 或者 不赋值
    struct student stu2;
    strcat(stu2.name, "xiaoming");
    stu2.age = 18;
    // stu2.score = 59.9;

    printf("name: %s, age: %d, score: %f", stu2.name, stu2.age, stu2.score);
}