//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"


int main(int argc, const char * argv[]) {

    NodePtr temp, tmp;
    int i, n;

    n = (argc-1)/2;   // จำนวน node (กำหนดเอง)


    head = (NodePtr)malloc(sizeof(struct node));
    temp = head;


    for (i = 0; i < n; i++) {
       temp->id = atoi(argv[(i * 2) + 1]);
        strcpy(temp->name, argv[(i * 2) + 2]);
        temp->next = (NodePtr)malloc(sizeof(struct node));
        temp = temp->next;
    }

    temp = head;
    for (i = 0; i < n - 1; i++)
        temp = temp->next;

    free(temp->next);   
    temp->next = NULL; 


    tmp = head;
    while (tmp) {
       printf("%d %s\n", tmp->id, tmp->name);
        tmp = tmp->next;
    }
    printf("\n");


    tmp = head;
    while (tmp) {
        head = head->next;
        printf("Freeing %d %s\n", tmp->id, tmp->name);

        free(tmp);
        tmp = head;
    }

    return 0;
}
