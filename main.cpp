#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;  // Tworzymy pustą listę

    list.push_back(10); // Wrzucamy liczbę 10 (tworzy się węzeł przez fabrykę)
    list.push_back(20);  // Wrzucamy liczbę 20
    list.push_back(34);  // Wrzucamy liczbę 34

std::cout << "Wyswietl cala liste: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";
// 2. Dodaj element pod wskazany indeks
    std::cout << "Wstawiam 15 pod indeks 1:\n";
    list.insert_at(1, 15); // Lista: 10, 15, 20, 30
    std::cout << "Lista: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

std::cout << "Wstawiam 17 pod indeks 0:\n";
    list.insert_at(0, 17); // Lista: 10, 15, 20, 30
    std::cout << "Lista: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    // 3. Wyświetl listę w odwrotnej kolejności
    std::cout << "Wyswietl liste w odwrotnej kolejnosci: ";
    for (auto it = list.rbegin(); it != list.rend(); --it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    // 4. Usuwanie elementów
    std::cout << "Usuwam element z poczatku i z konca\n";
    list.pop_front(); // Usuwa 10
    list.pop_back();  // Usuwa 30
    std::cout << "Lista po usunieciu: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    // 5. Test wyświetlania następnego i poprzedniego elementu względem iteratora
    list.push_back(40); // Lista ma teraz: 15, 20, 40
    auto it = list.begin(); // Stoimy na 15
    std::cout << "Aktualny element (iterator): " << *it << "\n";
    ++it; // Przechodzimy do następnego 
    std::cout << "Wyswietl nastepny element: " << *it << "\n";
    --it; // Wracamy do poprzedniego 
    std::cout << "Wyswietl poprzedni element: " << *it << "\n\n";



    // // 6. Czyszczenie całej listy
    // std::cout << "Czyszcze cala liste...\n";
    // list.clear();
    // std::cout << "Rozmiar listy po wyczyszczeniu: " << list.getSize() << "\n";

    
    // std::cout << "Elementy listy: ";
    // // Pętla z użyciem iteratora przechodzi od początku do końca i wypisuje liczby
    // for (auto it = list.begin(); it != list.end(); ++it) {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;

    return 0;
}