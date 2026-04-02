// 02 - 026: KIỂM TRA SỐ ARMSTRONG
#include <stdio.h>
int main() {
    int n, k = 0, sum = 0;
    scanf("%d", &n);
    // count digits of n (k)
    int temp = n;
    while (temp != 0) {
        k++;
        temp /= 10;
    }
    // processing
    temp = n;
    do {
        int dig = temp%10;
        int pow = 1;
        for (int i = 1; i <= k; i++) {
            pow *= dig;
        }
        sum += pow;
        if (sum > n) break;
        temp /= 10;
    } while (temp != 0);
    printf("%d", sum == n ? 1 : 0);
    return 0;
}