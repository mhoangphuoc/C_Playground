/* 02 -  023: Odd Number of Divisors
Problem:
Given a positive integer n, determine if the total number of its divisors is an odd number.

Input:
The first line contains the number of test cases T (1 <= T <= 100).
Each of the next T lines contains a single positive integer n (1 <= n <= 10^18).
Output:
For each test case, print YES if n has an odd number of divisors, otherwise print NO.*/
#include <stdio.h>
int main() {
    short t;
    scanf("%hd", &t);
    for (short caseT = 1; caseT <= t; caseT++) {
        long long n;
        long long count = 2;
        scanf("%lld", &n);
        if (n == 1) {
            printf("YES\n");
            continue;
        }
        for (long long i = 2; i <= n/i; i++) {
            if (n % i == 0) {
                if (i != n/i) {
                    count += 2;
                } else count++;
            }
        }
        printf("%s", (count % 2 == 0) ? "NO\n" : "YES\n");
    }
    return 0;
}