# Exercise 001: *Tổng dãy số tự nhiên*
### Problem:
Cho số nguyên dương $n$, tính tổng của dãy số sau:
$$S = 1 + 2 + 3 + \dots + n$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 15     |
| 10    | 55     |
| 1000000000 | 500000000500000000 |

-------------------------------------

# Exercise 002: *Tổng bình phương*
### Problem:
Cho số nguyên dương $n$, tính tổng bình phương của $n$ số nguyên dương đầu tiên:
$$S = 1^2 + 2^2 + 3^2 + \dots + n^2$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 14     |
| 5     | 55     |
| 10    | 385    |

-------------------------------------

# Exercise 003: *Tổng dãy điều hòa*
### Problem:
Cho số nguyên dương $n$, tính tổng của dãy số sau:
$$S = 1 + \frac{1}{2} + \frac{1}{3} + \dots + \frac{1}{n}$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Một số thực là tổng $S$, làm tròn đến 3 chữ số thập phân.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     | 1.000  |
| 2     | 1.500  |
| 5     | 2.283  |

-------------------------------------

# Exercise 004: *Tổng nghịch đảo số chẵn*
### Problem:
Cho số nguyên dương $n$, tính tổng của dãy số sau:
$$S = \frac{1}{2} + \frac{1}{4} + \frac{1}{6} + \dots + \frac{1}{2n}$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Một số thực là tổng $S$, làm tròn đến 2 chữ số thập phân.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     | 0.50   |
| 2     | 0.75   |
| 10    | 1.46   |

-------------------------------------

# Exercise 005: *Tổng đan dấu*
### Problem:
Cho số nguyên dương $n$, tính tổng của dãy số đan dấu sau:
$$S = -1 + 2 - 3 + 4 - 5 + \dots + (-1)^n \times n$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^{15})$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | -2     |
| 4     | 2      |
| 1000000000000000 | 500000000000000 |

-------------------------------------

# Exercise 006: *Tổng các số chẵn*
### Problem:
Cho số nguyên dương $n$, tính tổng của $n$ số nguyên dương chẵn đầu tiên:
$$S = 2 + 4 + 6 + \dots + 2n$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 12     |
| 5     | 30     |
| 1000000 | 1000001000000 |

-------------------------------------

# Exercise 007: *Tổng các số lẻ*
### Problem:
Cho số nguyên dương $n$, tính tổng của $n$ số nguyên dương lẻ đầu tiên:
$$S = 1 + 3 + 5 + \dots + (2n - 1)$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 9      |
| 5     | 25     |
| 1000000 | 1000000000000 |

-------------------------------------

# Exercise 008: *Tổng lập phương*
### Problem:
Cho số nguyên dương $n$, tính tổng lập phương của $n$ số nguyên dương đầu tiên:
$$S = 1^3 + 2^3 + 3^3 + \dots + n^3$$

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Một số nguyên duy nhất là tổng $S$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 36     |
| 4     | 100    |
| 10    | 3025   |

-------------------------------------

