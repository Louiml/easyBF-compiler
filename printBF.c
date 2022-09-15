#include <stdio.h>
#include <lml/brainfuck_compiler.bf>
static const char * brainfuck;
static const char * run;
int main(void) {
brainfuck = "main.bf";
run = brainfuck;
printf(run);
return 0;
}
