# Exercise 001: *Sum of Arithmetic Series 1*

### Problem:
Given a positive integer $n$, calculate the sum of the following series:
$$S = 1 + 2 + 3 + \dots + n$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 15     |
| 10    | 55     |
| 1000000000 | 500000000500000000 |

-------------------------------

# Exercise 002: *Sum of Squares*

### Problem:
Given a positive integer $n$, calculate the sum of the squares of the first $n$ positive integers:
$$S = 1^2 + 2^2 + 3^2 + \dots + n^2$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 14     |
| 5     | 55     |
| 10    | 385    |

-------------------------------

# Exercise 003: *Harmonic Series*

### Problem:
Given a positive integer $n$, calculate the sum of the following series:
$$S = 1 + \frac{1}{2} + \frac{1}{3} + \dots + \frac{1}{n}$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
A single floating-point number representing the sum $S$, formatted to three decimal places.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     | 1.000  |
| 2     | 1.500  |
| 5     | 2.283  |

-------------------------------

# Exercise 004: *Sum of Even Reciprocals*

### Problem:
Given a positive integer $n$, calculate the sum of the following series:
$$S = \frac{1}{2} + \frac{1}{4} + \frac{1}{6} + \dots + \frac{1}{2n}$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
A single floating-point number representing the sum $S$, formatted to two decimal places.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     | 0.50   |
| 2     | 0.75   |
| 10    | 1.46   |

-------------------------------

# Exercise 005: *Alternating Sum*

### Problem:
Given a positive integer $n$, calculate the sum of the following alternating series:
$$S = -1 + 2 - 3 + 4 - 5 + \dots + (-1)^n \times n$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^{15})$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | -2     |
| 4     | 2      |
| 1000000000000000 | 500000000000000 |

-------------------------------

# Exercise 006: *Sum of Even Numbers*

### Problem:
Given a positive integer $n$, calculate the sum of the first $n$ even positive integers:
$$S = 2 + 4 + 6 + \dots + 2n$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 12     |
| 5     | 30     |
| 1000000 | 1000001000000 |

-------------------------------

# Exercise 007: *Sum of Odd Numbers*

### Problem:
Given a positive integer $n$, calculate the sum of the first $n$ odd positive integers:
$$S = 1 + 3 + 5 + \dots + (2n - 1)$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 9      |
| 5     | 25     |
| 1000000 | 1000000000000 |

-------------------------------

# Exercise 008: *Sum of Cubes*

### Problem:
Given a positive integer $n$, calculate the sum of the cubes of the first $n$ positive integers:
$$S = 1^3 + 2^3 + 3^3 + \dots + n^3$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^4)$.

### Output:
A single integer representing the sum $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 36     |
| 4     | 100    |
| 10    | 3025   |

-------------------------------

# Exercise 009: *Sum of Digits*

### Problem:
Given an integer $n$, calculate the sum of its digits.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
For each test case, print the sum of the digits of $n$ on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 12345 | 15     |
| 999   | 27     |

-------------------------------

# Exercise 010: *Sum of Even and Odd Digits*

### Problem:
Given an integer $n$, calculate the sum of its even digits and the sum of its odd digits separately.

### Input:
A single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
Two integers representing the sum of even digits and the sum of odd digits respectively, each on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 12     |
|       | 9      |

-------------------------------

# Exercise 011: *Sum of Divisors*

### Problem:
Calculate the sum of all positive divisors of a given positive integer $n$.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single integer $n$ $(1 \le n \le 10^9)$.

### Output:
For each test case, print the sum of divisors of $n$ on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |        |
| 6     | 12     |
| 10    | 18     |
| 1     | 1      |

-------------------------------

# Exercise 012: *Product of Digits*

### Problem:
Given an integer $n$, calculate the product of all its digits.

### Input:
A single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
A single integer representing the product of the digits of $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123   | 6      |
| 105   | 0      |

-------------------------------

# Exercise 013: *Factorial*

### Problem:
Given a natural number $n$, calculate its factorial ($n!$).

### Input:
A single natural number $n$ $(0 \le n \le 20)$.

### Output:
A single integer representing the value of $n!$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 120    |
| 0     | 1      |

-------------------------------

# Exercise 014: *Binary Exponentiation*

### Problem:
Calculate $a^b$ for two non-negative integers $a$ and $b$.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each test case consists of two integers $a$ and $b$ $(0 \le a, b \le 60, a^b \le 10^{18})$.

### Output:
For each test case, print the result of $a^b$ on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 2 10  | 1024   |
| 5 3   | 125    |

-------------------------------

# Exercise 015: *Sum of Multiples of 3*

### Problem:
Given a positive integer $n$, calculate the sum of all positive integers less than or equal to $n$ that are divisible by 3.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single integer representing the sum.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 18     |
| 3     | 3      |

-------------------------------------

# Exercise 016: *Prime Number Check*

### Problem:
Given an integer $n$, determine if it is a prime number.

### Input:
A single integer $n$ $(-10^9 \le n \le 10^9)$.

### Output:
Print `1` if $n$ is a prime number, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 7     | 1      |
| 1     | 0      |
| -2    | 0      |

-------------------------------------

# Exercise 017: *Coprime Numbers*

### Problem:
Given two positive integers $a$ and $b$, determine if they are coprime (i.e., their greatest common divisor is 1).

### Input:
Two positive integers $a$ and $b$ $(1 \le a, b \le 10^{12})$.

### Output:
Print `YES` if $a$ and $b$ are coprime, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 8 15  | YES    |
| 12 18 | NO     |

-------------------------------------

# Exercise 018: *Prime Factorization*

### Problem:
Given a positive integer $n$, perform the prime factorization of $n$.

