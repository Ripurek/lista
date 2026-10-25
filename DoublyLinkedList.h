#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H
#include "Node.h"
#include "Iterator.h"

class DoublyLinkedList {
private:
    Node* head; // Głowa - początek listy
    Node* tail; // Ogon - koniec listy
    int size;  // Rozmiar listy  do obsługi indeksów 
public:
    DoublyLinkedList();
    ~DoublyLinkedList();       // Destruktor - czyści pamięć po usunięciu listy
    void push_front(int val);  // Dodaje element na początek
    void push_back(int val);   // Dodaje element na koniec
    void insert(int index,int val) ; // Dodaje element z podanego indeksu
    void pop_front();          // Usuwa element z początku
    void pop_back();           // Usuwa element z końca
    void remove_at(int index);           // Usuwa element z podanego indeksu
    
    ListIterator begin();      // Daje iterator na początek listy
    ListIterator end();        // Daje iterator na koniec (poza ostatni element)
    ListIterator rbegin();     // Daje iterator na początek listy od końca
    ListIterator rend();       // Daje iterator na koniec listy od końca
};
#endif