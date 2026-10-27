#include "DoublyLinkedList.h"
#include "NodeFactory.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {} // Pusta lista na start


void   DoublyLinkedList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = tail = nullptr; /// Resetujemy wskaźniki po wyczyszczeniu listy
    size = 0; /// Resetujemy rozmiar listy
}

void DoublyLinkedList::push_front(int val) {
    Node* newNode = NodeFactory::createNode(val); /// Używamy fabryki do stworzenia węzła!
    if (!head) {
        head = tail = newNode; /// Jeśli lista była pusta, nowy element jest i głową i ogonem
    } else {
        newNode->next = head;  /// Nowy element wskazuje na stary początek
        head->prev = newNode;  /// Stary początek wskazuje wstecz na nowy element
        head = newNode;        /// Nowy element staje się oficjalną głową
    }
    size++; // Zwiększamy rozmiar listy
}

DoublyLinkedList::~DoublyLinkedList() { /// Pętla zwalniająca pamięć z RAMu, żeby nie było wycieków
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void DoublyLinkedList::push_back(int val) {
    Node* newNode = NodeFactory::createNode(val); /// Używamy fabryki do stworzenia węzła!
    if (!head) {
        head = tail = newNode; /// Jeśli lista była pusta, nowy element jest i głową i ogonem
    } else {
        tail->next = newNode;  /// Stary ogon wskazuje na nowy element
        newNode->prev = tail;  /// Nowy element wskazuje wstecz na stary ogon
        tail = newNode;        /// Nowy element staje się oficjalnym ogonem
    }
    size++; // Zwiększamy rozmiar listy
}
void DoublyLinkedList::insert_at(int index, int val) {
    if (index < 0 || index > size) {
        std::cout << "Indeks poza zakresem!\n";
        return;
    }
    if (index == 0) {
        push_front(val);
        return;
    }
    if (index == size) {
        push_back(val);
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    Node* newNode = NodeFactory::createNode(val);
    Node* prevNode = current->prev;

    prevNode->next = newNode;
    newNode->prev = prevNode;

    newNode->next = current;
    current->prev = newNode;

    size++;
}
void DoublyLinkedList::pop_front() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) {
        head->prev = nullptr;
    } else {
        tail = nullptr; /// Lista stała się pusta
    }
    delete temp;
    size--;
}
void DoublyLinkedList::pop_back() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) {
        tail->next = nullptr;
    } else {
        head = nullptr; /// Lista stała się pusta
    }
    delete temp;
    size--;
}
void DoublyLinkedList::remove_at(int index) {
    if (index < 0 || index >= size) {
        std::cout << "Indeks poza zakresem!\n";
        return;
    }
    if (index == 0) {
        pop_front();
        return;
    }
    if (index == size - 1) {
        pop_back();
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}
int DoublyLinkedList::getSize() const { return size; }
ListIterator DoublyLinkedList::begin() { return ListIterator(head); }
ListIterator DoublyLinkedList::end() { return ListIterator(nullptr); }
ListIterator DoublyLinkedList::rbegin() { return ListIterator(tail); }
ListIterator DoublyLinkedList::rend() { return ListIterator(nullptr); }
