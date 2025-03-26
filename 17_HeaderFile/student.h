// 头文件中也可以引用其他的头文件
#include <stdio.h>

// 为了避免 .h文件 中的内容被重复引用时的重复定义 使用 #ifndef 来排除

#ifndef STUDENT_H // 通常为文件名 小写字母 -> 大写字母  . -> _
#define STUDENT_H
int a = 10; // 在上面两行的作用下，即使当前文件被多次引用 a 也只会被定义一次了

typedef struct student { // 这里的 student 为结构体名称
    char *name;
    int age;
} Student; // 这里的 Student 为类型别名

#endif