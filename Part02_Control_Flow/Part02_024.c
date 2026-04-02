// 02 - 024: SỐ NGUYÊN TỐ KHÔNG GIẢM HOẶC KHÔNG TĂNG
#include <stdio.h>
int main() {
    int n, min = 1, count = 0;
    scanf("%d", &n);
    // Data range to be processed (n)
    for (int i = 1; i < n; i++) {
        min *= 10;
    }
    printf("%d - %d\n", min, min*10 -1); // test
    // isIncreasing or isDecreasing
    for (int i = min; i <= min*10 -1; i++) {
        int inc = 0;
        int dec = 0;
        int temp = i;
        for (int a = 1; a < n; a++) {
            if (temp%10 > (temp/10)%10) {
                inc = 1;
            }
            if (temp%10 < (temp/10)%10) {
                dec = 1;
            } 
            temp /= 10;
        }
        if (!(inc && dec)) { // inc != dec || (dec == 0 && inc == 0)
            // isPrime
            int isPrime = (i < 2) ? 0 : 1;
            for (int b = 2; b <= i/b; b++) {
                isPrime = i%b == 0 ? 0 : 1;
                if (isPrime == 0) break;
            }
            if (isPrime == 1) {
                printf("%d - prime\n", i); // test
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}