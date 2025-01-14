/** @file
 * Emitter functions.
 */

#include <stdio.h>
#include "globals.h"

/**
 * Emit an add instruction.
 * @param i The number of the quad to emit.
 */
void emit_add(int i) {
  printf("#   %s = %s + %s\n", quads[i].result->name, quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    movq %s, %%r9\n", quads[i].right->name);
  printf("    addq %%r9, %%r8\n");
  printf("    movq %%r8, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit a sub instruction.
 * @param i The number of the quad to emit.
 */
void emit_sub(int i) {
  printf("#   %s = %s - %s\n", quads[i].result->name, quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    movq %s, %%r9\n", quads[i].right->name);
  printf("    subq %%r9, %%r8\n");
  printf("    movq %%r8, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit a mul instruction.
 * @param i The number of the quad to emit.
 */
void emit_mul(int i) {
  printf("#   %s = %s * %s\n", quads[i].result->name, quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    movq %s, %%r9\n", quads[i].right->name);
  printf("    imulq %%r9, %%r8\n");
  printf("    movq %%r8, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit a div instruction.
 * @param i The number of the quad to emit.
 */
void emit_div(int i) {
  printf("#   %s = %s / %s\n", quads[i].result->name, quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%rax\n", quads[i].left->name);
  printf("    movq %%rax, %%rdx\n");
  printf("    sarq $63, %%rdx\n");
  printf("    movq %s, %%r9\n", quads[i].right->name);
  printf("    idivq %%r9\n");
  printf("    movq %%rax, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit an assign instruction.
 * @param i The number of the quad to emit.
 */
void emit_assign(int i) {
  printf("#   %s = %s\n", quads[i].result->name, quads[i].left->name);
  printf("    movq %s, %%r9\n", quads[i].left->name);
  printf("    movq %%r9, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit an int_const instruction.
 * @param i The number of the quad to emit.
 */
void emit_int_const(int i) {
  printf("#   %s = %ld\n", quads[i].result->name, quads[i].int_const);
  printf("    movq $%ld, %%r9\n", quads[i].int_const);
  printf("    movq %%r9, %s\n", quads[i].result->name);
  printf("\n");
}

/**
 * Emit a write instruction.
 * @param i The number of the quad to emit.
 */
void emit_write(int i) {
  printf("#   write %s\n", quads[i].left->name);
  printf("    movq $writefmt, %%rdi\n");
  printf("    movq %s, %%rsi\n", quads[i].left->name);
  printf("    movq $0, %%rax\n");
  printf("    call printf\n");
  printf("\n");
}

/**
 * Emit a writeln instruction.
 * @param i The number of the quad to emit.
 */
void emit_writeln(int i) {
  printf("#   writeln\n");
  printf("    movq $writelnfmt, %%rdi\n");
  printf("    movq $0, %%rax\n");
  printf("    call printf\n");
  printf("\n");
}

/**
 * Emit a gotrue instruction.
 * @param i The number of the quad to emit.
 */
void emit_gotrue(int i) {
  printf("#   if %s goto %s\n", quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    testq %%r8, %%r8\n");
  printf("    jnz %s\n", quads[i].right->name);
  printf("\n");
}

/**
 * Emit a gofalse instruction.
 * @param i The number of the quad to emit.
 */
void emit_gofalse(int i) {
  printf("#   ifnot %s goto %s\n", quads[i].left->name, quads[i].right->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    testq %%r8, %%r8\n");
  printf("    jz %s\n", quads[i].right->name);
  printf("\n");
}

/**
 * Emit a lessthan instruction.
 * @param i The number of the quad to emit.
 */
void emit_lessthan(int i) {
  printf("#   if %s less than %s goto %s\n", quads[i].right->name, quads[i].left->name, quads[i].result->name);
  // load up the registers for comparison
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    movq %s, %%r9\n", quads[i].right->name);
  // compare the values
  printf("    cmpq %%r8, %%r9\n");
  // jump as neccesary
  printf("    jl %s\n", quads[i].result->name);
  printf("\n");

}

/**
 * Emit an incrementation instruction.
 * @param i The number of the quad to emit.
 */

void emit_incre(int i) {
  printf("#   %s = %s + 1\n", quads[i].left->name, quads[i].left->name);
  printf("    movq %s, %%r8\n", quads[i].left->name);
  printf("    addq $1, %%r8\n");
  printf("    movq %%r8, %s", quads[i].left->name);
  printf("\n");
}
/**
 * Emit a goto instruction.
 * @param i The number of the quad to emit.
 */
void emit_goto(int i) {
  printf("#   goto %s\n", quads[i].left->name);
  printf("    jmp %s\n", quads[i].left->name);
  printf("\n");
}

/**
 * Emit a noop (label) instruction.
 */
void emit_noop(int i) {
  printf("%s:\n", quads[i].left->name);
  printf("\n");
}

/**
 * Emit the code for the beginning of an assembly program.
 */
void emit_prologue() {
  // Text section declaration.
  printf(".section .text\n");
  printf("\n");

  // Declare main.
  printf(".globl main\n");
  printf("main: enter $0, $0\n");
  printf("\n");
}

/** 
 * Emit the code for the end of an assembly program.
 */
void emit_epilogue() {
  // Set up to return 0.
  printf("\n");
  printf("  movq $0, %%rax\n");

  // Return from the function.
  printf("\n");
  printf("  leave\n");
  printf("  ret\n");
  printf("\n");

  // Format strings.
  printf(".section .rodata\n");
  printf("\n");
  printf("writefmt: .string \"%%8ld\"\n");
  printf("writelnfmt: .string \"\\n\"\n");
  printf("\n");

  // Traverse the symbol table to generate variable declarations.
  printf(".section .data\n");
  printf("\n");
  int i;
  for (i = 0; i < idents->size; i++) {
    struct symbol *s = idents->chains[i];
    while (s) {
      if (s->name[0] != 'L' || s->name[1] != '_')
	printf("%s:\t.quad 0\n", s->name);
      s = s->next;
    }
  }
}
  
/**
 * Emit amd64 code.
 * @param n The number of instructions to emit.
 */
void emit(int n) {
  int i;
  for (i = 0; i < n; i++) {
    switch (quads[i].opcode) {
    case O_ADD: emit_add(i); break;
    case O_SUB: emit_sub(i); break;
    case O_MUL: emit_mul(i); break;
    case O_DIV: emit_div(i); break;
    case O_ASSIGN: emit_assign(i); break;
    case O_INT_CONST: emit_int_const(i); break;
    case O_WRITE: emit_write(i); break;
    case O_WRITELN: emit_writeln(i); break;
    case O_GOTRUE: emit_gotrue(i); break;
    case O_GOFALSE: emit_gofalse(i); break;
    case O_LESSTHAN: emit_lessthan(i); break;
    case O_INCRE: emit_incre(i); break;
    case O_GOTO: emit_goto(i); break;
    case O_NOOP: emit_noop(i); break;
    }
  }
}