# Exercise 009: *Tổng các chữ số*
### Problem:
Cho số nguyên $n$, tính tổng các chữ số của nó.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên $n$ $(0 \le n \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra tổng các chữ số của $n$ trên một dòng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 12345 | 15     |
| 999   | 27     |

-------------------------------------

# Exercise 010: *Tổng chữ số chẵn lẻ*
### Problem:
Cho số nguyên $n$, tính riêng biệt tổng các chữ số chẵn và tổng các chữ số lẻ của nó.

### Input:
Một số nguyên $n$ $(0 \le n \le 10^{18})$.

### Output:
Gồm hai dòng, dòng đầu tiên là tổng các chữ số chẵn, dòng thứ hai là tổng các chữ số lẻ.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 12     |
|       | 9      |

-------------------------------------

# Exercise 011: *Tổng các ước số*
### Problem:
Tính tổng tất cả các ước số dương của một số nguyên dương $n$.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên $n$ $(1 \le n \le 10^9)$.

### Output:
Với mỗi bộ test, in ra tổng các ước của $n$ trên một dòng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |        |
| 6     | 12     |
| 10    | 18     |
| 1     | 1      |

-------------------------------------

# Exercise 012: *Tích các chữ số*
### Problem:
Cho số nguyên $n$, tính tích tất cả các chữ số của nó.

### Input:
Một số nguyên $n$ $(0 \le n \le 10^{18})$.

### Output:
Một số nguyên duy nhất là tích các chữ số của $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123   | 6      |
| 105   | 0      |

-------------------------------------

# Exercise 013: *Giai thừa*
### Problem:
Cho số tự nhiên $n$, tính $n!$.

### Input:
Một số tự nhiên $n$ $(0 \le n \le 20)$.

### Output:
Một số nguyên duy nhất là giá trị của $n!$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 120    |
| 0     | 1      |

-------------------------------------

# Exercise 014: *Lũy thừa nhanh*
### Problem:
Tính $a^b$ với hai số nguyên không âm $a$ và $b$.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- Mỗi bộ test gồm hai số nguyên $a$ và $b$ $(0 \le a, b \le 60, a^b \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra kết quả $a^b$ trên một dòng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 2 10  | 1024   |
| 5 3   | 125    |

-------------------------------------

# Exercise 015: *Tổng các bội số của 3*
### Problem:
Cho số nguyên dương $n$, tính tổng các số nguyên dương không vượt quá $n$ và chia hết cho 3.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
Một số nguyên duy nhất là tổng cần tìm.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 18     |
| 3     | 3      |

-------------------------------------

# Exercise 016: *Kiểm tra số nguyên tố*
### Problem:
Cho số nguyên $n$, xác định xem $n$ có phải là số nguyên tố hay không.

### Input:
Một số nguyên $n$ $(-10^9 \le n \le 10^9)$.

### Output:
In ra `1` nếu $n$ là số nguyên tố, ngược lại in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 7     | 1      |
| 1     | 0      |
| -2    | 0      |

-------------------------------------

# Exercise 017: *Số nguyên tố cùng nhau*
### Problem:
Cho hai số nguyên dương $a$ và $b$, xác định xem chúng có phải là hai số nguyên tố cùng nhau hay không (ước chung lớn nhất bằng 1).

### Input:
Hai số nguyên dương $a$ và $b$ $(1 \le a, b \le 10^{12})$.

### Output:
In ra `YES` nếu $a$ và $b$ nguyên tố cùng nhau, ngược lại in ra `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 8 15  | YES    |
| 12 18 | NO     |

-------------------------------------

# Exercise 018: *Phân tích thừa số nguyên tố*
### Problem:
Cho số nguyên dương $n$, hãy phân tích $n$ thành thừa số nguyên tố.

### Input:
Một số nguyên dương $n$ $(2 \le n \le 10^9)$.

### Output:
In ra các thừa số nguyên tố của $n$ theo thứ tự tăng dần, ngăn cách bởi dấu cách. Nếu một thừa số xuất hiện nhiều lần, in ra bấy nhiêu lần.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28    | 2 2 7  |
| 100   | 2 2 5 5|

-------------------------------------

# Exercise 019: *Thừa số nguyên tố thứ k*
### Problem:
Tìm thừa số nguyên tố thứ $k$ trong phép phân tích thừa số nguyên tố của số nguyên dương $n$. Các thừa số được liệt kê theo thứ tự không giảm. Ví dụ: $n=28 = 2 \times 2 \times 7$, với $k=3$ thì kết quả là $7$.

### Input:
Hai số nguyên dương $n$ và $k$ $(1 \le n, k \le 10^9)$.

### Output:
In ra thừa số nguyên tố thứ $k$. Nếu số lượng thừa số nguyên tố ít hơn $k$, in ra `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28 3  | 7      |
| 8 4   | -1     |

-------------------------------------

# Exercise 020: *Kiểm tra số hoàn hảo*
### Problem:
Số hoàn hảo là số nguyên dương bằng tổng các ước số thực sự của nó (không kể chính nó). Ví dụ: $6 = 1 + 2 + 3$. Cho $n$, kiểm tra xem $n$ có phải số hoàn hảo không.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên $n$ $(1 \le n \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra `YES` nếu $n$ là số hoàn hảo, ngược lại in ra `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 6     | YES    |
| 10    | NO     |

-------------------------------------

# Exercise 021: *Kiểm tra số đối xứng*
### Problem:
Số đối xứng (palindrome) là số đọc từ trái sang phải hay từ phải sang trái đều giống nhau. Cho số nguyên dương $n$, kiểm tra xem $n$ có phải số đối xứng không.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra `YES` nếu $n$ là số đối xứng, ngược lại in ra `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 121   | YES    |
| 123   | NO     |

-------------------------------------

# Exercise 022: *Kiểm tra số chính phương*
### Problem:
Số chính phương là số bằng bình phương của một số nguyên. Cho số nguyên dương $n$, kiểm tra xem $n$ có phải số chính phương không.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra `YES` nếu $n$ là số chính phương, ngược lại in ra `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 16    | YES    |
| 20    | NO     |

-------------------------------------

# Exercise 023: *Số có số lượng ước lẻ*
### Problem:
Cho số nguyên dương $n$, xác định xem tổng số lượng ước số của nó có phải là một số lẻ hay không.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
Với mỗi bộ test, in ra `YES` nếu $n$ có số lượng ước lẻ, ngược lại in ra `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 9     | YES    |
| 10    | NO     |

-------------------------------------

# Exercise 024: *Số nguyên tố không giảm hoặc không tăng*
### Problem:
Một số được gọi là "không giảm" nếu mỗi chữ số đều lớn hơn hoặc bằng chữ số bên trái nó. Một số được gọi là "không tăng" nếu mỗi chữ số đều nhỏ hơn hoặc bằng chữ số bên trái nó. Cho số chữ số $n$, đếm xem có bao nhiêu số nguyên tố có $n$ chữ số thỏa mãn tính chất không giảm hoặc không tăng.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 6)$.

### Output:
Một số nguyên duy nhất là số lượng các số nguyên tố có $n$ chữ số thỏa mãn điều kiện.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     | 20     |

-------------------------------------

# Exercise 025: *Kiểm tra số Strong*
### Problem:
Số Strong là số có tổng giai thừa các chữ số bằng chính nó. Ví dụ: $145 = 1! + 4! + 5!$. Cho $n$, kiểm tra xem $n$ có phải số Strong không.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
In ra `1` nếu $n$ là số Strong, ngược lại in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 145   | 1      |
| 123   | 0      |

-------------------------------------

# Exercise 026: *Kiểm tra số Armstrong*
### Problem:
Số Armstrong bậc $k$ là số có tổng lũy thừa bậc $k$ của các chữ số bằng chính nó. Ví dụ: $371$ có 3 chữ số và $371 = 3^3 + 7^3 + 1^3$. Cho $n$, kiểm tra xem $n$ có phải số Armstrong không.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
In ra `1` nếu $n$ là số Armstrong, ngược lại in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 371   | 1      |
| 153   | 1      |
| 123   | 0      |

-------------------------------------

# Exercise 027: *Số Lộc Phát*
### Problem:
Một số được coi là số "Lộc Phát" nếu nó chỉ bao gồm các chữ số 0, 6 và 8. Cho số nguyên dương $n$, kiểm tra xem $n$ có phải số Lộc Phát không.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
In ra `1` nếu $n$ là số Lộc Phát, ngược lại in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 6680  | 1      |
| 168   | 0      |

-------------------------------------

# Exercise 028: *Kiểm tra số Fibonacci*
### Problem:
Cho số nguyên dương $n$, xác định xem $n$ có thuộc dãy số Fibonacci hay không.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
In ra `1` nếu $n$ là số Fibonacci, ngược lại in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 8     | 1      |
| 10    | 0      |

-------------------------------------

# Exercise 029: *N số Fibonacci đầu tiên*
### Problem:
Dãy Fibonacci được định nghĩa: $F_0 = 0, F_1 = 1, F_i = F_{i-1} + F_{i-2}$. Cho số nguyên $n$, in ra $n$ số đầu tiên của dãy Fibonacci.

### Input:
Một số nguyên dương $n$ $(2 \le n \le 92)$.

### Output:
$n$ số Fibonacci đầu tiên bắt đầu từ $F_0$, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 0 1 1 2 3 |

-------------------------------------

# Exercise 030: *Chữ số đầu và cuối*
### Problem:
Cho số nguyên $n$, tìm và in ra chữ số đầu tiên và chữ số cuối cùng của nó.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
Hai số nguyên là chữ số đầu và chữ số cuối, cách nhau một khoảng trắng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 1 5    |
| 7     | 7 7    |

-------------------------------------

# Exercise 031: *Đổi chỗ chữ số đầu và cuối*
### Problem:
Cho số nguyên dương $n$, hãy đổi chỗ chữ số đầu tiên và chữ số cuối cùng của nó. Nếu sau khi đổi chỗ, chữ số cuối cùng ban đầu là 0 thì cần loại bỏ các số 0 vô nghĩa ở đầu (ví dụ $9800$ thành $809$).

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^{18})$.

### Output:
Số nguyên sau khi đã đổi chỗ chữ số đầu và cuối.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 52341  |
| 9800  | 809    |
| 7     | 7      |
| 100000000000000008 | 800000000000000001 |

-------------------------------------

# Exercise 032: *Bội số nhỏ nhất có N chữ số*
### Problem:
Cho bốn số nguyên dương $x, y, z$ và $n$. Tìm số nguyên dương nhỏ nhất có đúng $n$ chữ số và chia hết cho cả $x, y, z$.

### Input:
Bốn số nguyên dương $x, y, z$ và $n$ $(1 \le x, y, z \le 10^4; n \le 16)$.

### Output:
Số nguyên có $n$ chữ số nhỏ nhất chia hết cho $x, y, z$. Nếu không tồn tại, in ra `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2 3 5 3 | 120   |
| 3 4 6 2 | 12    |
| 5 10 15 1 | -1  |
| 1000 1000 1000 16 | 1000000000000000 |

-------------------------------------

# Exercise 033: *ƯCLN và BCNN*
### Problem:
Tìm Ước chung lớn nhất (ƯCLN) và Bội chung nhỏ nhất (BCNN) của hai số nguyên không âm $a$ và $b$.

### Input:
Hai số nguyên không âm $a$ và $b$ $(0 \le a, b \le 10^9)$.

### Output:
Hai số nguyên lần lượt là ƯCLN và BCNN, cách nhau một khoảng trắng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12 18 | 6 36   |
| 0 5   | 5 0    |
| 1000000000 999999999 | 1 999999999000000000 |

-------------------------------------

# Exercise 034: *Số cân bằng chẵn lẻ*
### Problem:
Một số được coi là "cân bằng" nếu số lượng chữ số chẵn bằng số lượng chữ số lẻ. Cho số nguyên dương $n$, in ra `YES` nếu nó là số cân bằng, ngược lại in ra `NO`.

### Input:
Một số nguyên dương $n$ $(0 \le n \le 10^{18})$.

### Output:
In ra `YES` hoặc `NO`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1234  | YES    |
| 123   | NO     |
| 0     | NO     |
| 100000000000000002 | YES |

-------------------------------------

# Exercise 035: *Hàm phi Euler*
### Problem:
Đếm số lượng các số nguyên dương không vượt quá $n$ và nguyên tố cùng nhau với $n$. Đây là hàm phi Euler $\phi(n)$.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^{16})$.

### Output:
Giá trị của $\phi(n)$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 4      |
| 1     | 1      |
| 9999999999999999 | 6480000000000000 |

-------------------------------------

# Exercise 036: *Liệt kê hàm phi Euler*
### Problem:
Cho số nguyên dương $n$, in ra giá trị $\phi(i)$ cho mọi $i$ thỏa mãn $1 \le i \le n$.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- Mỗi bộ test gồm một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Với mỗi bộ test, in ra $n$ số nguyên $\phi(1), \phi(2), \dots, \phi(n)$ trên một dòng, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     |        |
| 5     | 1 1 2 2 4 |

-------------------------------------

# Exercise 037: *Liệt kê số nguyên tố nhỏ hơn N*
### Problem:
Cho số nguyên dương $n$, liệt kê tất cả các số nguyên tố nhỏ hơn hẳn $n$.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Tất cả các số nguyên tố nhỏ hơn $n$ theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10    | 2 3 5 7|
| 2     |        |
| 20    | 2 3 5 7 11 13 17 19 |

-------------------------------------

# Exercise 038: *Số nguyên tố trong đoạn*
### Problem:
Cho hai số nguyên dương $L$ và $R$, tìm tất cả các số nguyên tố $p$ sao cho $L \le p \le R$.

### Input:
Hai số nguyên dương $L$ và $R$ $(1 \le L \le R \le 10^9; R - L \le 10^6)$.

### Output:
Tất cả các số nguyên tố trong đoạn $[L, R]$ theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10 20 | 11 13 17 19 |
| 1 5   | 2 3 5  |
| 999999900 1000000000 | 999999929 999999931 |

-------------------------------------

# Exercise 039: *Số nguyên tố có tổng chữ số chia hết cho 5*
### Problem:
Cho số nguyên dương $n$, liệt kê các số nguyên tố $p < n$ sao cho tổng các chữ số của $p$ chia hết cho 5. Đồng thời in ra tổng số lượng các số thỏa mãn.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
- Dòng đầu tiên là các số nguyên tố thỏa mãn điều kiện, cách nhau bởi dấu cách.
- Dòng thứ hai là tổng số lượng các số đó.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 20    | 5 19   |
|       | 2      |

-------------------------------------

# Exercise 040: *Số nguyên tố có chữ số cuối cùng lớn nhất*
### Problem:
Cho số nguyên dương $n$, liệt kê các số nguyên tố $p < n$ sao cho chữ số cuối cùng của $p$ là chữ số lớn nhất trong số đó. Đồng thời in ra tổng số lượng các số thỏa mãn.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
- Dòng đầu tiên là các số nguyên tố thỏa mãn điều kiện, cách nhau bởi dấu cách.
- Dòng thứ hai là tổng số lượng các số đó.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 30    | 2 3 5 7 11 13 17 19 23 29 |
|       | 10     |

-------------------------------------

# Exercise 041: *Các thừa số nguyên tố khác nhau*
### Problem:
Cho số nguyên dương $n$, liệt kê tất cả các thừa số nguyên tố khác nhau của $n$ theo thứ tự tăng dần.

### Input:
Một số nguyên dương $n$ $(2 \le n \le 10^9)$.

### Output:
Các thừa số nguyên tố khác nhau của $n$, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 28    | 2 7    |
| 100   | 2 5    |
| 999999937 | 999999937 |
| 1024  | 2      |

-------------------------------------

# Exercise 042: *Số chính phương trong đoạn*
### Problem:
Cho hai số nguyên dương $a$ và $b$, liệt kê tất cả các số chính phương $x$ sao cho $a \le x \le b$.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ $(1 \le T \le 100)$.
- $T$ dòng tiếp theo, mỗi dòng chứa hai số nguyên dương $a$ và $b$ $(1 \le a \le b \le 10^{12})$.

### Output:
Với mỗi bộ test, in ra các số chính phương trong đoạn $[a, b]$ trên một dòng, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1     |        |
| 1 20  | 1 4 9 16 |
| 50 100| 64 81 100 |
| 1000000000000 1000002000001 | 1000000000000 1000001000000 1000002000001 |

-------------------------------------

# Exercise 043: *Số Strong trong đoạn*
### Problem:
Cho hai số nguyên dương $L$ và $R$, tìm tất cả các số Strong trong đoạn $[L, R]$. Nếu không có số nào, in ra `0`.

### Input:
Hai số nguyên dương $L$ và $R$ $(1 \le L, R \le 10^6)$.

### Output:
Các số Strong tìm được, cách nhau bởi dấu cách. Nếu không có, in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 150 | 1 2 145 |
| 3 100 | 0      |
| 1 1   | 1      |

-------------------------------------

# Exercise 044: *Liệt kê tất cả ước số*
### Problem:
Cho số nguyên dương $n$, liệt kê tất cả các ước số dương của nó theo thứ tự tăng dần.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^9)$.

### Output:
Tất cả các ước của $n$, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12    | 1 2 3 4 6 12 |
| 7     | 1 7    |
| 1     | 1      |
| 999999999 | 1 3 9 ... 999999999 |

-------------------------------------

# Exercise 045: *Liệt kê số Armstrong*
### Problem:
Cho số nguyên dương $n$, liệt kê tất cả các số Armstrong nhỏ hơn hẳn $n$.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
Các số Armstrong nhỏ hơn $n$, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 500   | 1 2 3 4 5 6 7 8 9 153 370 371 407 |
| 10    | 1 2 3 4 5 6 7 8 9 |

-------------------------------------

# Exercise 046: *Số hoàn hảo nhỏ hơn N*
### Problem:
Cho số nguyên dương $n$, liệt kê tất cả các số hoàn hảo nhỏ hơn hẳn $n$.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^4)$.

### Output:
Các số hoàn hảo nhỏ hơn $n$, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 30    | 6 28   |
| 5     |        |
| 500   | 6 28 496 |

-------------------------------------

# Exercise 047: *Số hoàn hảo trong đoạn*
### Problem:
Cho hai số nguyên dương $L$ và $R$, tìm tất cả các số hoàn hảo trong đoạn $[L, R]$. Nếu không tồn tại, in ra `0`.

### Input:
Hai số nguyên dương $L$ và $R$ $(1 \le L, R \le 10^4)$.

### Output:
Các số hoàn hảo tìm được theo thứ tự tăng dần, cách nhau bởi dấu cách. Nếu không có, in ra `0`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 30  | 6 28   |
| 7 27  | 0      |

-------------------------------------

# Exercise 048: *Số đối xứng không chứa chữ số 9*
### Problem:
Cho số nguyên $n$, liệt kê tất cả các số đối xứng $x$ thỏa mãn $1 < x < n$ và $x$ không chứa chữ số 9. In ra cả số lượng các số tìm được.

### Input:
Một số nguyên dương $n$ $(1 \le n \le 10^6)$.

### Output:
- Dòng đầu tiên là các số thỏa mãn, cách nhau bởi dấu cách.
- Dòng thứ hai là tổng số lượng các số đó.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 20    | 2 3 4 5 6 7 8 11 |
|       | 8      |
| 100   | 2 3 4 5 6 7 8 11 22 33 44 55 66 77 88 |
|       | 15     |

-------------------------------------

# Exercise 049: *Số nguyên tố thuận nghịch*
### Problem:
Một số được gọi là số "đẹp" nếu nó là số nguyên tố và số đảo ngược của nó cũng là một số nguyên tố khác chính nó. Cho hai số nguyên dương $L$ và $R$, liệt kê tất cả các số như vậy trong đoạn $[L, R]$.

### Input:
Hai số nguyên dương $L$ và $R$ $(1 \le L \le R \le 10^6)$.

### Output:
Các số đẹp trong đoạn theo thứ tự tăng dần, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 10 20 | 13 17  |
| 1 10  |        |
| 10 100| 13 17 31 37 71 73 79 97 |

-------------------------------------

# Exercise 050: *Số đối xứng đặc biệt*
### Problem:
Một số được coi là số "đẹp" nếu thỏa mãn ba điều kiện:
1. Là số đối xứng.
2. Chứa ít nhất một chữ số `6`.
3. Tổng các chữ số của nó có chữ số tận cùng là `8`.

Hãy liệt kê tất cả các số như vậy trong đoạn $[L, R]$ và in ra tổng số lượng.

### Input:
Hai số nguyên dương $L$ và $R$ $(1 \le L \le R \le 10^6)$.

### Output:
- Dòng đầu tiên chứa các số đẹp theo thứ tự tăng dần, cách nhau bởi dấu cách.
- Dòng thứ hai là tổng số lượng các số đó.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 1000| 161 616 666 |
|       | 3      |
| 1 100 |        |
|       | 0      |

-------------------------------------

# Exercise 050: *Số Palindrome Đặc Biệt*
### Problem:
Một số được coi là "đẹp" nếu thỏa mãn đồng thời ba điều kiện sau:
1. Là số đối xứng (palindromic number).
2. Chứa ít nhất một chữ số `6`.
3. Tổng các chữ số của nó có chữ số tận cùng là `8`.

Liệt kê tất cả các số như vậy trong đoạn $[L, R]$ và cho biết tổng số lượng tìm được.

### Input:
Hai số nguyên dương $L$ và $R$ ($1 \le L \le R \le 10^6$).

### Output:
- Dòng đầu tiên in ra các số đẹp theo thứ tự tăng dần, cách nhau bởi dấu cách.
- Dòng thứ hai in ra tổng số lượng các số đẹp tìm được.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 1000| 161 616 666 |
|       | 3      |
| 1 100 |        |
|       | 0      |

-------------------------------

# Exercise 051: *Số Đẹp Loại 1*
### Problem:
Một số được coi là "đẹp" nếu nó chia hết cho một số nguyên tố $p$ và cũng chia hết cho $p^2$. Nói cách khác, $n$ là số đẹp nếu tồn tại ít nhất một số nguyên tố $p$ sao cho $p^2$ là ước của $n$. Liệt kê tất cả các số như vậy trong đoạn $[a, b]$.

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^6$).

### Output:
Các số đẹp trong đoạn đã cho, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 20  | 4 8 9 12 16 18 20 |
| 1 3   |        |
| 999990 1000000 | 999992 999996 999999 1000000 |

-------------------------------

# Exercise 052: *Số Đẹp Loại 2*
### Problem:
Một số được coi là "đẹp" nếu với mọi số nguyên tố $p$ là ước của $n$ thì $p^2$ cũng phải là ước của $n$. Liệt kê tất cả các số như vậy trong đoạn $[a, b]$.

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^6$).

### Output:
Các số đẹp trong đoạn đã cho, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 50  | 1 4 8 9 16 25 27 32 36 49 |
| 10 30 | 16 25 27 |

-------------------------------

# Exercise 053: *Số Đẹp Loại 3*
### Problem:
Một số được coi là "đẹp" nếu nó là một số nguyên tố và tổng các chữ số của nó là một số Fibonacci. Liệt kê tất cả các số như vậy trong đoạn $[a, b]$.

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^9$; $b - a \le 10^6$).

### Output:
Tất cả các số đẹp trong đoạn $[a, b]$. Nếu không có số nào, in ra `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 20  | 2 3 5 11 17 |
| 20 30 | 23     |
| 90 100| -1     |

-------------------------------

# Exercise 054: *Số Đẹp Loại 4*
### Problem:
Một số được coi là "đẹp" nếu nó là số đối xứng và có ít nhất 3 ước nguyên tố khác nhau. Liệt kê tất cả các số như vậy trong đoạn $[a, b]$.

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^9$; $b - a \le 10^6$).

