#include "graph.h"
#include <iostream>
using namespace std;

int main()
{
    adrNode G;
    G = nil;

    addNode_1301213185(G, newNode_1301213185('A'));
    addNode_1301213185(G, newNode_1301213185('B'));
    addNode_1301213185(G, newNode_1301213185('C'));
    addNode_1301213185(G, newNode_1301213185('D'));

    addEdge_1301213185(G, 'A', 'B');
    addEdge_1301213185(G, 'A', 'D');
    addEdge_1301213185(G, 'A', 'C');

    addEdge_1301213185(G, 'B', 'D');
    addEdge_1301213185(G, 'B', 'A');

    addEdge_1301213185(G, 'C', 'A');

    addEdge_1301213185(G, 'D', 'A');
    addEdge_1301213185(G, 'D', 'B');

    cout << "========================================================" << endl;
    printGraph_1301213185(G);
    cout << "========================================================" << endl;

    return 0;
}