### Input:
A single positive integer $n$ $(2 \le n \le 10^9)$.

### Output:
Print the prime factors of $n$ in ascending order, separated by spaces. If a factor appears multiple times, print it multiple times.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28    | 2 2 7  |
| 100   | 2 2 5 5|

-------------------------------------

# Exercise 019: *K-th Prime Factor*

### Problem:
Find the $k$-th prime factor in the prime factorization of a positive integer $n$. Factors should be listed in non-decreasing order. For example, if $n=28$, its prime factorization is $2 \times 2 \times 7$. If $k=3$, the result is $7$.

### Input:
Two positive integers $n$ and $k$ $(1 \le n, k \le 10^9)$.

### Output:
Print the $k$-th prime factor. If the total number of prime factors is less than $k$, print `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28 3  | 7      |
| 8 4   | -1     |

-------------------------------------

# Exercise 020: *Perfect Number Check*

### Problem:
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example: $6 = 1 + 2 + 3$. Given $n$, determine if it is a perfect number.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single integer $n$ $(1 \le n \le 10^{18})$.

### Output:
For each test case, print `YES` if $n$ is a perfect number, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 6     | YES    |
| 10    | NO     |

-------------------------------------

# Exercise 021: *Palindromic Number Check*

### Problem:
A palindromic number is a number that reads the same forwards and backwards. Given a positive integer $n$, determine if it is a palindromic number.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
For each test case, print `YES` if $n$ is a palindromic number, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 121   | YES    |
| 123   | NO     |

-------------------------------------

# Exercise 022: *Perfect Square Check*

### Problem:
A perfect square is an integer that is the square of an integer. Given a positive integer $n$, determine if it is a perfect square.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
For each test case, print `YES` if $n$ is a perfect square, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 16    | YES    |
| 20    | NO     |

-------------------------------------

# Exercise 023: *Odd Number of Divisors*

### Problem:
Given a positive integer $n$, determine if the total number of its divisors is an odd number.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
For each test case, print `YES` if $n$ has an odd number of divisors, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 9     | YES    |
| 10    | NO     |

-------------------------------------

# Exercise 024: *Increasing or Decreasing Primes*

### Problem:
A number is called "increasing" if each digit is greater than or equal to the digit to its left. A number is called "decreasing" if each digit is less than or equal to the digit to its left. Given the number of digits $n$, count how many prime numbers with $n$ digits satisfy either the increasing or decreasing property.

### Input:
A single positive integer $n$ $(1 \le n \le 6)$.

### Output:
A single integer representing the count of $n$-digit prime numbers that are either increasing or decreasing.

### Example:
| INPUT | OUTPUT |
| ----: | :----- |
|     1 | 4      |
|     2 | 21     |
|     3 | 69     |
|     4 | 158    |
|     5 | 354    |
|     6 | 724    |

-------------------------------------

# Exercise 025: *Strong Number Check*

### Problem:
A Strong number is a number where the sum of the factorials of its digits is equal to the number itself. For example: $145 = 1! + 4! + 5!$. Given $n$, determine if it is a Strong number.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
Print `1` if $n$ is a Strong number, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 145   | 1      |
| 123   | 0      |

-------------------------------------

# Exercise 026: *Armstrong Number Check*

### Problem:
An Armstrong number of $k$ digits is a number where the sum of its digits each raised to the power of $k$ is equal to the number itself. For example: $371$ has 3 digits, and $371 = 3^3 + 7^3 + 1^3$. Given $n$, determine if it is an Armstrong number.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
Print `1` if $n$ is an Armstrong number, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 371   | 1      |
| 153   | 1      |
| 123   | 0      |

-------------------------------------

# Exercise 027: *Luck-Wealth Number*

### Problem:
A number is considered a "Luck-Wealth" number if it consists only of the digits 0, 6, and 8. Given a positive integer $n$, check if it is a Luck-Wealth number.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
Print `1` if $n$ is a Luck-Wealth number, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 6680  | 1      |
| 168   | 0      |

-------------------------------------

# Exercise 028: *Fibonacci Membership Check*

### Problem:
Given a positive integer $n$, determine if it belongs to the Fibonacci sequence.

### Input:
A single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
Print `1` if $n$ is a Fibonacci number, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 8     | 1      |
| 10    | 0      |

-------------------------------------

# Exercise 029: *First N Fibonacci Numbers*

### Problem:
The Fibonacci sequence is defined as: $F_0 = 0, F_1 = 1, F_i = F_{i-1} + F_{i-2}$. Given an integer $n$, print the first $n$ numbers of the Fibonacci sequence.

### Input:
A single positive integer $n$ $(2 \le n \le 92)$.

### Output:
$n$ Fibonacci numbers starting from $F_0$, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 0 1 1 2 3 |

-------------------------------------

# Exercise 030: *First and Last Digits*

### Problem:
Given an integer $n$, find and print its first digit and its last digit.

### Input:
A single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
Two integers representing the first digit and the last digit respectively, separated by a space.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 1 5    |
| 7     | 7 7    |

-------------------------------------

# Exercise 031: *Swap First and Last Digits*

### Problem:
Given a positive integer $n$, swap its first and last digits. If the original last digit is $0$, it should be omitted if it becomes a leading zero after the swap (e.g., $9800$ becomes $809$).

### Input:
A single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
The integer after swapping the first and last digits.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 52341  |
| 9800  | 809    |
| 7     | 7      |
| 100000000000000008 | 800000000000000001 |

-------------------------------------

# Exercise 032: *Smallest N-Digit Multiple*

### Problem:
Given four positive integers $x, y, z,$ and $n$. Find the smallest positive integer that has exactly $n$ digits and is divisible by $x, y,$ and $z$.

### Input:
Four positive integers $x, y, z,$ and $n$ $(1 \le x, y, z \le 10^4; n \le 16)$.

### Output:
The smallest $n$-digit integer divisible by $x, y, z$. If no such number exists, print `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2 3 5 3 | 120   |
| 3 4 6 2 | 12    |
| 5 10 15 1 | -1  |
| 1000 1000 1000 16 | 1000000000000000 |

