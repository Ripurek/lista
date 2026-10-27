#include "Iterator.h"

ListIterator::ListIterator(Node* ptr) { current = ptr; }

int& ListIterator::operator*() { return current->data; } /// Zwraca dane z aktualnego węzła

ListIterator& ListIterator::operator++() {
    current = current->next; /// Przesuwa wskaźnik na kolejny element w prawo
    return *this;
}

ListIterator& ListIterator::operator--() {
    if (current != nullptr) {
        current = current->prev; /// Pozwala przejść do poprzedniego elementu lub do nullptr (co kończy pętlę rend)
    }
    return *this;
}

bool ListIterator::operator==(const ListIterator& other) const {
    return current == other.current; /// Porównuje, czy dwa iteratory wskazują na ten sam element
}

bool ListIterator::operator!=(const ListIterator& other) const {
    return current != other.current; /// Porównuje, czy dwa iteratory wskazują na to samo miejsce
}