### Output:
Tất cả các số đẹp trong đoạn $[a, b]$, cách nhau bởi dấu cách. Nếu không có số nào, in ra `-1`.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 500 | 66 121 231 |
| 1 100 | -1     |

-------------------------------

# Exercise 055: *Đếm Tổng Số Chữ Số*
### Problem:
Cho một số nguyên $n$, hãy đếm tổng số chữ số của số đó.

### Input:
Một số nguyên duy nhất $n$ ($0 \le n \le 10^{18}$).

### Output:
Một số nguyên duy nhất là số lượng chữ số của $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 12345 | 5      |
| 0     | 1      |
| 1000000000000000000 | 19 |

-------------------------------

# Exercise 056: *Đếm Chữ Số Chẵn Lẻ*
### Problem:
Cho một số nguyên dương $n$ không quá 9 chữ số, hãy đếm xem có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 10^9$).

### Output:
Hai số nguyên cách nhau một dấu cách: số lượng chữ số lẻ và số lượng chữ số chẵn.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 3 3    |
| 2468  | 0 4    |
| 1357  | 4 0    |

-------------------------------

# Exercise 057: *Đếm Số Nguyên Tố Tăng Hoặc Giảm*
### Problem:
Một số được gọi là "tăng" nếu mỗi chữ số đều lớn hơn hoặc bằng chữ số bên trái nó. Một số được gọi là "giảm" nếu mỗi chữ số đều nhỏ hơn hoặc bằng chữ số bên trái nó. Đếm các số nguyên tố có đúng $n$ chữ số thỏa mãn một trong hai tính chất trên.

