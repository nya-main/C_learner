#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("char范围: %d 到 %d,unsigned char为: 0 到 %u\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("short范围: %d 到 %d,unsigned short为:0 到 %u\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("int范围: %d 到 %d,unsigned int为 0 到 %u\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("long范围: %ld 到 %ld,unsigned long为 0 到 %lu\n", LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("long long 范围: %lld 到 %lld,unsigned long long为 0 到 %llu\n", LLONG_MIN, LLONG_MAX, ULLONG_MAX);
}
