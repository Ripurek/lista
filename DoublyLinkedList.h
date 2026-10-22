#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H
#include "Node.h"
#include "Iterator.h"

class DoublyLinkedList {
private:
    Node* head; // Głowa - początek listy
    Node* tail; // Ogon - koniec listy
public:
    DoublyLinkedList();
    ~DoublyLinkedList();       // Destruktor - czyści pamięć po usunięciu listy
    void push_back(int val);   // Dodaje element na koniec
    ListIterator begin();      // Daje iterator na początek listy
    ListIterator end();        // Daje iterator na koniec (poza ostatni element)
};
#endif