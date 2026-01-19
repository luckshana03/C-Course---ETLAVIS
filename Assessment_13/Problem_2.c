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
    int ids[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++) {
        struct student *n = (struct student *)malloc(sizeof(struct student));
        n->id = ids[i];
        n->Maths = 60 + i;
        n->Science = 70 + i;
        n->next = head;
        head = n;
    }
}

void insertEntry() {
    int posId, choice;
    struct student *newNode = (struct student *)malloc(sizeof(struct student));

    scanf("%d", &newNode->id);
    scanf("%d", &newNode->Maths);
    scanf("%d", &newNode->Science);

    scanf("%d", &posId);  
    scanf("%d", &choice); 
    struct student *temp = head, *prev = NULL;

    while (temp && temp->id != posId) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) return;

    if (choice == 1) { 
        newNode->next = temp;
        if (prev) prev->next = newNode;
        else head = newNode;
    } else { 
        newNode->next = temp->next;
        temp->next = newNode;
    }
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
        else if (ch == 2) display();
        else if (ch == 3) break;
    }
    return 0;
}
