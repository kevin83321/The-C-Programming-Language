#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

int max;
char line[MAXLINE]; // current input line
char longest[MAXLINE]; // longest line saved here

int get_line(void);
void copy(void);

// print longest input line
int main(){
    int len; // current line length
    extern int max; // maximum length seend so far
    extern char longest[]; // longest line saved here

    max = 0;
    while((len = get_line()) > 0)
        if (len > max){
            max = len;
            copy();
        }

    if (max > 0) // there was a line
        printf("The longest line is : %s\n", longest);

    return 0;
}

// get_line : read a line into s, return length
int get_line(){
    int c, i;
    extern char line[]; // use global variable which didn't define
    for (i = 0; i < MAXLINE - 1 && (c= getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n'){
        line[i] == c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(void){
    int i;
    extern char line[], longest[]; // use global variable which didn't define

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}