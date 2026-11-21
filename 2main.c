
#include <stdio.h>

void chiqar(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    chiqar(n - 1);
    
}

int main() {
    int n;

    printf("N sonini kiriting: ");
    scanf("%d", &n);

    chiqar(n);

    return 0;
}
