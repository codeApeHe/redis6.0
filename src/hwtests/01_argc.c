
/**
 * 测试argc、argv是啥？
 * C代码运行 (终端)
 *  gcc -o 01_argc 01_argc.c
 *  ./01_argc -h 127.0.0.1 -p 6379
 */
#include "stdio.h"

int main(int argc, char **argv){
    for (int i = 0; i < argc; ++i) {
        printf("传入的参数依次为:%s\n", argv[i]);
    }
    return 0;
}
