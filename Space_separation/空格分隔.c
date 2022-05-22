#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char q = 0;
    int w = 0;
    float e = 0;
    scanf("%c", &q);
    scanf("%d", &w);
    scanf("%f", &e);
    printf("%c %d %.6f", q, w, e);
    return 0;
}