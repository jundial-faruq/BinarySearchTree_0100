#include <iostream>
using namespace std;

class Node{
public:
    int info;
    Node * leftchild;
    Node * rightchild;

    //Constructor for the node class
    Node()
    {
        leftchild = nullptr; // initialize left child to null
        rightchild = nullptr; // initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; //Initializing ROOT to null 
    }

    
}

int main(){

    return 0;
}