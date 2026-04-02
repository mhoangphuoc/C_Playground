// 02 - 027: SỐ LỘC PHÁT
#include <stdio.h>
int main() {
    int n, check;
    scanf("%d", &n);
    do {
        check = 1;
        if (n%10 != 0 && n%10 != 6 && n%10 != 8) {
            check = 0;
            break;
        }
        n /= 10;
    } while (n != 0);
    printf("%d", check == 1 ? 1 : 0);
    return 0;
}