-------------------------------------

# Exercise 033: *GCD and LCM*

### Problem:
Find the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two non-negative integers $a$ and $b$.

### Input:
Two non-negative integers $a$ and $b$ $(0 \le a, b \le 10^9)$.

### Output:
Two integers representing the GCD and LCM respectively, separated by a space.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12 18 | 6 36   |
| 0 5   | 5 0    |
| 1000000000 999999999 | 1 999999999000000000 |

-------------------------------------

# Exercise 034: *Even-Odd Balanced Number*

### Problem:
A number is considered "balanced" if the count of its even digits equals the count of its odd digits. Given a positive integer $n$, print `YES` if it is balanced, otherwise print `NO`.

### Input:
A single positive integer $n$ $(0 \le n \le 10^{18})$.

### Output:
Print `YES` or `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1234  | YES    |
| 123   | NO     |
| 0     | NO     |
| 100000000000000002 | YES |

-------------------------------------

# Exercise 035: *Euler's Totient Function*

### Problem:
Count the number of positive integers up to $n$ that are coprime to $n$. This is known as Euler's totient function $\phi(n)$.

### Input:
A single positive integer $n$ $(1 \le n \le 10^{16})$.

### Output:
The value of $\phi(n)$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 4      |
| 1     | 1      |
| 9999999999999999 | 6480000000000000 |

-------------------------------------

# Exercise 036: *Euler's Totient List*

### Problem:
Given a positive integer $n$, print the value of $\phi(i)$ for all $i$ such that $1 \le i \le n$.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each test case consists of a single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
For each test case, print $n$ integers $\phi(1), \phi(2), \dots, \phi(n)$ on a single line, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     |        |
| 5     | 1 1 2 2 4 |

-------------------------------------

# Exercise 037: *List Primes Smaller than N*

### Problem:
Given a positive integer $n$, list all prime numbers strictly smaller than $n$.

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
All primes less than $n$ in ascending order, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 2 3 5 7|
| 2     |        |
| 20    | 2 3 5 7 11 13 17 19 |

-------------------------------------

# Exercise 038: *Primes in a Range*

### Problem:
Given two positive integers $L$ and $R$, find all prime numbers $p$ such that $L \le p \le R$.

### Input:
Two positive integers $L$ and $R$ $(1 \le L \le R \le 10^9; R - L \le 10^6)$.

### Output:
All prime numbers in the range $[L, R]$ in ascending order, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10 20 | 11 13 17 19 |
| 1 5   | 2 3 5  |
| 999999900 1000000000 | 999999929 999999931 |

-------------------------------------

# Exercise 039: *Primes with Digits Sum Divisible by 5*

### Problem:
Given a positive integer $n$, list all prime numbers $p < n$ such that the sum of the digits of $p$ is divisible by 5. Additionally, output the total count of such numbers.

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
- The first line contains the prime numbers satisfying the condition, separated by spaces.
- The second line contains the total count of these numbers.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 20    | 5 19   |
|       | 2      |

-------------------------------------

# Exercise 040: *Primes with Largest Last Digit*

### Problem:
Given a positive integer $n$, list all prime numbers $p < n$ such that the last digit of $p$ is the largest digit in that number. Additionally, output the total count of such numbers.

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
- The first line contains the prime numbers satisfying the condition, separated by spaces.
- The second line contains the total count of these numbers.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 30    | 2 3 5 7 11 13 17 19 23 29 |
|       | 10     |

-------------------------------------

# Exercise 041: *Distinct Prime Factors*

### Problem:
Given a positive integer $n$, perform the prime factorization and list all its prime factors. Each prime factor should be listed only once, in ascending order.

### Input:
A single positive integer $n$ $(2 \le n \le 10^9)$.

### Output:
The distinct prime factors of $n$ separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28    | 2 7    |
| 100   | 2 5    |
| 999999937 | 999999937 |
| 1024  | 2      |

-------------------------------------

# Exercise 042: *Perfect Squares in a Range*

### Problem:
Given two positive integers $a$ and $b$, list all perfect squares $x$ such that $a \le x \le b$.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains two positive integers $a$ and $b$ $(1 \le a \le b \le 10^{12})$.

### Output:
For each test case, print all perfect squares in the range $[a, b]$ on a single line, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     |        |
| 1 20  | 1 4 9 16 |
| 50 100| 64 81 100 |
| 1000000000000 1000002000001 | 1000000000000 1000001000000 1000002000001 |

-------------------------------------

# Exercise 043: *Strong Numbers in a Range*

### Problem:
Given two positive integers $L$ and $R$, find all Strong numbers in the range $[L, R]$. If no such numbers exist, print `0`.

### Input:
Two positive integers $L$ and $R$ $(1 \le L, R \le 10^6)$.

### Output:
The Strong numbers found in the range, separated by spaces. If none, print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 150 | 1 2 145 |
| 3 100 | 0      |
| 1 1   | 1      |

-------------------------------------

# Exercise 044: *List All Divisors*

### Problem:
Given a positive integer $n$, list all its positive divisors in ascending order.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
All divisors of $n$ separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12    | 1 2 3 4 6 12 |
| 7     | 1 7    |
| 1     | 1      |
| 999999999 | 1 3 9 ... 999999999 |

-------------------------------------

# Exercise 045: *List Armstrong Numbers*

### Problem:
Given a positive integer $n$, list all Armstrong numbers strictly smaller than $n$.

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
All Armstrong numbers less than $n$ separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 500   | 1 2 3 4 5 6 7 8 9 153 370 371 407 |
| 10    | 1 2 3 4 5 6 7 8 9 |

-------------------------------------

# Exercise 046: *Perfect Numbers Smaller than N*

### Problem:
Given a positive integer $n$, list all perfect numbers strictly smaller than $n$.

### Input:
A single positive integer $n$ $(1 \le n \le 10^4)$.

### Output:
All perfect numbers less than $n$ separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 30    | 6 28   |
| 5     |        |
| 500   | 6 28 496 |

-------------------------------------

# Exercise 047: *Perfect Numbers in a Range*

### Problem:
Given two positive integers $L$ and $R$, find all perfect numbers in the range $[L, R]$. If no such numbers exist, print `0`.

### Input:
Two positive integers $L$ and $R$ $(1 \le L, R \le 10^4)$.

### Output:
The perfect numbers found in the range in ascending order, separated by spaces. If none, print `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 30  | 6 28   |
| 7 27  | 0      |