### Input:
Một số nguyên duy nhất $n$ ($1 \le n \le 6$).

### Output:
Một số nguyên duy nhất là số lượng các số tìm được.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     | 20     |
| 1     | 4      |

-------------------------------

# Exercise 058: *Đếm Chữ Số Nguyên Tố*
### Problem:
Cho một số nguyên $n$, hãy đếm xem có bao nhiêu chữ số của nó là số nguyên tố (các chữ số nguyên tố bao gồm 2, 3, 5 và 7).

### Input:
Một số nguyên duy nhất $n$ ($0 \le n \le 10^{18}$).

### Output:
Một số nguyên duy nhất là số lượng các chữ số nguyên tố.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 123456| 3      |
| 777   | 3      |
| 888   | 0      |

-------------------------------

# Exercise 059: *Tần Suất Chữ Số Nguyên Tố*
### Problem:
Cho một số nguyên $n$, hãy đếm số lần xuất hiện của mỗi chữ số nguyên tố (2, 3, 5, 7). Liệt kê chúng theo thứ tự xuất hiện đầu tiên của chữ số đó trong số $n$.

### Input:
Một số nguyên duy nhất $n$ ($0 \le n \le 10^{18}$).

### Output:
Với mỗi chữ số nguyên tố có mặt, in ra chữ số đó và tần suất của nó trên cùng một dòng, cách nhau bởi dấu cách. Mỗi cặp chữ số - tần suất in trên một dòng mới.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 23552 | 2 2    |
|       | 3 1    |
|       | 5 2    |

