#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void push() {
    struct student *n = (struct student *)malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->next = top;
    top = n;
}

void pop() {
    if (top == NULL) {
        printf("Stack Empty\n");
        return;
    }
    struct student *t = top;
    printf("%d %d %d\n", t->id, t->Maths, t->Science);
    top = top->next;
    free(t);
}

void display() {
    struct student *t = top;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch;
    while (1) {
        scanf("%d", &ch);
        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) display();
        else if (ch == 4) break;
    }
    return 0;
}
