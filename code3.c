#include <stdio.h>
int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nNumbers are: %d and %d", num1, num2);
    
    result = num1 + num2;
    printf("\nResult is: %d", result);
    
    return 0;
}