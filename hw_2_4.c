#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    float res;
    printf("Input number: \n");
    scanf("%d", &num);
    res=((num/1000)+(num%1000/100)+(num%100/10)+(num%10))/4.f;
    printf("Result: %.2f\n",res);
    return 0;
}
