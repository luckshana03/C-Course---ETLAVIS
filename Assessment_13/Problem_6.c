#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

void add() {
    struct student *n = (struct student *)malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->next = top;
    top = n;
}

void removeBottom() {
    if (top == NULL) {
        printf("Queue Empty\n");
        return;
    }

    if (top->next == NULL) {
        printf("%d %d %d\n", top->id, top->Maths, top->Science);
        free(top);
        top = NULL;
        return;
    }

    struct student *cur = top;
    while (cur->next->next != NULL)
        cur = cur->next;

    struct student *temp = cur->next;
    printf("%d %d %d\n", temp->id, temp->Maths, temp->Science);
    cur->next = NULL;
    free(temp);
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
        if (ch == 1) add();
        else if (ch == 2) removeBottom();
        else if (ch == 3) display();
        else if (ch == 4) break;
    }
    return 0;
}
