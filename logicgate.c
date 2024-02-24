#include <stdio.h>
#include <stdbool.h>

#define AND(a, b) (a && b)
#define OR(a, b) (a || b)
#define NOT(a) (!a)

bool eval(char expr[], int *index) {
    if (expr[*index] == 'N') {
        (*index)++;
        return NOT(eval(expr, index));
    } else if (expr[*index] == 'O') {
        (*index) += 2;
        bool left = eval(expr, index);
        (*index)++;
        bool right = eval(expr, index);
        (*index)++;
        return OR(left, right);
    } else if (expr[*index] == 'A') {
        (*index) += 3;
        bool left = eval(expr, index);
        (*index)++;
        bool right = eval(expr, index);
        (*index)++;
        return AND(left, right);
    } else {
        return expr[(*index)++] - '0';
    }
}

int main() {
    char expr[100];

    printf("Escreva a operacao booleana: ");
    scanf("%s", expr);

    int index = 0;
    bool result = eval(expr, &index);

    printf("Resultado da expressao: %d\n", result);

    return 0;
}