#include <stdio.h>
#include <get.h>
static const char * brainfuck;
static const char * run;
int main(void) {
brainfuck = "main.bf";
run = brainfuck;
printf(run);
return 0;
}
