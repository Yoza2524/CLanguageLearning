#include <stdio.h>
#include <string.h>

// 字符串
int main() {
    // 字符串其实就是一个字符数组，数组的最后一项为空字符 用于表示字符数组的结束

    char c[20] = {'H', 'e', 'l', 'l', 'o', '\0'}; // 如果指定c为足够长的长度会导致乱码
    printf("%s\n", c);

    // 通常情况下会直接使用双引号来定义字符串
    char s[] = "World";
    printf("%s\n", s);

    char *p = "Hello World";
    printf("p: %s\n", p);
    p += 3;
    printf("p + 3: %s\n", p);

    // 字符串相关的函数需要引用 string.h
    // 字符串拼接
    char *cs = strcat(c, s);
    printf("cat: %s\n", cs);
    printf("cat: %s\n", c);
    // 比较 复制等操作都有对应的函数，除此之外 还有很多带有n的函数如 strncat 表示最长操作字符
}