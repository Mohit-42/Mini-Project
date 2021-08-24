#pragma once
#include <iostream>

using namespace std;


class Node
{
    public:
        int key;
        Node *right_sibling;
        Node *left_child;

        Node(): right_sibling(nullptr),left_child(nullptr){}
        Node(int key): key(key), right_sibling(nullptr),left_child(nullptr){}
};
class LCRS_Tree:public Node
{
private:
     int k;//represents max no. of child
     int b=0;
     Node *ROOT;
public:

    LCRS_Tree();
    Node* createRoot(int data);
    Node* newNode(int data);
    bool fitChild(Node *n);
    Node* addChild(Node * n, int a);
    void showChildren(Node *c);
    void traverseTree(Node * root);
    bool Find ( Node * root,int a);
    

};
