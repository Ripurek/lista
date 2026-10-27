#include "node.h"
Node::Node(int val){
    data = val;   /// Przypisujemy podaną wartość
    next = nullptr;  /// Na start nie ma następnika
    prev = nullptr;  /// Na start nie ma poprzednika   

}