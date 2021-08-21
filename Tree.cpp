
#include"Tree.h"
#include <iostream>

using namespace std;

LCRS_Tree::LCRS_Tree()
    {
        cout<<"Enter the max number of child a node can have (k)"<<endl;
        cin>>k;
        cout<<endl;

    }


Node* LCRS_Tree::newNode(int data)
    {
    {
    Node *newNode = new Node(data);
    return newNode;
    }
    }

bool LCRS_Tree::fitChild(Node *n)
    {
         int a=1;

        if (n==NULL)
            {
                cout<<"Node provided in NUll"<<endl;
            }
            if(n->left_child==nullptr)// given node has no child
                {return true;}
        n=n->left_child;
        while (n->right_sibling!=nullptr)
                {
                    a++;
                    n=n->right_sibling;
                }

        if(a<k)
            {return true;}
        else
            {return false;}



    }

Node* LCRS_Tree::addChild(Node * n, int a)
    {


            if (n==nullptr)
            {
            cout<<"\nNode provided in NUll"<<endl;
            return nullptr;
            }
            else if(fitChild(n)==1)
            {


            if(n->left_child==nullptr)
            {return (n->left_child = newNode(a));}
            n=n->left_child;
            while (n->right_sibling!=nullptr)
                {


                    n=n->right_sibling;

                }
            return (n->right_sibling = newNode(a));
            }

            else
           {cout<<"\nChild Limit reached"<<endl;
            return nullptr;}


    }
void LCRS_Tree::showChildren(Node *c)
    {
        if(c->left_child==nullptr)
        {
            cout<<"The node has no Child"<<endl;
        }
        else
        {
            c=c->left_child;
            cout<<"\n"<<c->key<<"";
            while(c->right_sibling)
            {
                c=c->right_sibling;
                cout<<" "<<c->key<<"";
            }
            cout<<endl;
        }
        return;
    }

void LCRS_Tree::traverseTree(Node* root)
    {
    if (root == NULL)
        return;

    while (root)
    {

        cout << root->key<< " ";
          if (root->left_child)

           {traverseTree(root->left_child);}
        root = root->right_sibling;


    }
    }
 bool LCRS_Tree::Find ( Node * root,int a)
    {
        while (root)
        {
        if(root->key==a)
        {
            f=true;
        }
        else if (root->left_child)

           {Find(root->left_child,a);}
        root = root->right_sibling;



        }
        return f;
    }
void LCRS_Tree::deleteNode(Node *n)
{
    if (n == NULL)
        return;
    else if(!n->left_child && !n->right_sibling)
    {

    }
}