-------------------------------------

# Exercise 048: *Palindromes Excluding Digit 9*

### Problem:
Given an integer $n$, list all palindromic numbers $x$ such that $1 < x < n$ and $x$ does not contain the digit 9. Also, output the total count of such numbers.

### Input:
A single positive integer $n$ $(1 \le n \le 10^6)$.

### Output:
- The first line contains the qualifying numbers separated by spaces.
- The second line contains the total count.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 20    | 2 3 4 5 6 7 8 11 |
|       | 8      |
| 100   | 2 3 4 5 6 7 8 11 22 33 44 55 66 77 88 |
|       | 15     |

-------------------------------------

# Exercise 049: *Reversible Primes*

### Problem:
A number is considered "beautiful" if it is a prime number and its reverse is also a different prime number. Given two positive integers $L$ and $R$, list all such numbers in the range $[L, R]$.

### Input:
Two positive integers $L$ and $R$ $(1 \le L \le R \le 10^6)$.

### Output:
All beautiful numbers in the range in ascending order, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10 20 | 13 17  |
| 1 10  |        |
| 10 100| 13 17 31 37 71 73 79 97 |

-------------------------------------

# Exercise 050: *Special Palindromic Numbers*

### Problem:
A number is considered "beautiful" if it satisfies three conditions:
1. It is a palindromic number.
2. It contains at least one digit `6`.
3. The sum of its digits ends in the digit `8`.

List all such numbers in the range $[L, R]$ and provide the total count.

### Input:
Two positive integers $L$ and $R$ $(1 \le L \le R \le 10^6)$.

### Output:
- The first line contains the beautiful numbers in ascending order, separated by spaces.
- The second line contains the total count.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 1000| 161 616 666 |
|       | 3      |
| 1 100 |        |
|       | 0      |

-------------------------------------

# Exercise 051: *Beautiful Numbers Type 1*

### Problem:
A number is considered "beautiful" if it is divisible by a prime $p$ and also divisible by $p^2$. In other words, $n$ is beautiful if it has at least one prime factor $p$ such that $p^2$ is also a divisor of $n$. List all such numbers in the range $[a, b]$.

### Input:
Two positive integers $a$ and $b$ $(1 \le a \le b \le 10^6)$.

### Output:
The beautiful numbers in the range, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 20  | 4 8 9 12 16 18 20 |
| 1 3   |        |
| 999990 1000000 | 999992 999996 999999 1000000 |

-------------------------------------

# Exercise 052: *Beautiful Numbers Type 2*

### Problem:
A number is considered "beautiful" if for every prime $p$ that divides $n$, $p^2$ also divides $n$. List all such numbers in the range $[a, b]$.

### Input:
Two positive integers $a$ and $b$ $(1 \le a \le b \le 10^6)$.

### Output:
The beautiful numbers in the range, separated by spaces.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 50  | 1 4 8 9 16 25 27 32 36 49 |
| 10 30 | 16 25 27 |
| 10^12 10^12+100 | (Hidden stress case for large range) |

-------------------------------------

# Exercise 053: *Beautiful Numbers Type 3*

### Problem:
A number is considered "beautiful" if it is a prime number and the sum of its digits is a Fibonacci number. List all such numbers in the range $[a, b]$.

### Input:
Two positive integers $a$ and $b$ $(1 \le a \le b \le 10^9; b - a \le 10^6)$.

### Output:
All beautiful numbers in the range $[a, b]$. If none exist, print `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 20  | 2 3 5 11 17 |
| 20 30 | 23     |
| 90 100| -1     |

-------------------------------------

# Exercise 054: *Beautiful Numbers Type 4*

### Problem:
A number is considered "beautiful" if it is a palindromic number and has at least 3 distinct prime factors. List all such numbers in the range $[a, b]$.

### Input:
Two positive integers $a$ and $b$ $(1 \le a \le b \le 10^9; b - a \le 10^6)$.

### Output:
All beautiful numbers in the range $[a, b]$ separated by spaces. If none exist, print `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 500 | 66 121 231 (Assuming 3 factors) |
| 1 100 | -1     |
| 999999000 1000000000 | (Hidden stress case) |

-------------------------------------

# Exercise 055: *Count Total Digits*

### Problem:
Given an integer $n$, count the total number of digits it contains.

### Input:
A single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
A single integer representing the number of digits.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 5      |
| 0     | 1      |
| 1000000000000000000 | 19 |

-------------------------------------

# Exercise 056: *Count Even and Odd Digits*