-------------------------------

# Exercise 060: *Đếm Số Chính Phương Trong Đoạn*
### Problem:
Cho hai số nguyên $a$ và $b$, hãy đếm xem có bao nhiêu số chính phương $x$ thỏa mãn $a \le x \le b$.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ ($1 \le T \le 100$).
- Mỗi bộ test gồm hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^{12}$).

### Output:
Với mỗi bộ test, in ra số lượng tìm được trên một dòng mới.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 1 10  | 3      |
| 1 100 | 10     |

-------------------------------

# Exercise 061: *Đếm Ước Số*
### Problem:
Cho một số nguyên dương $n$, hãy đếm tổng số lượng các ước số dương của nó.

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ ($1 \le T \le 100$).
- Mỗi dòng trong $T$ dòng tiếp theo chứa một số nguyên dương $n$ ($1 \le n \le 10^9$).

### Output:
Với mỗi bộ test, in ra tổng số ước của $n$ trên một dòng mới.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |        |
| 6     | 4      |
| 16    | 5      |
| 1000000000 | 100 |

-------------------------------

# Exercise 062: *Đếm Ước Số của n!*
### Problem:
Cho một số nguyên không âm $n$, hãy tính số lượng các ước số của $n!$ (n giai thừa).

### Input:
- Dòng đầu tiên chứa số lượng bộ test $T$ ($1 \le T \le 100$).
- Mỗi bộ test gồm một số nguyên duy nhất $n$ ($1 \le n \le 100$).

