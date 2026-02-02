#ifndef DLLIST_H
#define DLLIST_HPP

#include "DLLNode.hpp"

template <typename T>
class DLList{
public:
    DLList();

    bool        empty() const; // Returns true if list is empty
    void        push_front(const T& val); // Insert the new node at the beginning
    void        push_back(const T& val); // Insert the new node at the end
    void        print() const; // Print the list
    void        print_backwards() const; // Print the list from tail to head
    void        pop_back(); // Remove the last element (node)
    void        pop_front(); //Remove the first element (node)



private:
    DLLNode<T>* head; // The pointer to the first node
    DLLNode<T>* tail; // The pointer to the last node
    unsigned list_size;
};

#endif
