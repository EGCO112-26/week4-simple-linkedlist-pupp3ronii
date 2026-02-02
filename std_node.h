#ifndef std_node_h
#define std_node_h

struct node {
    int id;
    char name[30];
    struct node *next;
};

typedef struct node *NodePtr;
typedef struct node Node;

NodePtr head;

#endif