### Output:
Với mỗi bộ test, in ra số lượng ước của $n!$ trên một dòng mới.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     |        |
| 3     | 4      |
| 5     | 16     |

-------------------------------

# Exercise 063: *Số Đối Xứng Cân Bằng*
### Problem:
Một số được coi là "đẹp" nếu nó là số đối xứng và tổng các chữ số của nó chia hết cho 10. Cho số chữ số $k$, hãy đếm xem có bao nhiêu số đẹp như vậy.

### Input:
Một số nguyên dương duy nhất $k$ ($1 \le k \le 18$).

### Output:
Một số nguyên duy nhất là số lượng các số đẹp có $k$ chữ số.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 2     | 1      |
| 3     | 9      |
| 10    | 90000  |

-------------------------------

# Exercise 064: *Số Nguyên Tố Thuần Túy*
### Problem:
Một số được gọi là "số nguyên tố thuần túy" nếu:
1. Nó là một số nguyên tố.
2. Tất cả các chữ số của nó đều là chữ số nguyên tố (2, 3, 5, 7).
3. Tổng các chữ số của nó cũng là một số nguyên tố.
Đếm số lượng các số như vậy trong đoạn $[a, b]$.

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a \le b \le 10^9$; $b - a \le 10^6$).

### Output:
Tổng số lượng các số nguyên tố thuần túy trong đoạn.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 1 100 | 4      |
| 200 500 | 5     |

-------------------------------

# Exercise 065: *Sắp Xếp Theo Tổng Chữ Số*
### Problem:
Cho hai số nguyên $a$ và $b$, hãy sắp xếp chúng theo thứ tự tăng dần dựa trên tổng các chữ số của chúng. Nếu tổng các chữ số bằng nhau, giữ nguyên thứ tự ban đầu (in $a$ trước $b$).

### Input:
Hai số nguyên dương $a$ và $b$ ($1 \le a, b \le 10^{18}$).

### Output:
Hai số đã được sắp xếp theo tiêu chí trên, cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 15 20 | 20 15  |
| 121 13| 121 13 |
| 99 1000 | 1000 99 |

-------------------------------

# Exercise 066: *Tần Suất Chữ Số Nguyên Tố Đã Sắp Xếp*
### Problem:
Đếm số lần xuất hiện của các chữ số nguyên tố (2, 3, 5, 7) trong một số nguyên $n$ cho trước. Kết quả hiển thị phải được sắp xếp theo giá trị chữ số tăng dần.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 10^{18}$).

### Output:
Với mỗi chữ số nguyên tố có mặt, in ra chữ số đó và tần suất của nó trên một dòng mới.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 72352 | 2 2    |
|       | 3 1    |
|       | 5 1    |
|       | 7 1    |

-------------------------------

# Exercise 067: *Hình Vuông Số Tăng Dần*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một hình vuông kích thước $n \times n$ trong đó các số tăng dần liên tiếp từ 1 đến $n^2$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Một lưới số kích thước $n \times n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 1 2 3  |
|       | 4 5 6  |
|       | 7 8 9  |

-------------------------------

# Exercise 068: *Hình Vuông Sao Đặc*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một hình vuông đặc bằng các dấu sao (`*`) có cạnh bằng $n$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Một lưới dấu sao kích thước $n \times n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | **** |
|       | **** |
|       | **** |
|       | **** |

-------------------------------

# Exercise 069: *Hình Vuông Sao Rỗng*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một hình vuông rỗng bằng các dấu sao (`*`) có cạnh bằng $n$. Chỉ in các dấu sao ở biên, bên trong để trống.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Hình vuông sao rỗng kích thước $n \times n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | **** |
|       | * * |
|       | * * |
|       | **** |

-------------------------------

# Exercise 070: *Hình Chữ Nhật Sao Đặc*
### Problem:
Cho hai số nguyên dương $R$ (số hàng) và $C$ (số cột), hãy in ra một hình chữ nhật đặc bằng các dấu sao (`*`).

### Input:
Hai số nguyên dương $R$ và $C$ ($1 \le R, C \le 50$).

### Output:
Một lưới dấu sao kích thước $R \times C$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3 5   | ***** |
|       | ***** |
|       | ***** |

-------------------------------

# Exercise 071: *Hình Chữ Nhật Sao Rỗng*
### Problem:
Cho hai số nguyên dương $R$ (số hàng) và $C$ (số cột), hãy in ra một hình chữ nhật rỗng bằng các dấu sao (`*`).

### Input:
Hai số nguyên dương $R$ và $C$ ($1 \le R, C \le 50$).

### Output:
Hình chữ nhật rỗng kích thước $R \times C$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5 5   | ***** |
|       | * * |
|       | * * |
|       | * * |
|       | ***** |

-------------------------------

# Exercise 072: *Bàn Cờ 0-1*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một lưới kích thước $n \times n$ trong đó các giá trị `0` và `1` xen kẽ nhau theo cả chiều ngang và chiều dọc (giống bàn cờ), bắt đầu bằng `1`.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Một lưới kích thước $n \times n$ gồm các số 0 và 1 xen kẽ.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 101    |
|       | 010    |
|       | 101    |

-------------------------------

# Exercise 073: *Hình Chữ Nhật 0-1 Xen Kẽ Hàng*
### Problem:
Cho hai số nguyên dương $R$ và $C$, hãy in ra một hình chữ nhật trong đó mỗi hàng bao gồm toàn bộ số `1` hoặc toàn bộ số `0`, xen kẽ nhau theo hàng.

