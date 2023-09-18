#include <stdio.h>

// Function that takes a function pointer as an argument and calls it
void callFunction(int (*func)(int)) {
    int result = func(5); // Call the function using the pointer with argument 5
    printf("Result: %d\n", result);
}

// Example function that can be passed as a function pointer
int square(int x) {
    return x * x;
}

int main() {
    // Pass the square function as a function pointer to callFunction
    callFunction(square);

    return 0;
}