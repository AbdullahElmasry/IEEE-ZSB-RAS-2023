#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void printList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node* curr = head;
    printf("List: ");
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void insertNode(Node** head, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void deleteNode(Node** head) {
    if (*head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    Node* head = NULL;
    char input;
    int num;

    while (1) {
        printf("Enter '+', '-', 'p', or 'x': ");
        scanf(" %c", &input);

        if (input == 'x') {
            printf("Program stopped.\n");
            break;
        }

        switch (input) {
            case '+':
                printf("Enter an integer to add to the list: ");
                scanf("%d", &num);
                insertNode(&head, num);
                break;
            case '-':
                deleteNode(&head);
                break;
            case 'p':
                printList(head);
                break;
            default:
                printf("Invalid input, please try again.\n");
                break;
        }
    }


    return 0;
}