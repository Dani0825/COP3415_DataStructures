#ifndef CLLIST_H
#define CLLIST_H

#include "DLLNode.hpp"

template <typename T>
class CLList{

public:
CLList(); // No-arg constructor  ok 

bool empty() const; // Return true if list is empty, ok 
void push_front(const T& val); // Insert at the beginning  ok 
void push_back(const T& val); // Insert at the end ok
void print() const; // Print the list  ok
void print_backwards() const; // Print the list backwards  ok
void pop_back(); // Remove the last element (node) ok
void pop_front(); // Remove the first element (node) ok

private:
DLLNode<T>* tail; // The pointer to the last node
unsigned list_size;
};

#endif
