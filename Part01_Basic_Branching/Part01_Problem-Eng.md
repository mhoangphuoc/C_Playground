# Exercise 1: *Quotient and Remainder*

### Problem:
Given two integers $a$ and $b$, calculate and print the quotient and the remainder of the division of $a$ by $b$.

### Input:
Two integers $a$ and $b$ $(b \neq 0)$ separated by a space, where $-10^{18} \le a, b \le 10^{18}$.

### Output:
Print the quotient and the remainder on a single line, separated by a space.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 10 3  | 3 1    |
| -10 3 | -3 -1  |
| 7 5   | 1 2    |
| 1000000000000000000 1 | 1000000000000000000 0 |
| -1000000000000000000 3 | -333333333333333333 -1 |
-------------------------------
-------------------------------
# Exercise 2: *Evaluating Polynomial Expressions*

### Problem:
Given the polynomial function:
$$A(x) = x^3 + 3x^2 + x + 1$$
For a given value of $x$, calculate and print the result of the expression.

### Input:
A single positive integer $x$ $(1 \le x \le 10^5)$.

### Output:
A single integer representing the value of $A(x)$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1     | 6      |
| 2     | 23     |
| 10    | 1311   |
| 1000  | 1003001001 |
| 100000| 1000030000100001 |
-------------------------------
-------------------------------
# Exercise 3: *Evaluating Polynomial Expressions 2*

### Problem:
Given three integers $a, b$, and $c$, calculate the value of the expression:
$$S = a(b + c) + b(a + c)$$

### Input:
A single line containing three integers $a, b$, and $c$ separated by a space $(0 < |a|, |b|, |c| < 10^9)$.

### Output:
A single integer representing the value of $S$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1 2 3 | 13     |
| 10 10 10 | 400 |
| -1 1 1 | 0     |
| 1000000000 1000000000 1000000000 | 4000000000000000000 |
| -1000000000 -1000000000 -1000000000 | 4000000000000000000 |
-------------------------------
-------------------------------
# Exercise 4: *Basic Arithmetic Operations*

### Problem:
Given two integers $a$ and $b$, calculate and print their sum, difference, product, and quotient. The quotient should be displayed with a precision of two decimal places.

### Input:
Two integers $a$ and $b$ $(b \neq 0)$ separated by a space, where $-10^9 \le a, b \le 10^9$.

### Output:
Print the sum, difference, product, and quotient on a single line, separated by spaces.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 10 3  | 13 7 30 3.33 |
| 5 -2  | 3 7 -10 -2.50 |
| -8 -4 | -12 -4 32 2.00 |
| 1000000000 2 | 1000000002 999999998 2000000000 500000000.00 |
-------------------------------
-------------------------------
# Exercise 5: *Circle Perimeter and Area*

### Problem:
Given the radius $r$ of a circle, calculate and print its perimeter and area. Use the value $\pi = 3.14$ or the constant available in your programming language.

### Input:
A single integer $r$ representing the radius $(1 \le r \le 10^6)$.

### Output:
Print the perimeter and the area of the circle on a single line, separated by a space. Both values should be formatted to two decimal places.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1     | 6.28 3.14 |
| 5     | 31.42 78.54 |
| 1000000 | 6283185.31 3141592653589.79 |
-------------------------------
-------------------------------
# Exercise 6: *Euclidean Distance*

### Problem:
Given the coordinates of two points $(x_1, y_1)$ and $(x_2, y_2)$ in a 2D Cartesian plane, calculate the Euclidean distance between them. The formula for Euclidean distance is:
$$d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

### Input:
Four integers $x_1, y_1, x_2$, and $y_2$ separated by spaces $(-10^6 \le x_i, y_i \le 10^6)$.

### Output:
A single floating-point number representing the distance, formatted to two decimal places.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 0 0 3 4 | 5.00 |
| 1 1 1 1 | 0.00 |
| -10 5 8 -2 | 19.31 |
| 1000000 1000000 -1000000 -1000000 | 2828427.12 |
-------------------------------
-------------------------------
# Exercise 7: *Temperature Conversion*

### Problem:
Given a temperature in Celsius $(C)$, convert it to Fahrenheit $(F)$ using the following formula:
$$F = (C \times \frac{9}{5}) + 32$$

### Input:
A single positive integer $C$ representing the temperature in Celsius $(1 \le C \le 10^6)$.

### Output:
A single floating-point number representing the temperature in Fahrenheit, formatted to two decimal places.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 24    | 75.20  |
| 100   | 212.00 |
| 0     | 32.00  |
| 1000000 | 1800032.00 |
-------------------------------
-------------------------------
# Exercise 8: *Sum of Integers*

### Problem:
Given a non-negative integer $n$, calculate the sum of the first $n$ natural numbers:
$$S_n = 1 + 2 + 3 + \dots + n$$

