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

    printf("�п�J��Ӿ��: ");
    scanf("%d %d", &num1, &num2);
    int lcm = LCM(num1, num2);
    printf("��ӼƦr %d �M %d ���̤p�����ƬO: %d\n", num1, num2, lcm);
    return 0;
}
