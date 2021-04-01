#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  EPSILON 0.000010

int main() {
    double t = 1.0, s, x;
    int j = 0;

    scanf("%lf", &x);

    s = t;

    while (fabs(t) >= EPSILON) {
        j = j + 1;
        t = (t / j) * x;
        s = s + t;

    }
    printf("%15.10lf\n", s);
    return 0;

}
