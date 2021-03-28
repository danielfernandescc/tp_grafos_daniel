<<<<<<< HEAD
#include "../../grafoLinkedList.h"
=======
#include "../grafoLinkedList.h"
>>>>>>> 1e16fdf2d02ca16e3d1fccdc0ea18d5d4eb89bdb

typedef struct {
    int conta;
    int *pre;
    int **retorno;
    int indexRetorno;
} TadDepthLinkedList;

<<<<<<< HEAD
void initDepthLinkedList(int m, TadDepthLinkedList *depth);

void allocRetornoLinkedList(TadDepthLinkedList *depth);

void DepthRLinkedList(GrafoLinked G, int v, TadDepthLinkedList *depth);

void DepthLinkedList(GrafoLinked G, TadDepthLinkedList *depth);

void PrintDepthLinkedL6ist(GrafoLinked G);
=======
void initDepthLinkedList(int m, TadDepth *depth);

void allocRetornoLinkedList(TadDepth *depth);

void DepthRLinkedList(GrafoLinked G, int v, TadDepth *depth);

void DepthLinkedList(GrafoLinked G, TadDepth *depth);

void PrintDepthLinkedList(GrafoLinked G);
>>>>>>> 1e16fdf2d02ca16e3d1fccdc0ea18d5d4eb89bdb
