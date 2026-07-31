 #include <stdio.h>

int main() {
    // A highly precise number with 15 decimal places
    float PI_float = 3.141592653589793;
    double PI_double = 3.141592653589793;

    // Print both using 15 decimal places (.15)
    printf("Float precision : %.15f\n", PI_float);
    printf("Double precision: %.15lf\n", PI_double);

    return 0;
}