#include <stdio.h>

float sumFoo(int n) {
    float sum = 0.0;

    for(int i=1; i<n; i++) {
        sum += (float)1/i/(i+1);
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Результат суммы: %.f\n", sumFoo(n));
    return 0;
}