### Input:
Hai số nguyên dương $R$ và $C$ ($1 \le R, C \le 50$).

### Output:
Lưới kích thước $R \times C$ xen kẽ hàng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4 5   | 11111  |
|       | 00000  |
|       | 11111  |
|       | 00000  |

-------------------------------

# Exercise 074: *Lưới Số Trượt*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một lưới $n \times n$ trong đó mỗi hàng $i$ bắt đầu từ giá trị $i$ và tăng dần $n$ bước.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới số kích thước $n \times n$.

### Example:
| INPUT | OUTPUT      |
|------:|:------------|
| 3     | 1 2 3       |
|       | 2 3 4       |
|       | 3 4 5       |

-------------------------------

# Exercise 075: *Hình Vuông Số Liên Tiếp*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một hình vuông kích thước $n \times n$ trong đó các số tăng dần liên tiếp từ 1 đến $n^2$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới số kích thước $n \times n$.

### Example:
| INPUT | OUTPUT      |
|------:|:------------|
| 4     | 1 2 3 4     |
|       | 5 6 7 8     |
|       | 9 10 11 12  |
|       | 13 14 15 16 |

-------------------------------

# Exercise 076: *Hình Vuông Đồng Tâm*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một mẫu các hình vuông đồng tâm trong đó lớp ngoài cùng bắt đầu từ $n$ và giảm dần về phía trung tâm. Kích thước tổng cộng của lưới là $(2n-1) \times (2n-1)$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới số kích thước $(2n-1) \times (2n-1)$ thể hiện các lớp đồng tâm.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 3 3 3 3 3 <br> 3 2 2 2 3 <br> 3 2 1 2 3 <br> 3 2 2 2 3 <br> 3 3 3 3 3 |

-------------------------------

# Exercise 077: *Lưới Số Bước Giảm*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một lưới $n \times n$ trong đó các số giữ nguyên theo chiều ngang cho đến khi gặp đường chéo, sau đó giảm dần.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới $n \times n$ theo quy luật mô tả.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | 3 3 3 <br> 3 2 2 <br> 3 2 1 |

-------------------------------

# Exercise 078: *Lưới Hiệu Tuyệt Đối*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một lưới $n \times n$ trong đó giá trị tại ô $(i, j)$ được tính theo công thức $1 + |i - j|$.

### Input:
Một số nguyên duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới giá trị tuyệt đối kích thước $n \times n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | 1 2 3 4 <br> 2 1 2 3 <br> 3 2 1 2 <br> 4 3 2 1 |

-------------------------------

# Exercise 079: *Lưới Số Tăng Dần Có Giới Hạn*
### Problem:
Cho một số nguyên dương $n$, hãy in ra một lưới $n \times n$ trong đó mỗi hàng $i$ bắt đầu từ $i$, tăng dần 1 đơn vị cho đến khi đạt giá trị $n$, sau đó giữ nguyên giá trị $n$ cho phần còn lại của hàng.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Lưới số $n \times n$ theo quy luật.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | 1 2 3 4 <br> 2 3 4 4 <br> 3 4 4 4 <br> 4 4 4 4 |

-------------------------------

# Exercise 080: *Tam Giác Pascal*
### Problem:
Cho một số nguyên dương $n$, hãy in ra $n$ hàng đầu tiên của tam giác Pascal. Mỗi phần tử ở hàng $i$ và cột $k$ được tính bằng công thức:
$$C(i, k) = \frac{i!}{k!(i-k)!}$$
(Với $i, k$ bắt đầu từ 0).

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 30$).

### Output:
$n$ hàng của tam giác Pascal, các phần tử cách nhau bởi dấu cách.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | 1 <br> 1 1 <br> 1 2 1 <br> 1 3 3 1 |

-------------------------------

# Exercise 081: *Tam Giác Vuông Trái*
### Problem:
Cho chiều cao $h$, hãy in ra một tam giác vuông căn lề trái bằng các dấu sao (`*`).

### Input:
Một số nguyên dương duy nhất $h$ ($1 \le h \le 50$).

### Output:
Tam giác sao có chiều cao $h$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | * <br> ** <br> *** |

-------------------------------

# Exercise 082: *Tam Giác Vuông Trái Rỗng*
### Problem:
Cho chiều cao $h$, hãy in ra một tam giác vuông căn lề trái rỗng. Cạnh tam giác được tạo bởi các dấu sao (`*`) và bên trong để trống.

### Input:
Một số nguyên dương duy nhất $h$ ($1 \le h \le 50$).

### Output:
Tam giác sao rỗng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | * <br> ** <br> * * <br> **** |

-------------------------------

# Exercise 083: *Tam Giác Vuông Ngược Rỗng*
### Problem:
Cho chiều cao $h$, hãy in ra một tam giác vuông căn lề trái ngược và rỗng.

### Input:
Một số nguyên dương duy nhất $h$ ($1 \le h \le 50$).

### Output:
Tam giác vuông ngược rỗng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | **** <br> * * <br> ** <br> * |

-------------------------------

# Exercise 084: *Tam Giác Vuông Phải*
### Problem:
Cho chiều cao $h$, hãy in ra một tam giác vuông căn lề phải bằng các dấu sao (`*`). Sử dụng khoảng trắng hoặc ký tự thay thế để căn lề.

### Input:
Một số nguyên dương duy nhất $h$ ($1 \le h \le 50$).

### Output:
Tam giác vuông căn lề phải.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   * <br>  ** <br> *** |

-------------------------------

# Exercise 085: *Tam Giác Vuông Phải Rỗng*
### Problem:
Cho chiều cao $h$, hãy in ra một tam giác vuông căn lề phải rỗng.

### Input:
Một số nguyên dương duy nhất $h$ ($1 \le h \le 50$).

### Output:
Tam giác vuông căn lề phải rỗng.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     |     * <br>    ** <br>   * * <br>  * * <br> ***** |

-------------------------------

# Exercise 086: *Tam Giác Vuông Phải Ngược*
### Problem:
Viết chương trình nhập vào chiều cao $n$ và in ra một tam giác vuông ngược căn lề phải bằng các dấu sao (*).

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Tam giác vuông ngược căn lề phải chiều cao $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | ***** <br>  **** <br>   *** <br>    ** <br>     * |

