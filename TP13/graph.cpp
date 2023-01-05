#include "graph.h"

adrNode newNode_1301213185(char x){
    adrNode P = new node;

    info(P) = x;
    next(P) = nil;
    child(P) = nil;

    return P;
}

void addNode_1301213185(adrNode &G, adrNode P){
    adrNode Q = G;
    if(G == nil){
        G = P;
    }else{
        while(next(Q) != nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

adrNode findNode_1301213185(adrNode G, char x){
    if(G != nil){
        adrNode P = G;

        while(P != nil){
            if(info(P) == x){
                return P;
            }
            P = next(P);
        }
    }
    return nil;
}

void addEdge_1301213185(adrNode &G, char x, char y){
    if(G == nil){
        cout << "Graph kosong" << endl;
    }else{

        adrNode P = findNode_1301213185(G, x);
        if(P != nil){
            adrChild Q = new nodeChild;
            info(Q) = y;
            next(Q) = nil;

            if(child(P) == nil){
                child(P) = Q;
            }else{
                next(Q) = child(P);
                child(P) = Q;
            }
        }
    }
}

bool isConnected_1301213185(adrNode G, char x, char y){
    if(G != nil){
        adrNode P = G;
        while(P != nil){
            if(info(P) != x){
                P = next(P);
            }else{
                adrChild Q = child(P);
                while(Q != nil){
                    if(info(Q) != y){
                        Q = next(Q);
                    }else{
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

void printGraph_1301213185(adrNode G){
    if(G == nil){
        cout << "Graph kosong" << endl;
    }else{
        adrNode P = G;
        while(P != nil){
            cout << "node " << info(P) << ":";
            if(child(P) != nil){
                adrChild Q = child(P);
                while(Q != nil){
                    cout << " - " << info(Q);
                    Q = next(Q);
                }
                cout << endl;
            }else{
                cout << "Edge Kosong" << endl;
            }
            P = next(P);
        }
    }
}

