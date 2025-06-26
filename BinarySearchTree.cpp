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

    void insert()
    {
        int x;
        cout << "Masukan nilai: ";
        cin >> x;

        // step 1: Allocate memory for the new node
        Node *newNode = new Node();

        //Step 2: Assign value to the data field of new node
        newNode->info = x;

        // Step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4:  Locate the node which will be the parrent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);
        
        // Step 5: If parent is NULL (Tree is empty)
        if (parent == nullptr)
        {
            // 5a Mark the new node as ROOT
            ROOT = newNode;

            // 5b : Exit
            return;
        }

};

int main(){

    return 0;
}