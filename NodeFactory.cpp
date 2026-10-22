#include "NodeFactory.h"
Node* NodeFactory::createNode(int val) {
    return new Node(val); // Fabryka tworzy w pamięci komputera nowy węzeł i go zwraca
}