### Problem:
Given a positive integer $n$ with no more than 9 digits, count how many of its digits are even and how many are odd.

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
Two integers: the count of odd digits and the count of even digits, separated by a space.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 3 3    |
| 2468  | 0 4    |
| 1357  | 4 0    |

-------------------------------------

# Exercise 057: *Count Increasing or Decreasing Primes*

### Problem:
A number is "increasing" if each digit is $\ge$ the digit to its left. A number is "decreasing" if each digit is $\le$ the digit to its left. Count the prime numbers with exactly $n$ digits that satisfy either property.

### Input:
A single integer $n$ $(1 \le n \le 6)$.

### Output:
A single integer representing the count.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     | 20     |
| 1     | 4      |

-------------------------------------

# Exercise 058: *Count Prime Digits*

### Problem:
Given an integer $n$, count how many of its digits are prime numbers (the prime digits are 2, 3, 5, and 7).

### Input:
A single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
A single integer representing the count of prime digits.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 3      |
| 777   | 3      |
| 888   | 0      |

-------------------------------------

# Exercise 059: *Frequency of Prime Digits*

### Problem:
Given an integer $n$, count the number of occurrences of each prime digit (2, 3, 5, 7). List them in the order they first appear in the number $n$.

### Input:
A single integer $n$ $(0 \le n \le 10^{18})$.

### Output:
For each prime digit present, print the digit and its frequency, separated by a space. Each pair should be on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 23552 | 2 2    |
|       | 3 1    |
|       | 5 2    |

-------------------------------------

# Exercise 060: *Count Perfect Squares in Range*

### Problem:
Given two integers $a$ and $b$, count how many perfect squares $x$ exist such that $a \le x \le b$.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each test case consists of two positive integers $a$ and $b$ $(1 \le a \le b \le 10^{12})$.

### Output:
For each test case, print the count on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 1 10  | 3      |
| 1 100 | 10     |
| 1000000000000 1000002000001 | 3 |

-------------------------------------

# Exercise 061: *Count Divisors*

### Problem:
Given a positive integer $n$, count the total number of its positive divisors.

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each of the next $T$ lines contains a single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
For each test case, print the total number of divisors of $n$ on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |        |
| 6     | 4      |
| 16    | 5      |
| 1000000000 | 100    |

-------------------------------------

# Exercise 062: *Count Divisors of n!*

### Problem:
Given a non-negative integer $n$, calculate the number of divisors of $n!$ (n factorial).

### Input:
- The first line contains the number of test cases $T$ $(1 \le T \le 100)$.
- Each test case consists of a single integer $n$ $(1 \le n \le 100)$.

### Output:
For each test case, print the number of divisors of $n!$ on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 3     | 4      |
| 5     | 16     |
| 20    | 41040  |

-------------------------------------

# Exercise 063: *Balanced Palindromic Numbers*

### Problem:
A number is considered "beautiful" if it is a palindromic number and the sum of its digits is divisible by 10. Given the number of digits $k$, count how many such beautiful numbers exist.

### Input:
A single positive integer $k$ $(1 \le k \le 18)$.

### Output:
A single integer representing the count of $k$-digit beautiful numbers.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     | 1      |
| 3     | 9      |
| 10    | 90000  |

-------------------------------------

# Exercise 064: *Pure Prime Numbers*

### Problem:
A number is "pure prime" if:
1. It is a prime number.
2. All of its digits are prime digits (2, 3, 5, 7).
3. The sum of its digits is also a prime number.
Count how many such numbers exist in the range $[a, b]$.

### Input:
Two positive integers $a$ and $b$ $(1 \le a \le b \le 10^9; b - a \le 10^6)$.

### Output:
The total count of pure prime numbers in the range.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 100 | 4      |
| 200 500 | 5     |
| 10^8 10^8+10^6 | (Hidden stress case) |

-------------------------------------

# Exercise 065: *Sort by Digit Sum*

### Problem:
Given two integers $a$ and $b$, sort them in ascending order based on the sum of their digits. If the sums are equal, maintain the original relative order (print $a$ before $b$).

### Input:
Two positive integers $a$ and $b$ $(1 \le a, b \le 10^{18})$.

### Output:
The two numbers separated by a space, sorted according to the criteria.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 15 20 | 20 15  |
| 121 13| 121 13 |
| 99 1000 | 1000 99 |

-------------------------------------

# Exercise 066: *Sorted Prime Digit Frequency*

### Problem:
Count the occurrences of prime digits (2, 3, 5, 7) in a given number $n$. Display the results sorted by the digit value in ascending order.

### Input:
A single positive integer $n$ $(1 \le n \le 10^{18})$.

### Output:
For each prime digit present, print the digit and its frequency on a new line.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 72352 | 2 2    |
|       | 3 1    |
|       | 5 1    |
|       | 7 1    |

-------------------------------------

# Exercise 067: *Number Pattern Square*

### Problem:
Given a positive integer $n$, print an $n \times n$ square where the numbers increment sequentially from $1$ to $n^2$.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid of numbers.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 1 2 3  |
|       | 4 5 6  |
|       | 7 8 9  |
| 1     | 1      |

-------------------------------------

# Exercise 068: *Solid Star Square*

### Problem:
Given a positive integer $n$, print a solid square of stars (`*`) with side length $n$.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid of stars.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | \*\*\*\* |
|       | \*\*\*\* |
|       | \*\*\*\* |
|       | \*\*\*\* |
| 2     | \*\* |
|       | \*\* |

-------------------------------------

# Exercise 069: *Hollow Star Square*

### Problem:
Given a positive integer $n$, print a hollow square of stars (`*`) with side length $n$. Only the boundary should contain stars; the inside remains empty (represented by spaces or dots in logic).

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ hollow star square.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | \*\*\*\* |
|       | \*&nbsp;&nbsp;\* |
|       | \*&nbsp;&nbsp;\* |
|       | \*\*\*\* |
| 1     | \* |

