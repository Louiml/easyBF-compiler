#include <stdio.h>
#include <lml/brainfuck_compiler.bf>
static const char * brainfuck;
static const char * run;
int main(void) {
brainfuck = brainfuck_compiler.file = "main.bf";
run = brainfuck_compiler.run.%type;
brainfuck(run);
return 0;
}
