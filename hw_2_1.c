#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    int sum;
    printf("Input three nubers: \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    printf("%d + %d + %d = %d", a, b, c, sum);
    return 0;
}
