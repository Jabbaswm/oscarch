

#include <string>
#include <iostream>
#include "bst/BinarySearchTree.h"

void runBST();

void runAVL();

void printTreeNode(string prefix, TreeNode<int> *node) {
    if (node != nullptr) {
        cout << prefix << " found: " << node->element << endl;
    } else
        cout << prefix << " not found" << endl;
}

int main() {

    runBST();
    runAVL();

    return 0;
}

void runAVL() {
   //use an avl tree
}

void runBST() {
    BinarySearchTree<int> *tree = new BinarySearchTree<int>(10);
    tree->insert(2);
    tree->insert(1);
    tree->insert(6);
    tree->insert(7);
    tree->insert(5);
    tree->insert(11);
    tree->printTree();
    TreeNode<int> *node = tree->find(8);

    printTreeNode("node", node);

    node = tree->findMin();
    printTreeNode("min", node);
    node = tree->findMax();
    printTreeNode("max", node);


    int elem = 2;
    tree->remove(elem);
    tree->printTree();

    node = tree->find(elem);
    printTreeNode("node", node);


    delete (tree);
}
