#ifndef NodeFactory_h
#define  NodeFactory_h     
#include "node.h"
/**
 * @file NodeFactory.h
 * @brief Definicja klasy NodeFactory odpowiedzialnej za wzorzec fabryki węzłów.
 */



 /**
 * @class NodeFactory
 * @brief Fabryka tworząca nowe obiekty węzłów listy.
 * 
 * Klasa implementuje wzorzec fabryki w celu odseparowania logiki 
 * alokacji pamięci na stercie od zarządzania samą strukturą listy.
 */

class NodeFactory {
public:

/**
     * @brief Tworzy nowy węzeł listy na stercie.
     * @param val Wartość typu int przekazywana do nowego węzła.
     * @return Wskaźnik na nowo utworzony obiekt typu Node.
     */
    static Node* createNode(int val); /// Funkcja wytwórcza
    
};  
#endif

