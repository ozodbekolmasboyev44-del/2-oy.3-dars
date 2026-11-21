
#include <stdio.h>

void chiqar(int n) {
    if (n == 0) {
        return;
    }
    chiqar(n - 1);
 printf("%d ", n);
    
}

int main() {
    int n;

    printf("N sonini kiriting: ");
    scanf("%d", &n);

    chiqar(n);

    return 0;
}
