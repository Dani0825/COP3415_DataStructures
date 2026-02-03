#include "CLList.hpp"

#include <iostream>

template <typename T>
CLList<T>::CLList() {
    tail = nullptr;
    list_size = 0;
}

template <typename T>
void CLList<T>::push_front(const T& val) {
    if (empty()) {
        tail = new DLLNode<T>(val);
        tail->prev = tail;
        tail->next = tail;
    }
    else {
        tail->next = new DLLNode<T>(val, tail, tail->next);
        tail->next->next->prev = tail->next;
    }
    
    list_size++;
}

//added
template <typename T>
void CLList<T>::push_back(const T& val){
    if (empty()) {
        tail = new DLLNode<T>(val);
        tail->next = tail;
        tail->prev = tail;
    }
    else {
        DLLNode<T>* newNode = new DLLNode<T>(val, tail, tail->next); 
        tail->next->prev = newNode;  
        tail->next = newNode;        
        tail = newNode; 
    }
    
    list_size++;
}

template <typename T>
void CLList<T>::print() const {
    if (empty()) {
        return;
    }
    DLLNode<T>* cur = tail->next;
    do {
        std::cout << cur->data;
        if (cur != tail) { // not the last node
            std::cout << " -> ";
        }
        cur = cur->next;
    } while (cur != tail->next);
    
    std::cout << std::endl;
}

template <typename T>
void CLList<T>::print_backwards() const {
    if (empty()) {
        return;
    }
    DLLNode<T>* cur = tail;

    do {
        std::cout << cur->data;
        if (cur != tail->next) { // not the last node
            std::cout << " <- ";
        }
        cur = cur->prev;
    } while (cur != tail);
    
    std::cout << std::endl;
}

template <typename T>
void CLList<T>::pop_back(){
    if (!empty()) {
        if (list_size == 1){
            delete tail;
            tail = nullptr;
        }    
        else{
            DLLNode<T>* to_delete = tail;
            tail->prev->next = tail->next;
            tail->next->prev = tail->prev;
            tail = tail->prev ;

            delete to_delete;
        }
        
    list_size--;
    }
}

template <typename T>
void CLList<T>::pop_front(){
    if (!empty()) {
        if (list_size == 1) { 
        delete tail;
        tail = nullptr;
        } 
        else{
            DLLNode<T>* to_delete = tail->next;
            tail->next = tail->next->next;
            tail->next->prev = tail;

            delete to_delete;
        }

        list_size--;
    }
}

template <typename T>
bool CLList<T>::empty() const {
    return (list_size == 0);
}