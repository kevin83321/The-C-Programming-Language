#include <stdio.h>
#include <string.h>
// #include <ctypes.h>

// atoi: convert s to integer
int atoi(char s[]){
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

// lower: convert c to lower case; ascii only
int lower(int c){
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    return c;
}

// upper: convert c to upper case; ascii only
int upper(int c){
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

unsigned long int next = 1;

int rand(void){
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}

int srand(unsigned int seed){
    next = seed;
}

int main(){
    
    printf("origin value : %ld\n", next);
    printf("rand = %d\n", rand());
    printf("after seed with 5 = %d\n", srand(5));
    printf("rand after seed with 5 = %d\n", rand());
    return 0;
}