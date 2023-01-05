#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define next(P) (P)->next
#define info(P) (P)->info
#define child(P) (P)->child
#define nil NULL

typedef struct nodeChild *adrChild;
typedef struct node *adrNode;

struct nodeChild{
    char info;
    adrChild next;
};
struct node{
    char info;
    adrNode next;
    adrChild child;
};

adrNode newNode_1301213185(char x);
void addNode_1301213185(adrNode &G, adrNode P);
adrNode findNode_1301213185(adrNode G, char x);
void addEdge_1301213185(adrNode &G, char x, char y);
bool isConnected_1301213185(adrNode G, char x, char y);
void printGraph_1301213185(adrNode G);

#endif // GRAPH_H_INCLUDED
