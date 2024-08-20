#include <stdio.h>

// formula c = (5/9) * f-32

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}