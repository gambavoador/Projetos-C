#include <stdio.h>
#include <stdlib.h>

typedef struct datanode{
    int id;
} dataNode;

typedef struct node{
    dataNode data;
    struct node* next;
} Node;

typedef struct list{
    int size;
    Node* head;
} List;

List* createList(){
    List* list = (List*) malloc(sizeof(List));

    list -> size = ;
    list -> head = NULL;
    return list;
}

void push(List* list, dataNode data) {
    Node* node = (Node*) malloc(sizeof(Node));

    node->data = data;
    node->next = list->head;
    list->head = node;
    list->size++;
}

int main()
{
    List* lista = createList();

    printf("%d", lista->size);

    return 0;
}
