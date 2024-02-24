# LogicGate Calculator

Este é um simples programa em C que avalia expressões booleanas usando macros para representar operadores lógicos como AND, OR e NOT. A avaliação é realizada de acordo com as regras booleanas convencionais.

## Funcionalidades

- Avaliação de expressões booleanas usando AND, OR e NOT.
- Utiliza macros para representar operadores lógicos.
- Pode lidar com expressões booleanas mais complexas.

## Como Usar

1. **Compilação:**
   - Use um compilador C, como o GCC, para compilar o código.
     ```bash
     gcc -o logicgate logicgate.c -O3 -Wall
     ```

2. **Execução:**
   - Execute o programa compilado.
     ```bash
     ./logicgate
     ```

3. **Entrada de Expressões:**
   - Insira expressões booleanas quando solicitado pelo programa.
   - Por exemplo: `NOT(OR(1, AND(1, 0)))`

4. **Resultado:**
   - O programa exibirá o resultado da expressão inserida.

## Exemplos

```plaintext
Escreva a operacao booleana: NOT(OR(1, AND(1, 0)))
Resultado da expressao: 0
```

## 🇺🇸 English README.MD version:
[ENGLISH.MD](ENGLISH.MD)
