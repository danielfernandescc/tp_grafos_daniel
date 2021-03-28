//
// Created by vitor on 3/23/21.
//
#include "../../../utils/defines.h"


#ifndef TP_C_LINKEDLIST_H
#define TP_C_LINKEDLIST_H

//Linked list
typedef struct linked {
    int vertice;
    float peso;
    struct linked *next;
} LinkedList;

LinkedList *alocaNode(int vertices);

LinkedList *createNode(int vertice, float weight);

LinkedList *createLinkedList(int numVertices);

void printLinked(LinkedList *list);

#endif //TP_C_LINKEDLIST_H
