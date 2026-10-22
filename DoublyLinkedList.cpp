#include "DoublyLinkedList.h"
#include "NodeFactory.h"

DoublyLinkedList::DoublyLinkedList() { head = nullptr; tail = nullptr; } // Pusta lista na start

DoublyLinkedList::~DoublyLinkedList() { // Pętla zwalniająca pamięć z RAMu, żeby nie było wycieków
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void DoublyLinkedList::push_back(int val) {
    Node* newNode = NodeFactory::createNode(val); // Używamy fabryki do stworzenia węzła!
    if (!head) {
        head = tail = newNode; // Jeśli lista była pusta, nowy element jest i głową i ogonem
    } else {
        tail->next = newNode;  // Stary ogon wskazuje na nowy element
        newNode->prev = tail;  // Nowy element wskazuje wstecz na stary ogon
        tail = newNode;        // Nowy element staje się oficjalnym ogonem
    }
}

ListIterator DoublyLinkedList::begin() { return ListIterator(head); }
ListIterator DoublyLinkedList::end() { return ListIterator(nullptr); }