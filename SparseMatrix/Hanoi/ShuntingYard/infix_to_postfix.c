#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }

int prec(char c) {
    if (c=='+'||c=='-') return 1;
    if (c=='*'||c=='/') return 2;
    return 0;
}

int main() {
    char infix[] = "A+B*C";
    char postfix[100];
    int k = 0;

    for (int i = 0; infix[i]; i++) {
        if (isalnum(infix[i]))
            postfix[k++] = infix[i];
        else {
            while (top != -1 && prec(stack[top]) >= prec(infix[i]))
                postfix[k++] = pop();
            push(infix[i]);
        }
    }
    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
    printf("Postfix: %s\n", postfix);
    return 0;
}