-------------------------------------

# Exercise 070: *Solid Star Rectangle*

### Problem:
Given two positive integers $R$ (rows) and $C$ (columns), print a solid rectangle of stars (`*`).

### Input:
Two positive integers $R$ and $C$ $(1 \le R, C \le 50)$.

### Output:
An $R \times C$ grid of stars.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3 5   | \*\*\*\*\* |
|       | \*\*\*\*\* |
|       | \*\*\*\*\* |

-------------------------------------

# Exercise 071: *Hollow Star Rectangle*

### Problem:
Given two positive integers $R$ (rows) and $C$ (columns), print a hollow rectangle of stars (`*`).

### Input:
Two positive integers $R$ and $C$ $(1 \le R, C \le 50)$.

### Output:
An $R \times C$ hollow star rectangle.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5 5   | \*\*\*\*\* |
|       | \*&nbsp;&nbsp;&nbsp;\* |
|       | \*&nbsp;&nbsp;&nbsp;\* |
|       | \*&nbsp;&nbsp;&nbsp;\* |
|       | \*\*\*\*\* |

-------------------------------------

# Exercise 072: *Alternating 0-1 Checkerboard*

### Problem:
Given a positive integer $n$, print an $n \times n$ grid where the values `0` and `1` alternate both horizontally and vertically (like a checkerboard), starting with `1`.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid of alternating 0s and 1s.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 101    |
|       | 010    |
|       | 101    |
| 2     | 10     |
|       | 01     |

-------------------------------------

# Exercise 073: *Row-Alternating 0-1 Rectangle*

### Problem:
Given two positive integers $R$ and $C$, print a rectangle where each row consists entirely of either `1`s or `0`s, alternating by row.

### Input:
Two positive integers $R$ and $C$ $(1 \le R, C \le 50)$.

### Output:
An $R \times C$ row-alternating grid.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4 5   | 11111  |
|       | 00000  |
|       | 11111  |
|       | 00000  |

-------------------------------------

# Exercise 074: *Sliding Number Grid*

### Problem:
Given a positive integer $n$, print an $n \times n$ grid where each row $i$ starts at value $i$ and increments for $n$ steps.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ sliding number grid.

### Example:
| INPUT | OUTPUT                                                            |
| ----: | :---------------------------------------------------------------- |
|     3 | 1 2 3                                                             |
|       | 2 3 4                                                             |
|       | 3 4 5                                                             |
|     5 | 1 2 3 4 5 <br>2 3 4 5 6 <br>3 4 5 6 7 <br>4 5 6 7 8 <br>5 6 7 8 9 |

-------------------------------------

# Exercise 075: *Number Grid Sequential (Duplicate)*

### Problem:
Given a positive integer $n$, print an $n \times n$ square where the numbers increment sequentially from $1$ to $n^2$.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid of numbers.

### Example:
| INPUT | OUTPUT      |
| ----: | :---------- |
|     4 | 1 2 3 4     |
|       | 5 6 7 8     |
|       | 9 10 11 12  |
|       | 13 14 15 16 |

-------------------------------------

# Exercise 076: *Nested Concentric Squares*

### Problem:
Given a positive integer $n$, print a pattern of concentric squares where the outer layer starts from $n-1$ (or a specified value) and decreases towards the center. The total size of the grid is $(2n-1) \times (2n-1)$.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
A $(2n-1) \times (2n-1)$ grid of numbers representing concentric layers.

### Example:
| INPUT | OUTPUT                                                                                                                    |
| ----: | :------------------------------------------------------------------------------------------------------------------------ |
|     3 | 2 2 2 2 2 <br>2 1 1 1 2 <br>2 1 0 1 2 <br>2 1 1 1 2 <br>2 2 2 2 2                                                         |
|     4 | 4 4 4 4 4 4 4 <br>4 3 3 3 3 3 4 <br>4 3 2 2 2 3 4 <br>4 3 2 1 2 3 4 <br>4 3 2 2 2 3 4 <br>4 3 3 3 3 3 4 <br>4 4 4 4 4 4 4 |

-------------------------------------

# Exercise 077: *Decreasing Step Grid*

### Problem:
Given a positive integer $n$, print an $n \times n$ grid where the numbers stay constant horizontally until the diagonal is reached, then decrease.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid following the specified pattern.

### Example:
| INPUT | OUTPUT                                                            |
| ----: | :---------------------------------------------------------------- |
|     3 | 3 3 3 <br>3 2 2 <br>3 2 1                                         |
|     5 | 5 5 5 5 5 <br>5 4 4 4 4 <br>5 4 3 3 3 <br>5 4 3 2 2 <br>5 4 3 2 1 |

-------------------------------------

# Exercise 078: *Absolute Difference Grid*

### Problem:
Given a positive integer $n$, print an $n \times n$ grid where the value at cell $(i, j)$ is related to the distance from the diagonal, specifically $1 + |i - j|$.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid of absolute distance values.

### Example:
| INPUT | OUTPUT                                      |
| ----: | :------------------------------------------ |
|     4 | 1 2 3 4 <br>2 1 2 3 <br>3 2 1 2 <br>4 3 2 1 |
|     3 | 1 2 3 <br>2 1 2 <br>3 2 1                   |

-------------------------------------

# Exercise 079: *Increasing and Bound Grid*

### Problem:
Given a positive integer $n$, print an $n \times n$ grid where each row $i$ starts at $i$, increments by 1 until it hits $n$, and then maintains $n$ for the rest of the row.

### Input:
A single positive integer $n$ $(1 \le n \le 50)$.

