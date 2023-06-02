void changeMin(int arr[], int n) {
    int index1 = 0, index2 = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[index1]) {
            index2 = index1;
            index1 = i;
        } else if (index1 == index2 || arr[i] < arr[index2]) {
            index2 = i;
        }
    }
    if (index1 != index2) {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}