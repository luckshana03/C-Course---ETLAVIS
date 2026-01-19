#include <stdio.h>
#include <stdlib.h>

struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *head = NULL;

void createSample() {
    for (int i = 1; i <= 5; i++) {
        struct student *n = (struct student *)malloc(sizeof(struct student));
        n->id = i;
        n->Maths = 60 + i;
        n->Science = 70 + i;
        n->next = NULL;
        n->prev = NULL;

        if (head == NULL) {
            head = n;
        } else {
            struct student *t = head;
            while (t->next)
                t = t->next;
            t->next = n;
            n->prev = t;
        }
    }
}

void insertEntry() {
    int refId, pos;
    struct student *newNode = (struct student *)malloc(sizeof(struct student));

    scanf("%d %d %d", &newNode->id, &newNode->Maths, &newNode->Science);
    scanf("%d %d", &refId, &pos);  

    struct student *cur = head;

    while (cur && cur->id != refId)
        cur = cur->next;

    if (!cur) return;

    if (pos == 1) {  
        newNode->next = cur;
        newNode->prev = cur->prev;

        if (cur->prev)
            cur->prev->next = newNode;
        else
            head = newNode;

        cur->prev = newNode;
    } else {        
        newNode->prev = cur;
        newNode->next = cur->next;

        if (cur->next)
            cur->next->prev = newNode;

        cur->next = newNode;
    }
}

void deleteEntry() {
    int delId;
    scanf("%d", &delId);

    struct student *cur = head;

    while (cur && cur->id != delId)
        cur = cur->next;

    if (!cur) return;

    if (cur->prev)
        cur->prev->next = cur->next;
    else
        head = cur->next;

    if (cur->next)
        cur->next->prev = cur->prev;

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
