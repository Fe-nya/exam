int sumCarPrice(struct Car cars[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += cars[i].price;
    }
    return sum;
}