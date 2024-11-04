#include <stdio.h>
void hanoi(int n, char source, char target, char auxiliary);
int main() {
    int n;
    printf("�п�J��L���ƶq: ");
    scanf("%d", &n);
    printf("�e���𪺲��ʨB�J:\n");
    hanoi(n, 'A', 'C', 'B'); 
    return 0;
}
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("�N��L 1 �q %c ���ʨ� %c\n", source, target);
        return;
    }
    hanoi(n - 1, source, auxiliary, target);
    printf("�N��L %d �q %c ���ʨ� %c\n", n, source, target);
    hanoi(n - 1, auxiliary, target, source);
}
