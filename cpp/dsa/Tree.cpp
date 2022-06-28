// Binary Search Tree

//#include<bits/stdc++.h>
//#include<H:\Sushant\VS Code\CPP\myFunctions.cpp>
#include<iostream>

using std::cout; using std::cin; using std::endl;

class Node {
public:
    int data;
    Node* left, *right;

    Node(int value){
        this->data = value;
        this->left = this->right = nullptr;
    }
};

void preOrder(Node* root){
    if(root!=nullptr){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node* root){
    if(root!=nullptr){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root!=nullptr){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

Node* search(Node* root, int value){
    if(root==nullptr)
        return nullptr;
    else if(root->data==value)
        return root;
    else if(root->data<value)
        return search(root->right, value);
    else
        return search(root->left, value);
}

int main(){
    // Level 1
    Node *root = new Node(100);

    // Level 2
    root->left = new Node(66);
    root->right = new Node(105);

    // Level 3
    root->left->left = new Node(55);
    root->left->right = new Node(70);
    root->right->left = new Node(102);
    root->right->right = new Node(106);

    // cout<<"preOrder Traversal\t"; preOrder(root);
    // cout<<endl;
    cout<<"inOrder Traversal\t"; inOrder(root);
    // cout<<endl;
    // cout<<"postOrder Traversal\t"; postOrder(root);
    // Node* result=search(root, 63);
    // if(result!=nullptr)
    //     cout<<result->data;
    // else
    //     cout<<"Not Found";
    return 0;
}