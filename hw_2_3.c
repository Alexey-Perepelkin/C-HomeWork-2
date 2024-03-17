#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int res;
    printf("Input two nubers: \n");
    scanf("%d %d", &a, &b);
    res = a - b;
    printf("Result: %d", res);
    return 0;
}
