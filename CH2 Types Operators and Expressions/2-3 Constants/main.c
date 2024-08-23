#include <stdio.h>
#include <string.h>

#define MAXLINE 1000
#define LEAP 1 // in leap years

enum boolean{
    NO,
    YES
};

enum escapes {
    BELL = '\a',
    BACKSPACE = '\b',
    TAB = '\t',
    NEWLINE = '\n',
    VTAB = '\v',
    RETURN = '\r'
};

int strlen_(char s[]);

// print longest input line
int main(){
    char line[MAXLINE+1];
    int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31];

    strcpy(line, "Hello, world!");

    int length = strlen_(line);
    printf("\'%s\' has %d characters.\n", line, length);
    return 0;
}


int strlen_(char s[]){
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}