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
        scanf("%lld", &n);
        long long low = 1L, high = 1000000000L;
        long long ans = 0;
        while (low <= high) {
            long long temp = low + (high - low)/2;
            if (temp <= n/temp) {
                ans = temp;
                low = temp + 1;
            } else high = temp - 1;
        }
        printf("%s", ans * ans == n ? "YES\n": "NO\n");
    }
    return 0;
}