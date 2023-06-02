int isPalindrom(int num) {
    char str[100];
    sprintf(str, "%d", num); // преобразуем число в строку
    int len = strlen(str);
    char *left = str;
    char *right = str + len - 1;
    while (left < right) {
        if (*left != *right) {
            return 0;
        }
        ++left;
        --right;
    }
    return 1;
}