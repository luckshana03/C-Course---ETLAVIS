#include <stdio.h>
int main() {
    int n, temp, pow10 = 1, first, last, middle;
    scanf("%ld", &n);
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        pow10 = pow10 * 10;
    }
    first = temp;   
    last = n % 10;  
    middle = n % pow10; 
    middle = middle / 10;
    n = last * pow10 + middle * 10 + first;
    printf("%ld", n);
}
