#include <stdio.h>

int main() {
    
    int octalNumber;
    int number;
    scanf("%d %i",&octalNumber,&number);// 123    0123 /0x123 
    
    printf("%d\n", octalNumber);  // Output: 42
    printf("%i\n", number);  // Output: 42   %i can take all the inputs while %d only decimal
    
    return 0;
}