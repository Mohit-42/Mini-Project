#include <iostream>
#include"Tree.h"
using namespace std;

int main()
{   LCRS_Tree A;
    Node *root = A.newNode(20);
    Node *a  = A.addChild(root,19);//1st child of root
    Node *b  = A.addChild(root,18);//2nd child of root
    Node *c  = A.addChild(root,17);//3rd child of root
    Node *d  = A.addChild(root,16);//4th child of root
    cout<<A.fitChild(root)<<endl;
    Node *g  = A.addChild(b,13);
    Node *h  = A.addChild(b,12);
    Node *e  = A.addChild(root,15);//5th child of root
    cout<<A.fitChild(root)<<endl;
    Node *f  = A.addChild(root,14);//doesn't  get added
    Node *i  = A.addChild(a,11);
    Node *j  = A.addChild(a,10);
    Node *k  = A.addChild(g,9);
    Node *l  = A.addChild(h,8);
    Node *m  = A.addChild(d,7);
    Node *n  = A.addChild(d,6);
    cout<<A.Find(root,14)<<endl;
    A.traverseTree(root);
    A.showChildren(a);
    cout<<A.Find(root, 11)<<endl;
    A.showChildren(d);
    A.showChildren(b);
return 0;
}
