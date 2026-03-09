#include "BST.cpp"

#include <iostream>
#include <string>

int main(void){
    BST<int> tree;
    tree.insert(2);
    tree.insert(1);
    tree.insert(3);
    tree.insert(4);

    tree.print();

    tree.deleteNode(2);
    tree.print();
    tree.deleteNode(3);
    tree.print();


    //Make work

    return 0;
}