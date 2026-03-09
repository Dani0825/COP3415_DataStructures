#include "AVLTree.hpp"
#include "AVLTree.cpp"

#include <iostream>
#include <string>

int main(void) {
    AVLTree<int> tree;
    for (int i = 1; i < 50; i++){
        tree.insert(i);
        tree.print();
    }

    tree.remove(12);
    
    return 0;
}


