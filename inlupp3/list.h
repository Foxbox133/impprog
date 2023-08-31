

typedef struct _node{
    struct _node* next;
    struct _node* prev;
    int key;
} Node;

typedef struct _linked_list{
    Node *head;
    int length;
} List;




Node*make_node(int value);

int add_after(List* listan, int value);

void printList(List* listan);