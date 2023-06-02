#include <stdio.h>

int main() {
    int n, count = 0, sum = 0;
    float average;
    scanf("%d", &n);
    while (n != 0) {
        if (n % 10 == 3) {
            count++;
            sum += n;
        }
        scanf("%d", &n);
    }
    if (count > 0) {
        average = (float)sum / count;
        printf("Среднее значение элементов, оканчивающихся на 3: %.f\n", average);
    } else {
        printf("В последовательности нет элементов, оканчивающихся на 3\n");
    }
    return 0;
}