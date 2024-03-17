#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    int sum;
    int milt;
    printf("Input three nubers: \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    milt = a * c * b;
    printf("%d + %d + %d = %d\n", a, b, c, sum);
    printf("%d * %d * %d = %d\n", a, b, c, milt);
    return 0;
}
