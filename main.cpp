#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;  // Tworzymy pustą listę

    list.push_back(10); // Wrzucamy liczbę 10 (tworzy się węzeł przez fabrykę)
    list.push_back(20);  // Wrzucamy liczbę 20
    list.push_back(34);  // Wrzucamy liczbę 34

    std::cout << "Elementy listy: ";
    // Pętla z użyciem iteratora przechodzi od początku do końca i wypisuje liczby
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}