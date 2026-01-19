#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void createSample() {
    for (int i = 5; i >= 1; i--) {
        struct student *n = (struct student *)malloc(sizeof(struct student));
        n->id = i;
        n->Maths = 60 + i;
        n->Science = 70 + i;
        n->next = head;
        head = n;
    }
}

void insertEntry() {
    int refId, pos;
    struct student *newNode = (struct student *)malloc(sizeof(struct student));

    scanf("%d %d %d", &newNode->id, &newNode->Maths, &newNode->Science);
    scanf("%d %d", &refId, &pos); 

    struct student *cur = head, *prev = NULL;

    while (cur && cur->id != refId) {
        prev = cur;
        cur = cur->next;
    }
    if (!cur) return;

    if (pos == 1) { 
        newNode->next = cur;
        if (prev) prev->next = newNode;
        else head = newNode;
    } else { 
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

void deleteEntry() {
    int delId;
    scanf("%d", &delId);

    struct student *cur = head, *prev = NULL;

    while (cur && cur->id != delId) {
        prev = cur;
        cur = cur->next;
    }
    if (!cur) return;

    if (prev) prev->next = cur->next;
    else head = cur->next;

    free(cur);
}

void display() {
    struct student *t = head;
    while (t) {
        printf("%d %d %d\n", t->id, t->Maths, t->Science);
        t = t->next;
    }
}

int main() {
    int ch;
    createSample();

    while (1) {
        scanf("%d", &ch);
        if (ch == 1) insertEntry();
        else if (ch == 2) deleteEntry();
        else if (ch == 3) display();
        else if (ch == 4) break;
    }
    return 0;
}
