# LogicGate Calculator

This is a simple C program that evaluates boolean expressions using macros to represent logical operators such as AND, OR, and NOT. The evaluation is performed according to conventional boolean rules.

## Features

- Evaluation of boolean expressions using AND, OR, and NOT.
- Utilizes macros to represent logical operators.
- Can handle more complex boolean expressions.

## How to Use

1. **Compilation:**
   - Use a C compiler, such as GCC, to compile the code.
     ```bash
     gcc -o logicgate logicgate.c -O3 -Wall
     ```

2. **Execution:**
   - Run the compiled program.
     ```bash
     ./logicgate
     ```

3. **Inputting Expressions:**
   - Input boolean expressions when prompted by the program.
   - For example: `NOT(OR(1, AND(1, 0)))`

4. **Output:**
   - The program will display the result of the entered expression.

## Examples

```plaintext
Enter the boolean operation: NOT(OR(1, AND(1, 0)))
Result of the expression: 0
```

This should help users understand how to compile, execute, and use the LogicGate Calculator program.