### Input:
A single non-negative integer $n$ $(0 \le n \le 10^8)$.

### Output:
A single integer representing the value of $S_n$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 0     | 0      |
| 1     | 1      |
| 10    | 55     |
| 100000000 | 5000000050000000 |
-------------------------------
-------------------------------
# Exercise 9: *Sum of Squares*

### Problem:
Given a non-negative integer $n$, calculate the sum of the squares of the first $n$ natural numbers:
$$S_n = 1^2 + 2^2 + 3^2 + \dots + n^2$$

### Input:
A single non-negative integer $n$ $(0 \le n \le 10^5)$.

### Output:
A single integer representing the value of $S_n$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 0     | 0      |
| 1     | 1      |
| 5     | 55     |
| 10    | 385    |
| 100000| 333338333350000 |
-------------------------------
-------------------------------
# Exercise 10: *Sum of Consecutive Products*

### Problem:
Given a positive integer $n$, calculate the sum of the products of all pairs of consecutive integers from $1$ up to $n$:
$$S_n = 1 \cdot 2 + 2 \cdot 3 + 3 \cdot 4 + \dots + n(n+1)$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single floating-point number representing the value of $S_n$, formatted to two decimal places.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1     | 2.00   |
| 2     | 8.00   |
| 3     | 20.00  |
| 10    | 440.00 |
| 1000000000 | 333333334333333333000000000.00 |
-------------------------------
-------------------------------
# Exercise 11: *Sum of Even Integers*

### Problem:
Given a positive integer $n$, calculate the sum of the first $n$ even natural numbers:
$$S_n = 2 + 4 + 6 + 8 + \dots + 2n$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^9)$.

### Output:
A single integer representing the value of $S_n$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1     | 2      |
| 5     | 30     |
| 10    | 110    |
| 1000000000 | 1000000001000000000 |
-------------------------------
-------------------------------
# Exercise 12: *Alternating Sum*

### Problem:
Given a positive integer $n$, calculate the value of the following alternating sum:
$$S_n = -1 + 2 - 3 + 4 - 5 + 6 + \dots + (-1)^n \cdot n$$

### Input:
A single positive integer $n$ $(1 \le n \le 10^{16})$.

### Output:
A single integer representing the value of $S_n$.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1     | -1     |
| 4     | 2      |
| 5     | -3     |
| 10000000000000000 | 5000000000000000 |
| 9999999999999999 | -5000000000000000 |
-------------------------------
-------------------------------
# Exercise 13: *Largest Divisible Number*

### Problem:
Given two positive integers $a$ and $b$, find the largest integer $x$ such that $x$ is divisible by $b$ and $x \le a$.

**Note:** The solution must not use loops or built-in library functions.

### Input:
A single line containing two positive integers $a$ and $b$ $(1 \le b \le a \le 10^8)$.

### Output:
A single integer representing the largest value of $x$ satisfying the conditions.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 10 3  | 9      |
| 14 4  | 12     |
| 20 5  | 20     |
| 100000000 1 | 100000000 |
| 100000000 3 | 99999999  |
| 1 1   | 1      |
-------------------------------
-------------------------------
# Exercise 14: *Smallest Divisible Number*

### Problem:
Given two positive integers $a$ and $b$, find the smallest integer $x$ such that $x$ is divisible by $b$ and $x \ge a$.

**Note:** The solution must not use loops or built-in library functions.

### Input:
A single line containing two positive integers $a$ and $b$ $(1 \le b \le a \le 10^8)$.

### Output:
A single integer representing the smallest value of $x$ satisfying the conditions.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 10 3  | 12     |
| 14 4  | 16     |
| 20 5  | 20     |
| 100000000 1 | 100000000 |
| 99999999 100000000 | 100000000 |
| 1 1 | 1 |
-------------------------------
-------------------------------
# Exercise 15: *Divisibility by 3 and 5*

### Problem:
Given an integer $n$, determine if it is divisible by both $3$ and $5$.

### Input:
A single integer $n$ $(-10^{18} \le n \le 10^{18})$.

### Output:
Print `1` if $n$ is divisible by both $3$ and $5$, otherwise print `0`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 15    | 1      |
| 10    | 0      |
| 0     | 1      |
| -30   | 1      |
| 1000000000000000000 | 0 |
| -450000000000000000 | 1 |
-------------------------------
-------------------------------
# Exercise 16: *Leap Year Check*

### Problem:
A leap year is defined as a year that is divisible by $400$ or (divisible by $4$ and not divisible by $100$). Given an integer $n$ representing a year, determine if it is a leap year.

### Input:
A single integer $n$ $(-10^6 \le n \le 10^6)$.

