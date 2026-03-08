// 02 - 010: TỔNG CHỮ SỐ CHẴN LẺ
#include <stdio.h>
int main() {
    long long n;
    short s1 = 0, s2 = 0;
    scanf("%lld", &n);
    do {
        if ((n%10) % 2 == 0)
            s1 += n % 10;
        else
            s2 += n % 10;    
        n = n / 10;
    } while (n > 0);
    printf("%hd\n%hd", s1, s2);
    return 0;
}