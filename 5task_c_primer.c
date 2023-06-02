#include <stdio.h>

struct Car {
    char* brand;
    char* model;
    int price;
};

int sumCarPrice(struct Car cars[], int n);

int main() {
    struct Car cars[] = {
        {"Toyota", "Camry", 25000},
        {"Honda", "Civic", 20000},
        {"Subaru", "Forester", 28000},
        {"Ford", "Mustang", 35000}
    };
    int n = sizeof(cars) / sizeof(struct Car);

    int total_price = sumCarPrice(cars, n);

    printf("Суммарная стоимость всех машин: %d\n", total_price);

    return 0;
}

int sumCarPrice(struct Car cars[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += cars[i].price;
    }
    return sum;
}