### Output:
- If $n \le 0$, print `INVALID`.
- If $n$ is a leap year, print `YES`.
- Otherwise, print `NO`.

### Example:
| INPUT | OUTPUT  |
|:------|:-------|
| 2000  | YES     |
| 2024  | YES     |
| 1900  | NO      |
| 2023  | NO      |
| 0     | INVALID |
| -400  | INVALID |
| 4     | YES     |
-------------------------------
-------------------------------
# Exercise 17: *Number of Days in a Month*

### Problem:
Given an integer $t$ representing a month and an integer $n$ representing a year, determine the number of days in that specific month. A leap year is defined as a year that is divisible by 400 or (divisible by 4 and not divisible by 100). In a leap year, February has 29 days, while in a common year, it has 28 days.

### Input:
Two integers $t$ and $n$ $(-10^6 \le t, n \le 10^6)$.

### Output:
- If the input is invalid (either $t$ or $n$ is not a positive integer, or $t$ is not in the range $[1, 12]$), print `INVALID`.
- Otherwise, print the number of days in the given month.

### Example:
| INPUT | OUTPUT  |
|:------|:-------|
| 1 2024 | 31      |
| 2 2024 | 29      |
| 2 2023 | 28      |
| 4 2023 | 30      |
| 13 2024 | INVALID |
| 2 0    | INVALID |
| -1 2024 | INVALID |
| 12 1000000 | 31   |
-------------------------------
-------------------------------
# Exercise 18: *Lowercase Character Check*

### Problem:
Given a character, determine if it is a lowercase English letter (from 'a' to 'z').

### Input:
A single character $c$.

### Output:
Print `YES` if the character is a lowercase letter, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| a     | YES    |
| z     | YES    |
| A     | NO     |
| 5     | NO     |
| @     | NO     |
| q     | YES    |
-------------------------------
-------------------------------
# Exercise 19: *Uppercase Character Check*

### Problem:
Given a character, determine if it is an uppercase English letter (from 'A' to 'Z').

### Input:
A single character $c$.

### Output:
Print `YES` if the character is an uppercase letter, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| A     | YES    |
| Z     | YES    |
| a     | NO     |
| 1     | NO     |
| #     | NO     |
| G     | YES    |
-------------------------------
-------------------------------
# Exercise 20: *Alphabet Character Check*

### Problem:
Given a character, determine if it is an English alphabet letter (either lowercase or uppercase).

### Input:
A single character $c$.

### Output:
Print `YES` if the character is an alphabet letter, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| a     | YES    |
| Z     | YES    |
| 5     | NO     |
| #     | NO     |
-------------------------------
-------------------------------
# Exercise 21: *Digit Character Check*

### Problem:
Given a character, determine if it is a numeric digit (from '0' to '9').

### Input:
A single character $c$.

### Output:
Print `YES` if the character is a digit, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 5     | YES    |
| 0     | YES    |
| a     | NO     |
| !     | NO     |
-------------------------------
-------------------------------
# Exercise 22: *Convert Uppercase to Lowercase*

### Problem:
Given a character, if it is an uppercase English letter, convert it to its corresponding lowercase form. Otherwise, keep the character unchanged.

### Input:
A single character $c$.

### Output:
Print the resulting character.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| A     | a      |
| Z     | z      |
| b     | b      |
| 1     | 1      |
-------------------------------
-------------------------------
# Exercise 23: *Convert Lowercase to Uppercase*

### Problem:
Given a character, if it is a lowercase English letter, convert it to its corresponding uppercase form. Otherwise, keep the character unchanged.

### Input:
A single character $c$.

### Output:
Print the resulting character.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| a     | A      |
| z     | Z      |
| B     | B      |
| $     | $      |
-------------------------------
-------------------------------
# Exercise 24: *Next Alphabet Character*

### Problem:
Given a single character, if it is an English alphabet letter, print the next character in the alphabet in lowercase. Note that the character following 'z' or 'Z' is 'a'. If the input is not an alphabet letter, print `INVALID`.

### Input:
A single character $c$.

### Output:
Print the next lowercase character or `INVALID`.

### Example:
| INPUT | OUTPUT  |
|:------|:-------|
| a     | b       |
| D     | e       |
| z     | a       |
| Z     | a       |
| 1     | INVALID |
-------------------------------
-------------------------------
# Exercise 25: *Valid Triangle*

### Problem:
Given three integers $a, b$, and $c$ representing the lengths of three sides, determine if they can form a valid triangle. A triangle is valid if the sum of any two sides is greater than the third side and all sides are positive.

### Input:
Three integers $a, b, c$ $(-10^6 \le a, b, c \le 10^6)$.

