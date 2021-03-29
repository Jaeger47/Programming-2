#include <stdio.h>
int sum(int n); //function prototype

int main() {
    int number, result; // local variables

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number); // function call

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    //loops until condition are meet
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); //self function call
    else
        return n;
}