### Output:
An $n \times n$ grid following the bound pattern.

### Example:
| INPUT | OUTPUT                                                            |
| ----: | :---------------------------------------------------------------- |
|     4 | 1 2 3 4 <br>2 3 4 4 <br>3 4 4 4 <br>4 4 4 4                       |
|     5 | 1 2 3 4 5 <br>2 3 4 5 5 <br>3 4 5 5 5 <br>4 5 5 5 5 <br>5 5 5 5 5 |

-------------------------------------

# Exercise 080: *Pascal's Triangle*

### Problem:
Given a positive integer $n$, print the first $n$ rows of Pascal's Triangle. Each element at row $i$ and column $k$ is calculated as:
$$C(i, k) = \frac{i!}{k!(i-k)!}$$

### Input:
A single positive integer $n$ $(1 \le n \le 30)$.

### Output:
$n$ rows of Pascal's Triangle, with elements separated by spaces.

### Example:
| INPUT | OUTPUT                          |
| ----: | :------------------------------ |
|     4 | 1 <br>1 1 <br>1 2 1 <br>1 3 3 1 |
|     1 | 1                               |

-------------------------------------

# Exercise 081: *Left-Aligned Right Triangle*

### Problem:
Given a height $h$, print a left-aligned right triangle made of stars (`*`).

### Input:
A single positive integer $h$ $(1 \le h \le 50)$.

### Output:
A triangle of stars with height $h$.

### Example:
| INPUT | OUTPUT                                  |
| ----: | :-------------------------------------- |
|     3 | *<br>**<br>***                          |
|     5 | * <br> ** <br> *** <br> **** <br> ***** |

-------------------------------------

# Exercise 082: *Hollow Left-Aligned Right Triangle*

### Problem:
Given a height $h$, print a hollow left-aligned right triangle. The boundary is made of stars (`*`) and the interior is empty.

### Input:
A single positive integer $h$ $(1 \le h \le 50)$.

### Output:
A hollow triangle of stars.

### Example:
| INPUT | OUTPUT                            |
| ----: | :-------------------------------- |
|     4 | * <br> ** <br> *&nbsp;* <br> **** |
|     2 | * <br> **                         |

-------------------------------------

# Exercise 083: *Hollow Inverted Right Triangle*

### Problem:
Given a height $h$, print a hollow inverted left-aligned right triangle.

### Input:
A single positive integer $h$ $(1 \le h \le 50)$.

### Output:
An inverted hollow triangle of stars.

### Example:
| INPUT | OUTPUT                                                 |
| ----: | :----------------------------------------------------- |
|     4 | **** <br> *&nbsp;* <br> ** <br> *                      |
|     5 | ***** <br> *&nbsp;&nbsp;* <br> *&nbsp;* <br> ** <br> * |

-------------------------------------

# Exercise 084: *Right-Aligned Right Triangle*

### Problem:
Given a height $h$, print a right-aligned right triangle using stars (`*`). Use a placeholder character (like `~`) or spaces for the alignment.

### Input:
A single positive integer $h$ $(1 \le h \le 50)$.

### Output:
A right-aligned triangle of stars.

### Example:
| INPUT | OUTPUT                             |
| ----: | :--------------------------------- |
|     3 | ~~* <br> ~** <br> ***              |
|     4 | ~~~* <br> ~~** <br> ~*** <br> **** |

-------------------------------------

# Exercise 085: *Hollow Right-Aligned Right Triangle*

### Problem:
Given a height $h$, print a hollow right-aligned right triangle.

### Input:
A single positive integer $h$ $(1 \le h \le 50)$.

### Output:
A hollow, right-aligned triangle of stars.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | ~~~~* <br> ~~~** <br> ~~*&nbsp;* <br> ~*&nbsp;&nbsp;* <br> ***** |
| 3     | ~~* <br> ~** <br> *** |

-------------------------------------

# Exercise 086: *Right-Aligned Inverted Right Triangle of Asterisks*

### Problem:
Write a program to input the height $n$ and print a right-aligned inverted right triangle using asterisks (*).

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The right-aligned inverted right triangle of height $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | ***** <br> &nbsp;**** <br> &nbsp;&nbsp;*** <br> &nbsp;&nbsp;&nbsp;** <br> &nbsp;&nbsp;&nbsp;&nbsp;* |

-------------------------------------

# Exercise 087: *Hollow Right-Aligned Inverted Right Triangle*

### Problem:
Write a program to input the height $n$ and print a hollow right-aligned inverted right triangle using asterisks (*).

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The hollow right-aligned inverted right triangle of height $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | ***** <br> &nbsp;*&nbsp;&nbsp;* <br> &nbsp;&nbsp;*&nbsp;* <br> &nbsp;&nbsp;&nbsp;** <br> &nbsp;&nbsp;&nbsp;&nbsp;* |

-------------------------------------

# Exercise 088: *Number Triangle Pattern 1*

### Problem:
Given an integer $n$, print a triangle where each row $i$ contains numbers from $1$ to $i$.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The number triangle pattern.

### Example:
| INPUT | OUTPUT                                        |
| ----: | :-------------------------------------------- |
|     5 | 1 <br>1 2 <br>1 2 3 <br>1 2 3 4 <br>1 2 3 4 5 |

-------------------------------------

# Exercise 089: *Number Triangle Pattern 2*

### Problem:
Given an integer $n$, print a triangle where numbers are filled column-wise according to the specified pattern.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The number triangle following the pattern.

### Example:
| INPUT | OUTPUT                                              |
| ----: | :-------------------------------------------------- |
|     5 | 1 <br>2 6 <br>3 7 10 <br>4 8 11 13 <br>5 9 12 14 15 |

