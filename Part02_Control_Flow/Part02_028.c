/* 02 - 028: Fibonacci Membership Check
Problem:
Given a positive integer n, determine if it belongs to the Fibonacci sequence.

Input:
A single positive integer n (1 <= n <= 10^18).

Output:
Print 1 if n is a Fibonacci number, otherwise print 0.*/
#include <stdio.h> 
#include <math.h>
int main() {
    long long n, x1, x2;
    double y1, y2;
    scanf("%lld", &n);
    x1 = 5*n*n + 4;
    x2 = 5*n*n -4;
    y1 = sqrt(x1);
    y2 = sqrt(x2);
    printf("%lld - %.2f\n%lld - %.2f", x1, y1, x2, y2);
    return 0;
}