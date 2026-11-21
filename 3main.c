
#include <stdio.h>

int yigindi(int n) {
    int sum = 0;
    if (n == 0) {
        return 0;
    }
    
     return n + yigindi(n - 1);
    
} 

int main() {
    int n;

    printf("N sonini kiriting: ");
    scanf("%d", &n);

   printf("Yig'indi: %d",yigindi(n));

    return 0;
}
