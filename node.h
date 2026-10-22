#ifndef Node_h // Zabezpieczenie przed wielokrotnym wczytaniem pliku
#define Node_h 
class Node {
public:
    int data;   // Tutaj trzymamy wartość
    Node* next;  // Wskaźnik na następny element
    Node* prev; // Wskaźnik na poprzedni element
    Node(int val); // Konstruktor - funkcja powoływująca węzeł
};
#endif  
