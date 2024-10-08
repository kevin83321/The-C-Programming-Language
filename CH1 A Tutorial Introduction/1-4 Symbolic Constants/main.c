#include <stdio.h>

// formula c = (5/9) * f-32
// print Fahrenheit-Celsius table

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}