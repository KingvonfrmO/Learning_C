#include <stdio.h>

long largest_prime_factor(long n) {
    long factor = 2;
    long largest = 0;

    while (n > 1) {
        while (n % factor == 0) {
            largest = factor;
            n /= factor;
        }
        factor++;
        if (factor * factor > n && n > 1) { // Optimization for larger primes
            largest = n;
            break;
        }
    }
    return largest;
}

int main(void) {
    long number = 612852475143;
    printf("%ld\n", largest_prime_factor(number));
    return 0;
}
