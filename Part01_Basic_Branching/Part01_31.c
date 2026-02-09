// XẾP LOẠI HỌC LỰC
// HEADER FILES
#include <stdio.h>
#include <math.h>
// MAIN FUNCTION
int main(){
    // DECLARATION
    double a, b, c, d, sumGra;
    // INPUT
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    // PROCESSING
    sumGra = 10*(a + b + 2*c + 3*d) + 1e-9;
    // OUTPUT
    if (sumGra >= (80*7.0))
        printf("A\n");
    else if ((sumGra >= (65*7.0)) && (sumGra < (80*7.0)))
        printf("B\n");
    else if (sumGra < (50*7.0))
        printf("D\n");
    else
        printf("C\n");
    return 0;
}