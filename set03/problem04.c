#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main() {
    int n;
    printf("Enter the position of the number in the Fibonacci sequence: ");
    n = input();
    output(n, find_fibo(n));
    return 0;
}

int input() {
    int a;
    scanf("%d", &a);
    return a;
}

int find_fibo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}
