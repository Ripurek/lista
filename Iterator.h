#ifndef ITERATOR_H
#define ITERATOR_H
#include "Node.h"

class ListIterator {
private:
    Node* current; // Pamięta, na którym elemencie aktualnie stoimy
public:
    ListIterator(Node* ptr);
    int& operator*();            // Pozwala odczytać wartość elementu, na którym stoimy (gwiazdka *it)
    ListIterator& operator++();  // Pozwala przejść do następnego elementu (++it)
    bool operator!=(const ListIterator& other) const; // Sprawdza, czy to już koniec listy
};
#endif