-------------------------------------

# Exercise 090: *Number Triangle Pattern 3*

### Problem:
Given an integer $n$, print a triangle where odd rows are in increasing order and even rows are in decreasing order (zig-zag pattern).

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The zig-zag number triangle.

### Example:
| INPUT | OUTPUT                           |
| ----: | :------------------------------- |
|     4 | 1 <br>3 2 <br>4 5 6 <br>10 9 8 7 |

-------------------------------------

# Exercise 091: *Number Triangle Pattern 4*

### Problem:
Given an integer $n$, print a triangle where each number is generated by adding an increasing increment starting from 1.

### Input:
A single positive integer $n$ ($1 \le n \le 50$).

### Output:
The number triangle pattern.

### Example:
| INPUT | OUTPUT                                |
| ----: | :------------------------------------ |
|     4 | 1 <br>2 4 <br>7 11 16 <br>22 29 37 46 |

-------------------------------------

# Exercise 092: *Even Number Triangle Pattern 5*

### Problem:
Given an integer $n$, print a triangle where each row $i$ contains even numbers increasing to a peak of $2i$ and then decreasing back to 2.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The even number triangle pattern.

### Example:
| INPUT | OUTPUT                                                             |
| ----: | :----------------------------------------------------------------- |
|     5 | 2 <br>2 4 2 <br>2 4 6 4 2 <br>2 4 6 8 6 4 2 <br>2 4 6 8 10 8 6 4 2 |

-------------------------------------

# Exercise 093: *Centered Number Triangle Pattern 6*

### Problem:
Given an integer $n$, print a centered triangle where each row $i$ consists of the digit $i$ repeated $2i-1$ times.

### Input:
A single positive integer $n$ ($1 \le n \le 9$).

### Output:
The centered number triangle.

### Example:
| INPUT | OUTPUT                                |
| ----: | :------------------------------------ |
|     3 | &nbsp;&nbsp;1 <br>&nbsp;222 <br>33333 |

-------------------------------------

# Exercise 094: *Centered Even Triangle Pattern 7*

### Problem:
Given an integer $n$, print a centered triangle of even numbers. Each row $i$ increases by 2 up to $2i$ and then decreases back to 2.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The centered even triangle.

### Example:
| INPUT | OUTPUT                                |
| ----: | :------------------------------------ |
|     3 | &nbsp;&nbsp;2 <br>&nbsp;242 <br>24642 |

-------------------------------------

# Exercise 095: *Centered Odd Triangle Pattern 8*

### Problem:
Given an integer $n$, print a centered triangle of odd numbers. Each row $i$ increases through consecutive odd numbers up to $2i-1$ and then decreases back to 1.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The centered odd triangle.

### Example:
| INPUT | OUTPUT                                |
| ----: | :------------------------------------ |
|     3 | &nbsp;&nbsp;1 <br>&nbsp;131 <br>13531 |

-------------------------------------

# Exercise 096: *Parallelogram of Asterisks*

### Problem:
Given an integer $n$, print a parallelogram where each side has length $n$.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
A parallelogram of asterisks shifted to the left.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | &nbsp;&nbsp;&nbsp;&nbsp;***** <br> &nbsp;&nbsp;&nbsp;***** <br> &nbsp;&nbsp;***** <br> &nbsp;***** <br> ***** |

-------------------------------------

# Exercise 097: *Reverse Parallelogram of Asterisks*

### Problem:
Given the number of rows $r$ and columns $c$, print a reverse parallelogram of asterisks shifted to the right.

### Input:
Two positive integers $r$ and $c$ ($1 \le r, c \le 100$).

### Output:
The reverse parallelogram pattern.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3 4   | **** <br> &nbsp;**** <br> &nbsp;&nbsp;**** |

-------------------------------------

# Exercise 098: *Rhombus of Asterisks*

### Problem:
Given an integer $n$, print a solid rhombus (diamond shape) made of asterisks with $2n-1$ rows.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The rhombus pattern.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | &nbsp;&nbsp;* <br> &nbsp;*** <br> ***** <br> &nbsp;*** <br> &nbsp;&nbsp;* |

-------------------------------------

# Exercise 099: *Right-Side Half Rhombus*

### Problem:
Given an integer $n$ representing the maximum width, print the right-side half of a rhombus.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The right-side half rhombus pattern.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | * <br> ** <br> *** <br> ** <br> * |

-------------------------------------

# Exercise 100: *Box with Rhombus Inset*

### Problem:
Given an integer $n$, print a square of size $2n \times 2n$ containing a hollow diamond-shaped inset.

### Input:
A single positive integer $n$ ($1 \le n \le 50$).

### Output:
The pattern of a box with a rhombus inset.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | ****** <br> **&nbsp;&nbsp;** <br> *&nbsp;&nbsp;&nbsp;&nbsp;* <br> *&nbsp;&nbsp;&nbsp;&nbsp;* <br> **&nbsp;&nbsp;** <br> ****** |

-------------------------------------

# Exercise 101: *Left-Pointing Arrow*

### Problem:
Given an integer $n$, print a left-pointing arrow pattern using asterisks.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The left-pointing arrow pattern.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | &nbsp;&nbsp;*** <br> &nbsp;** <br> * <br> &nbsp;** <br> &nbsp;&nbsp;*** |

-------------------------------------

# Exercise 102: *Right-Pointing Arrow*

### Problem:
Given an integer $n$, print a right-pointing arrow pattern using asterisks.

### Input:
A single positive integer $n$ ($1 \le n \le 100$).

### Output:
The right-pointing arrow pattern.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | *** <br> &nbsp;** <br> &nbsp;&nbsp;* <br> &nbsp;** <br> *** |
