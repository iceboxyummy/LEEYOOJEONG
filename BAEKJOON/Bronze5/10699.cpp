// 백준 10699 오늘날짜

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <time.h>

int main() 
{
    time_t timer;
    struct tm* t;
    timer = time(NULL); 
    t = localtime(&timer); 

    printf("%4d-%02d-%2d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);

    return 0;
}