### Output:
Print `YES` if the triangle is valid, otherwise print `NO`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 3 4 5 | YES    |
| 1 1 2 | NO     |
| -3 4 5| NO     |
| 0 0 0 | NO     |
-------------------------------
-------------------------------
# Exercise 26: *Triangle Classification*

### Problem:
Given three integers $a, b$, and $c$ representing the lengths of three sides, classify the triangle.

### Input:
Three integers $a, b, c$ $(-10^6 \le a, b, c \le 10^6)$.

### Output:
- If the triangle is invalid, print `INVALID`.
- If it is an equilateral triangle, print `1`.
- If it is an isosceles triangle (and not equilateral), print `2`.
- If it is a right-angled triangle, print `3`.
- If it is a scalene triangle (common triangle), print `4`.

*Note: In case a triangle satisfies multiple conditions (e.g., isosceles and right-angled), prioritize the lower-numbered classification as per the output rules or check for right-angle separately.*

### Example:
| INPUT | OUTPUT  |
|:------|:-------|
| 3 3 3 | 1       |
| 3 3 5 | 2       |
| 3 4 5 | 3       |
| 4 5 6 | 4       |
| 1 1 5 | INVALID |
-------------------------------
-------------------------------
# Exercise 27: *Time Conversion*

### Problem:
Given a non-negative integer $n$ representing the number of days, convert it into years, weeks, and remaining days. Assume that a year always has 365 days and a week has 7 days.

### Input:
A single non-negative integer $n$ $(0 \le n \le 10^6)$.

### Output:
Three integers representing the number of years, weeks, and days respectively, separated by spaces.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 373   | 1 1 1  |
| 1329  | 3 34 3 |
| 0     | 0 0 0  |
-------------------------------
-------------------------------
# Exercise 28: *Quadratic Equation*

### Problem:
Given the coefficients $a, b,$ and $c$ of a quadratic equation $ax^2 + bx + c = 0$, find its roots.

### Input:
Three integers $a, b, c$ $(-10^3 \le a, b, c \le 10^3)$.

### Output:
- If the equation has no solution, print `NO`.
- If the equation has infinitely many solutions, print `INF`.
- If there are solutions, print the roots in ascending order, formatted to two decimal places and separated by a space.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1 -3 2| 1.00 2.00 |
| 1 2 1 | -1.00 |
| 1 0 1 | NO |
| 0 0 0 | INF |
-------------------------------
-------------------------------
# Exercise 29: *Count Integers in Range*

### Problem:
Given two real numbers $a$ and $b$, count the number of integers $x$ such that $a \le x \le b$.

### Input:
Two real numbers $a$ and $b$ $(-10^9 \le a, b \le 10^9)$.

### Output:
A single integer representing the count of integers in the interval $[a, b]$. If $a > b$, the count is 0.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1.5 4.5 | 3    |
| -2.0 2.0 | 5    |
| 10.1 9.9 | 0    |
-------------------------------
-------------------------------
# Exercise 30: *Division Check*

### Problem:
Given three 64-bit integers $a, b,$ and $c$. Determine if any of the following conditions are met:
- $a / b = c$ (where $a$ is divisible by $b$)
- $b / c = a$ (where $b$ is divisible by $c$)
- $c / a = b$ (where $c$ is divisible by $a$)

### Input:
Three 64-bit integers $a, b, c$ $(-10^{18} \le a, b, c \le 10^{18})$.

### Output:
Print `/` if at least one condition is satisfied, otherwise print `NOSOL`.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 6 2 3 | /      |
| 3 12 4| /      |
| 5 2 10| NOSOL  |
-------------------------------
-------------------------------
# Exercise 31: *Academic Performance*

### Problem:
A student has four grades for Computer Science: two with a coefficient of 1, one with a coefficient of 2, and one with a coefficient of 3. Calculate the weighted average.
- Average $\ge 8.0$: `A`
- $6.5 \le$ Average $< 8.0$: `B`
- $5.0 \le$ Average $< 6.5$: `C`
- Average $< 5.0$: `D`

### Input:
Four real numbers representing the grades (each between 0 and 10).

### Output:
The classification in uppercase without accents.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 8 9 8 7   | B  |
| 10 10 9 8 | A  |
| 5 4 5 5   | D  |
-------------------------------
-------------------------------
# Exercise 32: *Second Smallest Number*

### Problem:
Given five distinct 64-bit integers $a, b, c, d,$ and $e$. Find the second smallest value among them.

### Input:
Five distinct integers $a, b, c, d, e$ $(-10^{18} \le a, b, c, d, e \le 10^{18})$.

### Output:
A single integer representing the second smallest value.

### Example:
| INPUT | OUTPUT |
|:------|:-------|
| 1 2 3 4 5 | 2  |
| 10 5 8 2 1 | 2 |
| -5 -10 0 5 10 | -5 |
-------------------------------
-------------------------------