#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

int main() {
    struct student *head = NULL, *temp = NULL, *newNode;
    int id;

    while (1) {
        scanf("%d", &id);
        if (id == -1)
            break;

        newNode = (struct student *)malloc(sizeof(struct student));
        newNode->id = id;

        scanf("%d", &newNode->Maths);
        scanf("%d", &newNode->Science);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp->next = newNode;
        }
        temp = newNode;
    }

    temp = head;
    while (temp != NULL) {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }

    return 0;
}
