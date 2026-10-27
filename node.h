#ifndef Node_h // Zabezpieczenie przed wielokrotnym wczytaniem pliku
#define Node_h 

/**
 * @file node.h
 * @brief Definicja klasy Node reprezentującej pojedynczy węzeł listy.
 */

/**
 * @class Node
 * @brief Klasa przechowująca pojedynczy element listy dwukierunkowej.
 * 
 * Klasa odpowiada za trzymanie danych całkowitych oraz wskaźników 
 * na poprzedni i następny węzeł.
 */
class Node {
public:
    int data;   /// Tutaj trzymamy wartość
    Node* next;  /// Wskaźnik na następny element
    Node* prev; /// Wskaźnik na poprzedni element

/**
     * @brief Konstruktor klasy Node.
     * @param val Wartość typu int, jaka ma być przypisana do węzła.
     */


    Node(int val); /// Konstruktor - funkcja powoływująca węzeł
};
#endif  