-------------------------------

# Exercise 087: *Tam Giác Vuông Phải Ngược Rỗng*
### Problem:
Viết chương trình nhập vào chiều cao $n$ và in ra một tam giác vuông ngược căn lề phải rỗng bằng các dấu sao (*).

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Tam giác vuông ngược căn lề phải rỗng chiều cao $n$.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | ***** <br>  * * <br>   * * <br>    ** <br>     * |

-------------------------------

# Exercise 088: *Mẫu Tam Giác Số 1*
### Problem:
Cho số nguyên $n$, in ra một tam giác trong đó mỗi hàng $i$ chứa các số từ 1 đến $i$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu tam giác số theo quy luật.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 1 <br> 1 2 <br> 1 2 3 <br> 1 2 3 4 <br> 1 2 3 4 5 |

-------------------------------

# Exercise 089: *Mẫu Tam Giác Số 2*
### Problem:
Cho số nguyên $n$, in ra một tam giác trong đó các số được điền theo cột dựa trên mẫu quy định.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu tam giác số theo quy luật.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 1 <br> 2 6 <br> 3 7 10 <br> 4 8 11 13 <br> 5 9 12 14 15 |

-------------------------------

# Exercise 090: *Mẫu Tam Giác Số 3*
### Problem:
Cho số nguyên $n$, in ra một tam giác trong đó các hàng lẻ được in theo thứ tự tăng dần và các hàng chẵn được in theo thứ tự giảm dần (mẫu zig-zag).

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Tam giác số zig-zag.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | 1 <br> 3 2 <br> 4 5 6 <br> 10 9 8 7 |

-------------------------------

# Exercise 091: *Mẫu Tam Giác Số 4*
### Problem:
Cho số nguyên $n$, in ra một tam giác trong đó mỗi số được tạo ra bằng cách cộng một lượng tăng dần bắt đầu từ 1.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Mẫu tam giác số theo quy luật.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 4     | 1 <br> 2 4 <br> 7 11 16 <br> 22 29 37 46 |

-------------------------------

# Exercise 092: *Mẫu Tam Giác Số Chẵn 5*
### Problem:
Cho số nguyên $n$, in ra một tam giác trong đó mỗi hàng $i$ chứa các số chẵn tăng dần đến đỉnh $2i$ rồi giảm dần về 2.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu tam giác số chẵn.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     | 2 <br> 2 4 2 <br> 2 4 6 4 2 <br> 2 4 6 8 6 4 2 <br> 2 4 6 8 10 8 6 4 2 |

-------------------------------

# Exercise 093: *Mẫu Tam Giác Số Cân 6*
### Problem:
Cho số nguyên $n$, in ra một tam giác cân trong đó mỗi hàng $i$ gồm chữ số $i$ lặp lại $2i-1$ lần.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 9$).

### Output:
Tam giác số cân.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   1 <br>  222 <br> 33333 |

-------------------------------

# Exercise 094: *Mẫu Tam Giác Chẵn Cân 7*
### Problem:
Cho số nguyên $n$, in ra một tam giác cân gồm các số chẵn. Mỗi hàng $i$ tăng dần theo bước nhảy 2 đến $2i$ rồi giảm dần về 2.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Tam giác chẵn cân.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   2 <br>  242 <br> 24642 |

-------------------------------

# Exercise 095: *Mẫu Tam Giác Lẻ Cân 8*
### Problem:
Cho số nguyên $n$, in ra một tam giác cân gồm các số lẻ. Mỗi hàng $i$ tăng dần qua các số lẻ liên tiếp đến $2i-1$ rồi giảm dần về 1.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Tam giác lẻ cân.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   1 <br>  131 <br> 13531 |

-------------------------------

# Exercise 096: *Hình Bình Hành Sao*
### Problem:
Cho số nguyên $n$, in ra một hình bình hành có các cạnh bằng $n$.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Hình bình hành sao bị đẩy sang trái.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 5     |     ***** <br>    ***** <br>   ***** <br>  ***** <br> ***** |

-------------------------------

# Exercise 097: *Hình Bình Hành Ngược*
### Problem:
Cho số hàng $r$ và số cột $c$, in ra một hình bình hành ngược bằng các dấu sao bị đẩy sang phải.

### Input:
Hai số nguyên dương $r$ và $c$ ($1 \le r, c \le 100$).

### Output:
Mẫu hình bình hành ngược.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3 4   | **** <br>  **** <br>   **** |

-------------------------------

# Exercise 098: *Hình Thoi Sao*
### Problem:
Cho số nguyên $n$, in ra một hình thoi đặc (hình kim cương) bằng các dấu sao với tổng cộng $2n-1$ hàng.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu hình thoi sao.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   * <br>  *** <br> ***** <br>  *** <br>   * |

-------------------------------

# Exercise 099: *Nửa Hình Thoi Phải*
### Problem:
Cho số nguyên $n$ đại diện cho chiều rộng tối đa, in ra nửa bên phải của hình thoi.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu nửa hình thoi bên phải.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | * <br> ** <br> *** <br> ** <br> * |

-------------------------------

# Exercise 100: *Khung Vuông Với Hình Thoi Rỗng*
### Problem:
Cho số nguyên $n$, in ra một hình vuông kích thước $2n \times 2n$ chứa một hình thoi rỗng ở giữa.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 50$).

### Output:
Mẫu khung vuông với hình thoi bên trong.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | ****** <br> ** ** <br> * * <br> * * <br> ** ** <br> ****** |

-------------------------------

# Exercise 101: *Mũi Tên Trái*
### Problem:
Cho số nguyên $n$, in ra mẫu hình mũi tên chỉ sang trái bằng các dấu sao.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu mũi tên hướng trái.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     |   *** <br>  ** <br> * <br>  ** <br>   *** |

-------------------------------

# Exercise 102: *Mũi Tên Phải*
### Problem:
Cho số nguyên $n$, in ra mẫu hình mũi tên chỉ sang phải bằng các dấu sao.

### Input:
Một số nguyên dương duy nhất $n$ ($1 \le n \le 100$).

### Output:
Mẫu mũi tên hướng phải.

### Example:
| INPUT | OUTPUT |
|------:|:-------|
| 3     | *** <br>  ** <br>   * <br>  ** <br> *** |