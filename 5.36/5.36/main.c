#include <stdio.h>
void hanoi(int n, char source, char target, char auxiliary);
int main() {
    int n;
    printf("請輸入圓盤的數量: ");
    scanf("%d", &n);
    printf("河內塔的移動步驟:\n");
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移動到 %c\n", source, target);
        return;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("將圓盤 %d 從 %c 移動到 %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}
