#include <stdio.h>
#include <stdlib.h>
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int LCM(int a, int b) {
    return abs(a * b) / GCD(a, b);
}
int main() {
    int num1, num2;

    printf("請輸入兩個整數: ");
    scanf("%d %d", &num1, &num2);
    int lcm = LCM(num1, num2);
    printf("兩個數字 %d 和 %d 的最小公倍數是: %d\n", num1, num2, lcm);
    return 0;
}
