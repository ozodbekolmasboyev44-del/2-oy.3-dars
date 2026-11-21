
#include <stdio.h>

int  raqamlarSoni(int n) {
    if (n == 0) {
        return 0;
    }

   return 1 + raqamlarSoni(n / 10);
}

int main() {
    int n;

    printf("Natural son kiriting: ");
    scanf("%d", &n);

     if (n == 0) {
        printf("Raqamlar soni: 1");
    } else {
        printf("Raqamlar soni: %d", raqamlarSoni(n));
    }
    return 0;
}
