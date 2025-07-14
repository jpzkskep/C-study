//새 노드를 만드는 함수
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* nextNode;
};

struct Node* CreateNode(int data);
struct Node* InsertNode(struct Node* current, int data);
void DestroyNode(struct Node** head, struct Node* destroy);
void PrintNodeFrom(struct Node* from);

int main() {
    struct Node* Node1 = CreateNode(100);
    struct Node* Node2 = InsertNode(Node1, 200);
    struct Node* Node3 = InsertNode(Node2, 300);
    struct Node* Node4 = InsertNode(Node2, 400);  // Node2 다음에 400 삽입

    printf("삭제 전:\n");
    PrintNodeFrom(Node1);

    DestroyNode(&Node1, Node3);  // Node3 삭제
    printf("\nNode3 삭제 후:\n");
    PrintNodeFrom(Node1);

    DestroyNode(&Node1, Node1);  // head(Node1) 삭제
    printf("\nNode1(head) 삭제 후:\n");
    PrintNodeFrom(Node1);

    return 0;
}

struct Node* CreateNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->nextNode = NULL;
    return newNode;
}

struct Node* InsertNode(struct Node* current, int data) {
    struct Node* after = current->nextNode;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->nextNode = after;
    current->nextNode = newNode;
    return newNode;
}

void DestroyNode(struct Node** head, struct Node* destroy) {
    if (*head == NULL || destroy == NULL) return;

    // 삭제할 노드가 head일 경우
    if (*head == destroy) {
        struct Node* temp = *head;
        *head = (*head)->nextNode;
        free(temp);
        return;
    }

    struct Node* current = *head;
    while (current && current->nextNode) {
        if (current->nextNode == destroy) {
            current->nextNode = destroy->nextNode;
            free(destroy);
            return;
        }
        current = current->nextNode;
    }
}

void PrintNodeFrom(struct Node* from) {
    while (from) {
        printf("노드의 데이터 : %d\n", from->data);
        from = from->nextNode;
    }
}
